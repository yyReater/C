#include <iostream>
#include <math.h>
using namespace std;

class Point  //点类
{
private:
	double x;
	double y;
public:
	Point(double i, double j) : x(i), y(j) { } //构造函数
	void print() const  //成员函数，打印出点
	{ 
		cout << "(" << x << ", " << y << ")";
	}
};
class Figure  //形状类
{
private:
	Point center; //数据成员是类对象，一个点
public:
	Figure(double i = 0, double j = 0) : center(i, j) { }

	Point& location()  //确定中心点位置
	{
		return center;
	}                 
	void move(Point p)  //移动点
	{
		center = p;
		draw();
	}
	virtual void draw() = 0; // 画出图形
	virtual void rotate(double) = 0;   //纯虚函数，旋转形状   
};

class Circle : public Figure  //圆类继承形状类
{
private:
	double radius; //半径
public:
	//构造函数
	Circle(double i = 0, double j = 0, double r = 0):
  								Figure(i,j), radius(r) {} 
	void draw() //继承基类的draw()函数，实现为画圆形的函数
	{
		cout << "A circle with center ";
		location().print(); 
  				//location()返回的是Point类对象，调用print()打印出点位置
		cout << " and radius " << radius << endl; //打印出半径
	}
	void rotate(double) //实现基类的纯虚函数
	{
		cout << "no effect.\n"; //圆形没有旋转
	}       
};
class Square : public Figure  //矩形继承形状类
{
private:
	double side;        // 边长
	double angle;        //角度
public:
	Square(double i = 0, double j = 0, double d = 0, double a = 0) :
  								 Figure(i, j), side(d), angle(a) { }
	void draw()  //继承基类的虚函数draw()来画出矩形
	{
		cout << "A square with center "; 
		location().print();  //打印出矩形的中心
		//打印出边长与x轴的角度
		cout << " side length " << side << ".\n"  
			<< "The angle between one side and the X-axis is "
 													 << angle << endl;
	}
	void rotate(double a) //将矩形旋转a度
	{
		angle += a;
		cout << "The angle between one side and the X-axis is "
  													 << angle << endl;
	}
	
};
int main()
{
	Circle c(1, 2, 3); //构建圆形，参数：圆心、半径
	Square s(4, 5, 6); //构建矩形，参数：
	Figure *f = &c, &g = s;  //基类指针指向子类对象
	f->draw();  //画圆形
	f->move(Point(2, 2));  //将圆移动到（2，2）位置
	g.draw(); //画矩形
	g.rotate(1); //旋转矩形

	system("pause");
	return 0;
}
