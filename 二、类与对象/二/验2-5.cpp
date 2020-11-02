#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;

class MyPointer{
public:
	MyPointer(double x, double y)
	{
		p_x = x; p_y = y;
	}
	double get_x(){ return p_x; }
	double get_y(){ return p_y; }

	friend void f_distance(MyPointer, MyPointer);
private:
	double p_x, p_y;
};

void f_distance(MyPointer a, MyPointer b)
{
	double result = sqrt(pow(abs(a.p_x - b.p_x),
   						2) + pow(abs(a.p_y - b.p_y), 2));
	cout << "普通函数求算distance:" << result << endl;
}

void mydistance(MyPointer a, MyPointer b)
{
	double result = sqrt(pow(abs(a.get_x() -b.get_x()), 2) +
  							 pow(abs(a.get_y() - b.get_y()), 2));
	cout << "友元函数求算distance:" << result << endl;
}

int main()
{
	MyPointer p1(0, 0), p2(5, 0);

	mydistance(p1, p2);
	f_distance(p1, p2);
	system("pause");
	return 0;
}
