Point::Point(const Point &p){
    this->setParam(p.x,p.y,*(p.color));
    cout<<"copy ";
    this->show();
}
int main(int argc, const char * argv[]) {
    
}
