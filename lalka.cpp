#include <iostream>
using namespace std;
class Book{
public:
	string name;
	string autor;
	unsigned int year;
	string tema;
	unsigned int max_adult;
	unsigned int pages;
	int rate;
	int position;
	void show();
	void update_rating();
	void move(int pos);
};
void Book::show(){
	cout<<"Название "<<name<<endl;
	cout<<"Автор "<<autor<<endl;
	cout<<"Год Издания "<<year<<"г"<<endl;
	cout<<"Жанр "<<tema<<endl;
	cout<<"Ретинг "<<rate<<endl;
	cout<<"Позиция "<<position<<endl;
}
void Book::update_rating(){
this->rate=rand()%100;
}
void Book::move(int pos){

}
class Library
{
	Book books;
	int book_num;
public:
	void show(){
		books.show();
	}
	void add_book(string name,string autor,unsigned int year,string tema,unsigned int max_adult,unsigned int pages,int rate,int position){
		this->books.name=name;
		this->books.autor=autor;
		this->books.year=year;
		this->books.tema=tema;
		this->books.max_adult=max_adult;
		this->books.pages=pages;
		this->books.rate=rate;
		this->books.position=position;
	}
};


int main()
{
	Library a;
	a.add_book("a","a",123,"a",123,123,123,123);
	a.show();
	return 0;
}
