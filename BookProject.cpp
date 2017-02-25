#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;
void clearer() {
    cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

class Author{
private:
    string firstname;
    string lastname;
    string birthday;
public:
    Author():firstname(""),lastname(""),birthday("01.01.1970"){}
    void setParams(string f,string l,string b){this->firstname=f;this->lastname=l;this->birthday=b;}
    void show(){cout<<this->firstname<<" "<<this->lastname<<" "<<this->birthday<<endl;}
};

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
	void add();
	void show();
	void search();
	void updaterate();
    string bookTitle(){return this->title;}
};

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
	cout<<"Название: ";
	cin>>this->title;
    string f,l,b;
    cout << "Имя автора: ";
    cin>>f;
    cout << "Фамилия автора: ";
    cin>>l;
    cout << "День рождения автора: ";
    cin>>b;
    this->author.setParams(f,l,b);
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
	cout<<"\n*    Год написания книги: ";
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
bool search(string s,vector<Book> newbooks){
    bool checker = false;
    for (size_t i = 0; i < newbooks.size(); i++) {
        if (s==newbooks[i].bookTitle()) {
            checker = true;break;
        }
    }
    return checker;
}
void showAllTheBooks(vector<Book> newbooks){    //!!!!!!!!!!!!!! Добавить "пока пусто"
    if (newbooks.size()==0) {
        cout<<"Книг пока нет!\n";
    }else{
    cout<<"Все книги:\n";
    for (size_t i = 0; i < newbooks.size(); i++) {
        cout<<"######"<<i+1<<" - "<<newbooks[i].bookTitle()<<endl;
    }}
}
void sortBooksByData(){

}

int main(){
    setlocale(0, "");
    vector<Book> books(0);
    int a = 1;
    for(;a;){
        cout<<"0 - Завершить программу."<<endl;
        cout<<"1 - Просмотреть список книг."<<endl;
        cout<<"2 - Добавить книгу."<<endl;
        cout<<"3 - Изменить параметр книги."<<endl;
        cout<<"4 - Найти книгу по названию"<<endl;
        cout<<"6 - Просмотреть список писателей."<<endl;
        cout<<"7 - В разработке."<<endl;
        cout<<"5 - В разработке."<<endl;
        cout<<"6 - В разработке."<<endl;
        cout<<"7 - В разработке."<<endl;
        cin>>a;
        switch (a) {
            case 0:{
                cout<<"Выход из цикла..\n";
                break;
            }
            case 1:{
                cout<<"1 - По дате.\n2 - В алфавитном порядке.\n";
                int what;
                cin>>what;
                switch (what) {
                    case 1:{
                        showAllTheBooks(books);
                        break;
                    }
                    case 2:{}
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
                cout<<"4ssssssss\n";
                break;
            }
            case 4:{
                cout<<"Введите название: ";
                string booksName;
                cin>>booksName;
                if(search(booksName,books)){
                    cout<<"Ваша книга:";
                    
                }
                else
                    cout<<"Нет такой книги!\n";
                break;}
            case 5:cout<<"В разработке..."<<endl;break;
            case 6:cout<<"В разработке..."<<endl;break;
            case 7:cout<<"В разработке..."<<endl;break;
            default:cout<<"Введите,пожалуйста, другое число..";break;
        }
    }
    cout<<"      Завершение программы..."<<endl;
}
