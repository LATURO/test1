#include<iostream>

using namespace std;

bool ifLeap(int year){
	if(year%400==0)
		return true;
	else if(year%100==0)
		return false;
	else if(year%4==0)
		return true;
	else
		return false;
}
void yearToUnixtime(int &year,int &ut){
	if (year<1970)
		ut+=0;//неважно
	else
		while (year>=1970) {
        	if(ifLeap(year))
            	ut+=366;
        	else
            	ut+=365;
        	year-=1;
    	}
}
void monthToUnixtime(int &month, int year, int &ut ) {
	switch(month){
		case 11:ut+=30;
		case 10:ut+=31;
		case 9:ut+=30;
		case 8:ut+=31;
		case 7:ut+=31;
		case 6:ut+=30;
		case 5:ut+=31;
		case 4:ut+=30;
		case 3:ut+=31;
		case 2:ut+=(ifLeap(year)?29:28);
		case 1:ut+=31;
	}
}

class Date{
private:
	int year;
	int month;
	int day;
    int unixtime;
public:
	Date();
    Date(int);
    Date(int,int,int);
	void showYear();
};
void Date::showYear(){
	cout<<this->year;
}
Date::Date(){
	this->year=0;
	this->month=0;
	this->day=0;
	this->unixtime = 0;
}
Date::Date(int year){
	this->year=year;
	this->month=0;
	this->day=0;
	this->unixtime=0;
	cout<<"\n--"<<this->unixtime;
	yearToUnixtime(this->year, this->unixtime);
	cout<<"\n--"<<this->unixtime;
}
Date::Date(int year,int month,int day){
	this->year=year;
	this->month=month;
	this->day=day;
    this->unixtime = day;
	yearToUnixtime(this->year, this->unixtime);
	monthToUnixtime(this->month, this->year, this->unixtime);
	this->unixtime+=day;
}

class Autor{
private:
    string firstname;
    string lastname;
    string fathersname;
    Date birthday;
public:
    Autor();
};

class Book{
private:
	string title;
	int rate;
    Date date;
	int pages;
	int minage;
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
	Date date(0);
	this->pages = 0;
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
    int year;
	cout<<"Year, when the book was written: ";
	cin>>year;
	Date date(year);
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
	this->date.showYear();
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
void Book::search(){

}
void Book::updaterate(){

}

int main(){
	Book newbook;
	newbook.add();
	newbook.show();

}
