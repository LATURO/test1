#include<iostream>

using namespace std;
class Book(){
private:
	string title;
	int rate;
	Date date();
	int pages;
	int oldmin;
	string genre;
	string 	author;
public:
	void add(string/*title*/,int/*rate*/,int/*pages*/,int/*oldmin*/,string/*genre*/,string/*author*/);
	void show();
	void search();
	void updaterate();
}
void Book::add(){

}
void Book::show(){

}
void Book::search(){

}
void Book::updaterate(){

}
class Date{
private:

public:
    Date(arguments);
};

class Autor{
private:
    string firstname;
    string lastname;
    string fathersname;
    Date birthday;
public:
    Autor(arguments);
};
int main(){
    Book myNewBook;
}
