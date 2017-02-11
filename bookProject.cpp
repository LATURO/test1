#include<iostream>

using namespace std;

class Date{
private:
    int unixtime;
public:
    Date(int);
    Date(int,int,int);
};
Date::Date(int year){
    this->unixtime = 0;
    while (year>=1970) {
        if(year%400==0)
            this->unixtime+=366;
        else if(year%100==0)
            this->unixtime+=365;
        else if(year%4==0)
            this->unixtime+=366;
        else
            this->unixtime+=365;
        year-=1;
    }
    cout<<unixtime;
}
Date::Date(int year,int month,int day){
    this->unixtime = day;
    while (year>=1970) {

        if(year%400==0)
            this->unixtime+=366;
        else if(year%100==0)
            this->unixtime+=365;
        else if(year%4==0)
            this->unixtime+=366;
        else
            this->unixtime+=365;
        year-=1;
    }
    this->unixtime+=month*30;
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
    Date year;
	int pages;
	int oldmin;
	string genre;
	string 	author;
public:
	void add();
	void show();
	void search();
	void updaterate();
};
void Book::add(){
	cin>>this->title;
	cin>>this->author;
    int year;
    
    cin>>this->oldmin;
	cin>>this->genre;
	cin>>this->rate;
	cin>>this->pages;
}
void Book::show(){

}
void Book::search(){

}
void Book::updaterate(){

}

int main(){
    int a;
    cin>>a;
    Date sd(a);
}
