#include <iostream>
#include <vector>
using namespace std;

class Author{
public:
    string firstname;
    string lastname;
    string birthday;
    Author():firstname(""),lastname(""),birthday("01.01.1970"){}
    void setParams(string f,string l,string b){this->firstname=f;this->lastname=l;this->birthday=b;}
    void writein(string name,string lastname,string birthday,vector<Author> authors);
    void show(){cout<<this->firstname<<" "<<this->lastname<<" "<<this->birthday<<endl;}
};
vector<Author> authors(0);
class Book{
private:
	string title;
    Author author;
	int rate;
	unsigned int pages;
    unsigned short date;
	unsigned short minAge;
	string genre;
public:
	Book();
    int datereturn(){return this->date;}
    void dateset(int newdate){this->date=newdate;}
	void add();
	void show();
	void search();
	void updaterate();
    string bookTitle(){return this->title;}
};
void show_allauthors(){
	for (int i = 0; i < authors.size(); ++i)
	{
		cout<<"№"<<i+1<<"";
		authors[i].show();
	}
}
void writein(string name,string lastname,string birthday){
	bool flag=false;
	for (int i = 0; i < authors.size(); ++i)
	{
		if ((name==authors[i].firstname)&&(lastname==authors[i].lastname)&&(birthday==authors[i].birthday))
		{
			flag=true;
		}
	}
	if (!flag)
	{
		Author a;
		a.setParams(name,lastname,birthday);
		authors.push_back(a);
	}
}
Book::Book(){
	this->title = "";
	this->rate = 0;
	this->pages = 0;
    this->date = 0;
	this->minAge = 0;
	this->genre = "";
}
void Book::add(){
	cout<<"- - - - - Добавление книги - - - -\n";
	string f,l,b;
	cout<<"Название: ";
	cin>>this->title;
    cout << "Имя автора: ";
    cin>>f;
    cout << "Фамилия автора: ";
    cin>>l;
    cout << "Дата рождения автора: ";
    cin>>b;
    this->author.setParams(f,l,b);
    writein(f,l,b);
    cout<<"Год, в котором книга была написана: ";
	cin>>this->date;
	cout<<"Минимальный возраст: ";
    cin>>this->minAge;
	cout<<"Жанр: ";
	cin>>this->genre;
	cout<<"Рейтинг: ";
	cin>>this->rate;
	cout<<"Количество страниц: ";
	cin>>this->pages;
    cout<<"Книга добавлена!\n";
}
void Book::show(){
	cout<<"*********************************************\n";
	cout<<"*Название: ";
	cout<<this->title;
	cout<<"\n*    Автор: ";
    this->author.show();
	cout<<"*    Год написания книги: ";
	cout<<this->date;
	cout<<"\n*    Минимальный возраст: ";
    cout<<this->minAge;
	cout<<"\n*    Пол: ";
	cout<<this->genre;
	cout<<"\n*    Рейтинг: ";
	cout<<this->rate;
	cout<<"\n*    Количество страниц: ";
	cout<<this->pages;
	cout<<"\n*********************************************\n";
}
int search(string s,vector<Book> newbooks){
	int i = 0;
	bool ch=true;
    for (; i < newbooks.size(); i++) {
        if (s==newbooks[i].bookTitle()) {
            ch=false;
            break;
        }
    }
    if(ch){
    	return -1;
    }
    else
    {
        return i;
    }
}
void printSortedByINDATE(vector<Book> newbooks){
    if (newbooks.size()==0) {
        cout<<"Книг пока нет!\n";
    }else{
        cout<<"Все книги:\n";
        for (size_t i = 0; i < newbooks.size(); i++) {
            cout<<"№"<<i+1<<" - "<<newbooks[i].bookTitle()<<endl;
        }
    }
}
void printSortedByName(vector<Book>newbooks){
    if (newbooks.size()==0) {
        cout<<"Книг пока нет!\n";
    }else{
        Book tmp;
        for (size_t i = 0; i < newbooks.size(); i++) {
            for (size_t j = 0; j < newbooks.size()-i-1; j++) {
                    if(int(newbooks[j].bookTitle()[0])>int(newbooks[j+1].bookTitle()[0])){
                    tmp=newbooks[j];
                    newbooks[j] = newbooks[j+1];
                    newbooks[j+1] = tmp;
                }
            }
        }
        cout<<"Все книги:\n";
        for (size_t i = 0; i < newbooks.size(); i++) {
            cout<<i+1<<"."<<newbooks[i].bookTitle()<<endl;
        }
    }
}
void printSortedByDate(vector<Book>newbooks){
    if (newbooks.size()==0) {
        cout<<"Книг пока нет!\n";
    }else{
        Book tmp;
        for (size_t i = 0; i < newbooks.size(); i++) {
            for (size_t j = 0; j < newbooks.size()-i-1; j++) {
                if(newbooks[j].datereturn()>newbooks[j+1].datereturn()){
                    tmp=newbooks[j];
                    newbooks[j] = newbooks[j+1];
                    newbooks[j+1] = tmp;
                }
            }
        }
        cout<<"Все книги:\n";
        for (size_t i = 0; i < newbooks.size(); i++) {
            cout<<newbooks[i].datereturn()<<" -> "<<newbooks[i].bookTitle()<<endl;
        }
    }
}

int main(){
    setlocale(0, "");
    vector<Book> books(0);
    int a = 1;
    for(;a;){
        cout<<"0 - Завершить программу."<<endl;     //Сделано
        cout<<"1 - Просмотреть список книг."<<endl; //Cделано
        cout<<"2 - Добавить книгу."<<endl;          //Сделано
        cout<<"3 - Изменить параметр книги."<<endl; //------
        cout<<"4 - Найти книгу по названию"<<endl;  //Сделано
        cout<<"5 - Просмотреть список писателей."<<endl; //Сделано
        cout<<"6 - Список книг по автору."<<endl;   //------
        cin>>a;
        switch (a) {
            case 0:{
                cout<<"Выход из цикла..\n";
                break;
            }
            case 1:{
                cout<<"1 - По дате.\n2 - В алфавитном порядке.\n3 - По времени добавления.\n";
                int what;
                cin>>what;
                switch (what) {
                    case 1:{
                        printSortedByDate(books);
                        break;
                    }
                    case 2:{
                        printSortedByName(books);
                        break;
                    }
                    case 3:{
                        printSortedByINDATE(books);
                        break;
                    }
                    default:break;
                }
                break;
            }
            case 2:{
               	books.resize(books.size()+1);
               	books[books.size()-1].add();
                break;

            }
            case 3:{
                cout<<"В разработке...\n";
                break;
            }
            case 4:{
                cout<<"Введите название: ";
                string booksName;
                cin>>booksName;
                if(search(booksName,books)!=-1){
                    cout<<"Ваша книга: ";
                    books[search(booksName,books)].show();
                }else
                    cout<<"Нет такой книги!\n";
                break;
            }
            case 5:{
            	show_allauthors();
            	break;
            }
            case 6:
                cout<<"В разработке..."<<endl;
                break;
            default:
                cout<<"Введите,пожалуйста, другое число..";
                break;
        }
    }
    cout<<"Завершение программы..."<<endl;
}
