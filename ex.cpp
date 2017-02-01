#include<iostream>

using namespace std;

class Point{
    int x,y, *color = new int;
public:
    Point(int,int,int);
    Point(const Point &);
    void setParam(int,int,int);
    void show();
    ~Point();
};

Point::Point(int x,int y,int color){
    this->setParam(x,y,color);
    cout<<"create ";
    this->show();
}

Point::Point(const Point &p){
    this->setParam(p.x,p.y,*(p.color));
    cout<<"copy ";
    this->show();
}
void Point::show(){
    cout<<"Point ("<<this->x <<", "<<this->y<<") , color = "<<*(this->color)<<endl;
}
Point::~Point(){
    cout<<"delete ";
    this->show();
    delete this->color;
}
Point fun(Point p){
    cout<<"-------\n";
    p.show();
    cout<<"---------\n";
    return p;
}
int main() {
    Point p(5,5,10);
    fun(p);
    Point t=p;
}
