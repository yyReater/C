#include <iostream>
using namespace std;

class Test                                         //����Test��
{
public:
	Test() :m_nX(10){}
	inline void print();                        //������������
	void display(int y);
private:
	int m_nX;
};
void Test::print()                               //������������
{
	cout << m_nX << endl;
}
void Test::display(int y)
{
	cout << m_nX * y << endl;
}
int main()
{
	Test obj;                                     //���������
	obj.display(10);
	obj.print();                                 //������������
	system("pause");
	return 0;
}
