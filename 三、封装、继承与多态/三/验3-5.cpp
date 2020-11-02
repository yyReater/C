#include <iostream>
#include <math.h>
using namespace std;

class Point  //����
{
private:
	double x;
	double y;
public:
	Point(double i, double j) : x(i), y(j) { } //���캯��
	void print() const  //��Ա��������ӡ����
	{ 
		cout << "(" << x << ", " << y << ")";
	}
};
class Figure  //��״��
{
private:
	Point center; //���ݳ�Ա�������һ����
public:
	Figure(double i = 0, double j = 0) : center(i, j) { }

	Point& location()  //ȷ�����ĵ�λ��
	{
		return center;
	}                 
	void move(Point p)  //�ƶ���
	{
		center = p;
		draw();
	}
	virtual void draw() = 0; // ����ͼ��
	virtual void rotate(double) = 0;   //���麯������ת��״   
};

class Circle : public Figure  //Բ��̳���״��
{
private:
	double radius; //�뾶
public:
	//���캯��
	Circle(double i = 0, double j = 0, double r = 0):
  								Figure(i,j), radius(r) {} 
	void draw() //�̳л����draw()������ʵ��Ϊ��Բ�εĺ���
	{
		cout << "A circle with center ";
		location().print(); 
  				//location()���ص���Point����󣬵���print()��ӡ����λ��
		cout << " and radius " << radius << endl; //��ӡ���뾶
	}
	void rotate(double) //ʵ�ֻ���Ĵ��麯��
	{
		cout << "no effect.\n"; //Բ��û����ת
	}       
};
class Square : public Figure  //���μ̳���״��
{
private:
	double side;        // �߳�
	double angle;        //�Ƕ�
public:
	Square(double i = 0, double j = 0, double d = 0, double a = 0) :
  								 Figure(i, j), side(d), angle(a) { }
	void draw()  //�̳л�����麯��draw()����������
	{
		cout << "A square with center "; 
		location().print();  //��ӡ�����ε�����
		//��ӡ���߳���x��ĽǶ�
		cout << " side length " << side << ".\n"  
			<< "The angle between one side and the X-axis is "
 													 << angle << endl;
	}
	void rotate(double a) //��������תa��
	{
		angle += a;
		cout << "The angle between one side and the X-axis is "
  													 << angle << endl;
	}
	
};
int main()
{
	Circle c(1, 2, 3); //����Բ�Σ�������Բ�ġ��뾶
	Square s(4, 5, 6); //�������Σ�������
	Figure *f = &c, &g = s;  //����ָ��ָ���������
	f->draw();  //��Բ��
	f->move(Point(2, 2));  //��Բ�ƶ�����2��2��λ��
	g.draw(); //������
	g.rotate(1); //��ת����

	system("pause");
	return 0;
}
