#include<iostream>
#include<string>
class Shape{
    protected:
    std::string color;
    public:
    Shape(const std::string& c):color(c){
        std::cout << "a Shape with color" << color << "has been drawn";
    }
    virtual void draw() const = 0;
    virtual ~Shape(){
        std::cout << "Shape is destroyed \n"; 
    }
};
class Circle:public Shape{
    double radius;
    public:
    Circle(double r,const std::string& c):radius(r),Shape(c){
        std::cout << "A Circle has been Created with radius: " << r << std::endl;
    }
    void draw()const override{
        std::cout << "A shape has been drawn with color:" << color << "and radius" << radius << std::endl;
    }
    ~Circle() override{
        std::cout << "circle is destroyed \n";
    }
};
class Square:public Shape{
    double side;
    public:
    Square(double s,const std::string c):side(s),Shape(c){
        std::cout << "A Shape has been created with color: " << c << std::endl;
    }
    void draw()const override{
        std::cout << "A square has been created with side: "<< side << std::endl;
    }
    ~Square() override{
        std::cout << "square is destroyed \n";
    }
};
class Triangle: public Shape{
    double height;
    double base;
    public:
    Triangle(double h,double b,const std::string c):height(h),base(b),Shape(c){
        std::cout << "a Shape has been created with color: " << c << std::endl;
    }
    void draw()const override{
        std::cout << "A triangle has been created with height:" << height << "and base" << base << std::endl;
    }
    ~Triangle() override{
        std::cout << "triangle is destroyed\n";
    }
};
void randomShape(const Shape* Shape){
    Shape->draw();
}
int main(){
    Circle circle(4.50,"red");
    Triangle triangle(45.0,30.0,"blue");
    Square square(10.40,"black");
    randomShape(&triangle);
    Shape* shapes[3];
    shapes[0] = new Circle(88.00,"yellow");
    shapes[1] = new Square(45.00,"green");
    shapes[2] = new Triangle(23.00,10.00,"pink");
    for(int i = 0; i < 3; i++){
        shapes[i]->draw();
        delete[]shapes[i] ;
    }
}