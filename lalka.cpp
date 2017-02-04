#include <iostream>

using namespace std;

class Book{
private:
	string name;
	string autor;
	unsigned int year;
	string tema;
	unsigned int max_adult;
	unsigned int pages;
	int rate;
	int position;
public:
	void show();
	void update_rating();
	void move(int pos);
};
void Book::show(){

}
void Book::update_rating(){

}
void Book::move(){

}

class libary{
    Book * books;
    int book_num;
public:
    libary();
    ~libary();
    void add_book(const book&b);
    void update_all();
    void print_all();
};

int main()
{
	return 0;
}
#include <iostream>

using namespace std;

class Book{
private:
	string name;
	string autor;
	unsigned int year;
	string tema;
	unsigned int max_adult;
	unsigned int pages;
	int rate;
	int position;
public:
	void show();
	void update_rating();
	void move(int pos);
};
void Book::show(){

}
void Book::update_rating(){

}
void Book::move(){

}

class libary{
    Book * books;
    int book_num;
public:
    libary();
    ~libary();
    void add_book(const book&b);
    void update_all();
    void print_all();
};

int main()
{
	return 0;
}
