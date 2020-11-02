#include <iostream>
using namespace std;

class Base
{
private:
	int priv; //私有成员
protected:
	int prot; //保护成员
	int get_priv() { return priv; } //保护成员函数，用于获取私有数据成员
public:
	int publ; //公有成员
	Base();   //无参构造函数
	Base(int a, int b, int c) : priv(a), prot(b), publ(c) { }//有参构造函数
	int get_prot() { return prot; }
	int get_publ() { return publ; }
};

///////////////////////////////////////////////////////////////////
class Derived1 : private Base  //派生类私有继承基类
{
public:
	Derived1(int a, int b, int c) : Base(a, b, c) { } //构造函数
	int get1_priv() { return get_priv(); }  //不可访问基类的私有成员
	
	int get1_prot() { return prot; }
	int get1_publ() { return publ; }
};

class Leaf1 : public Derived1 //公有继承
{
public:
	Leaf1(int a, int b, int c) : Derived1(a, b, c) { }  //构造函数
	void print()
	{
		cout << "Leaf1 members: " << get1_priv() << " "
			//                        << get_priv( )        // 不可访问
			<< get1_prot() << " "
			//                        << get_prot( )       // 不可访问
			//                        << publ            // 不可访问
			<< get1_publ() << endl;
	} 
};

/////////////////////////////////////////////////////////////////////////
class Derived2 : protected Base // 保护继承
{
public:
	Derived2(int a, int b, int c) : Base(a, b, c) { } //构造函数
};

class Leaf2 : public Derived2   //公有继承
{
public:
	Leaf2(int a, int b, int c) : Derived2(a, b, c) { }
	void print()
	{
		cout << "Leaf2 members: " << get_priv() << " "
			//                        << priv                 // 不可访问
			<< prot << " "
			<< publ << endl;
	} 
};

/////////////////////////////////////////////////////////////////////
class Derived3 : public Base //公有继承
{
public:
	Derived3(int a, int b, int c) : Base(a, b, c) { }
};

class Leaf3 : public Derived3 //公有继承
{
public:
	Leaf3(int a, int b, int c) : Derived3(a, b, c) { }
	void print()
	{
		cout << "Leaf3 members: " << get_priv() << " "
			<< prot << " "
			<< publ << endl;
	} 
};

int main()
{
	Derived1 d1(1, 2, 3);
	Derived2 d2(4, 5, 6);
	Derived3 d3(7, 8, 9);
	//        cout << d1.publ;                // 不可访问
	//        cout << d1.get_priv( );        // 不可访问
	//        cout << d2.publ;                // 不可访问
	//        cout << d2.get_priv( );        // 不可访问
	cout << d3.publ;                // OK
	cout << d3.get_prot();        // OK
	Leaf1 lf1(1, 2, 3);
	Leaf2 lf2(4, 5, 6);
	Leaf3 lf3(7, 8, 9);
	//         cout << lf1.publ << endl;                    // 不可访问
	//         cout << lf2.publ << endl;                // 不可访问
	cout << lf3.publ << endl;                 // OK
	system("pause");
	return 0;
}