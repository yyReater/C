#include <iostream>
using namespace std;

class Animal                                            //�������Animal
{
public:
	//�����麯��speak()
	virtual void speak(){ cout << "animal language!" << endl; }
};
class Cat :public Animal                             //����������Cat
{
public:
	//����Cat���Լ����麯��speak()
	virtual void speak(){ cout << "cat language: miaomiao!" << endl; }
};
int main()
{
	Cat cat;                                           //�������������cat
	Animal *panimal = &cat;                         //�������ָ�벢��ʼ��Ϊcat��ַ
	Animal &ref = cat;                               //����������ã���ʼ��Ϊcat
	panimal->speak();                                //ͨ��panimalָ�����speak()����
	ref.speak();                                      //ͨ������ref����speak()����

	return 0;
}
