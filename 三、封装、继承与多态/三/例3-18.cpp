#include <iostream>
using namespace std;

class Animal                                       //�������Animal
{
public:
	//����speak()����
	void speak(){ cout << "animal language!" << endl; }
//	virtual void speak(){ cout << "animal language!" << endl; }
};
class Cat :public Animal                         //����������Cat
{
public:
	//���������ͬ���ĺ���speak()
	void speak(){ cout << "cat language: miaomiao!" << endl; }
};
int main()
{
	Cat cat;                                          //�������������cat
	Animal *panimal = &cat;                       //�������ָ�벢ָ�����������
	panimal->speak();                              //ͨ��ָ�����speak()����

	return 0;
}
