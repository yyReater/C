#include <iostream>
using namespace std;

class Base
{
private:
	int priv; //˽�г�Ա
protected:
	int prot; //������Ա
	int get_priv() { return priv; } //������Ա���������ڻ�ȡ˽�����ݳ�Ա
public:
	int publ; //���г�Ա
	Base();   //�޲ι��캯��
	Base(int a, int b, int c) : priv(a), prot(b), publ(c) { }//�вι��캯��
	int get_prot() { return prot; }
	int get_publ() { return publ; }
};

///////////////////////////////////////////////////////////////////
class Derived1 : private Base  //������˽�м̳л���
{
public:
	Derived1(int a, int b, int c) : Base(a, b, c) { } //���캯��
	int get1_priv() { return get_priv(); }  //���ɷ��ʻ����˽�г�Ա
	
	int get1_prot() { return prot; }
	int get1_publ() { return publ; }
};

class Leaf1 : public Derived1 //���м̳�
{
public:
	Leaf1(int a, int b, int c) : Derived1(a, b, c) { }  //���캯��
	void print()
	{
		cout << "Leaf1 members: " << get1_priv() << " "
			//                        << get_priv( )        // ���ɷ���
			<< get1_prot() << " "
			//                        << get_prot( )       // ���ɷ���
			//                        << publ            // ���ɷ���
			<< get1_publ() << endl;
	} 
};

/////////////////////////////////////////////////////////////////////////
class Derived2 : protected Base // �����̳�
{
public:
	Derived2(int a, int b, int c) : Base(a, b, c) { } //���캯��
};

class Leaf2 : public Derived2   //���м̳�
{
public:
	Leaf2(int a, int b, int c) : Derived2(a, b, c) { }
	void print()
	{
		cout << "Leaf2 members: " << get_priv() << " "
			//                        << priv                 // ���ɷ���
			<< prot << " "
			<< publ << endl;
	} 
};

/////////////////////////////////////////////////////////////////////
class Derived3 : public Base //���м̳�
{
public:
	Derived3(int a, int b, int c) : Base(a, b, c) { }
};

class Leaf3 : public Derived3 //���м̳�
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
	//        cout << d1.publ;                // ���ɷ���
	//        cout << d1.get_priv( );        // ���ɷ���
	//        cout << d2.publ;                // ���ɷ���
	//        cout << d2.get_priv( );        // ���ɷ���
	cout << d3.publ;                // OK
	cout << d3.get_prot();        // OK
	Leaf1 lf1(1, 2, 3);
	Leaf2 lf2(4, 5, 6);
	Leaf3 lf3(7, 8, 9);
	//         cout << lf1.publ << endl;                    // ���ɷ���
	//         cout << lf2.publ << endl;                // ���ɷ���
	cout << lf3.publ << endl;                 // OK
	system("pause");
	return 0;
}