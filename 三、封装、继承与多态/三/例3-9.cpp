#include <iostream>
using namespace std;

class Animal                                                  //�������
{
public:
	//����speak()����
	void speak() { cout << "animal language!" << endl; }
};
class Cat :public Animal                                  //����������
{
public:
	//����speak()����
	void speak()  { cout << "cat language: miaomiao!" << endl; }
};

int main()
{
	Cat cat;                                              //�������������
	cat.speak();                                         //ͨ�����������speak()����
	cat.Animal::speak();                               //���û���ͬ������
	system("pause");
	return 0;
}
