#include <iostream>
using namespace std;

class Animal                                             //������Animal
{
public:
	//������Animal�Ĺ��캯��
	Animal(int age) :m_nAge(age) { }
	int m_nAge;                                          //��Աm_nAge��¼��������
};
class Bird :virtual public Animal                    //������Bird�̳��������Animal
{
public:
	//������Bird�Ĺ��캯��
	Bird(int age, int fh) :Animal(age), m_nFlightAltitude(fh){	}
	int m_nFlightAltitude;
};
class Fish :virtual public Animal                    //������Fish�̳��������Animal
{
public:
	//������Fish�Ĺ��캯��
	Fish(int age, int speed) :Animal(age), m_nSwimSpeed(speed){	}

	int m_nSwimSpeed;;
};
class WaterBird :public Bird, public Fish        //����ˮ����
{
public:
	//����ˮ����������Ĺ��캯��
	WaterBird(int age, int fh, int speed, int weight) :Bird(age, fh),
		Fish(age, speed), Animal(age), m_nWeight(weight)
	{
	}
	int m_nWeight;
};

int main()
{
	WaterBird waterbird(5, 20, 30, 10);             //����ˮ�����

	cout << "sizeof(waterbird) = " << sizeof(waterbird) << endl;
	cout << "waterbird addr:" << &waterbird << endl;
	cout << "Bird::m_nFlightAltitude addr:"
		<< &(waterbird.m_nFlightAltitude) << endl;
	cout << "Fish::m_nSwimSpeed addr:" << &(waterbird.m_nSwimSpeed) << endl;
	cout << "WaterBird::m_nWeight addr:" << &(waterbird.m_nWeight) << endl;
	cout << "Animal::m_nAge addr:" << &(waterbird.m_nAge) << endl;

	system("pause");
	return 0;
}
