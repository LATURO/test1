#include<iostream>
#include<vector>
using namespace std;
void clearer() {
    cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

class Autor{
private:
    string firstname;
    string lastname;
    string fathersname;
    string birthday;
public:
    Autor();
};

class Book{
private:
	string title;
	int rate;
	unsigned int pages;
    unsigned short date;
	unsigned short minage;
	string genre;
	string 	author;
public:
	Book();
	void add();
	void show();
	void search();
	void updaterate();
};

Book::Book(){
	this->title = "";
	this->rate = 0;
	this->pages = 0;
    this->date = 0;
	this->minage = 0;
	this->genre = "";

	this->author = "";
}
void Book::add(){
	cout<<"Add a book, please\n";
	cout<<"Title: ";
	cin>>this->title;
	cout << "Author: ";
	cin>>this->author;
	cout<<"Year, when the book was written: ";
//	cin>>this->date;
	cout<<"Minimal old: ";
    cin>>this->minage;
	cout<<"Genre?: ";
	cin>>this->genre;
	cout<<"Rating: ";
	cin>>this->rate;
	cout<<"Pages: ";
	cin>>this->pages;
}
void Book::show(){
	cout<<"*********************************************\n";
	cout<<"*Title: ";
	cout<<this->title;
	cout<<"\n*    Author: ";
	cout<<this->author;
	cout<<"\n*    Year, when the book was written: ";
	cout<<this->date;
	cout<<"\n*    Minimal old: ";
    cout<<this->minage;
	cout<<"\n*    Genre: ";
	cout<<this->genre;
	cout<<"\n*    Rating: ";
	cout<<this->rate;
	cout<<"\n*    Pages: ";
	cout<<this->pages;
	cout<<"\n*********************************************\n";
}
bool search(string s){
    return true;
}
void Book::updaterate(){

}

int main(){
    setlocale(0, "");
    vector<Book> books;
    int a = 1;
    for(;a;){
        cout<<"0 - Завершить программу."<<endl;
        cout<<"1 - Просмотреть список книг."<<endl;
        cout<<"2 - Добавить книгу."<<endl;
        cout<<"3 - Изменить параметр книги."<<endl;
        cout<<"4 - Найти книгу по названию."<<endl;
        cout<<"5 - В разработке."<<endl;
        cout<<"6 - В разработке."<<endl;
        cout<<"7 - В разработке."<<endl;
        cin>>a;
        switch (a) {
            case 0:{cout<<"Выход из цикла..\n";break;}
            case 1:{cout<<"По дате\n";break;}
            case 2:{cout<<"2wssssssss\n";break;}
            case 3:{cout<<"4ssssssss\n";break;}
            case 4:{
                cout<<"Введите название: ";
                string booksName;
                getline(cin,booksName);
                if(search(booksName))
                    cout<<1;
                else
                cout<<1;
                break;}
            case 5:cout<<"В разработке..."<<endl;break;
            case 6:cout<<"В разработке..."<<endl;break;
            case 7:cout<<"В разработке..."<<endl;break;
            default:cout<<"Введите,пожалуйста, другое число..";break;
        }
        cout<<"      Завершение программы..."<<endl;
    }
}
