#include <iostream>
using namespace std;

class Animal                                             //������Animal
{
public:
	//������Animal�Ĺ��캯��
	Animal(int age) :m_nAge(age) { cout << "Animal constructor!" << endl; }
protected:
	int m_nAge;                                           //��Աm_nAge��¼��������
};

class Bird :virtual public Animal                     //������Bird�̳��������Animal
{
public:
	//������Bird�Ĺ��캯��
	Bird(int age, int fh) :Animal(age)
	{
		cout << "Bird constructor!" << endl;
		m_nFlightAltitude = fh;
	}
	//�����ȡ����и߶ȵĺ���
	int get_flightaltitude()  { return m_nFlightAltitude; }
private:
	int m_nFlightAltitude;
};

class Fish :virtual public Animal                     //������Fish�̳��������Animal
{
public:
	Fish(int age, int speed) :Animal(age)           //������Fish�Ĺ��캯��
	{
		cout << "Fish constructor!" << endl;
		m_nSwimSpeed = speed;
	}
	//�����ȡ�����ٵĺ���
	int get_swimspeed()  { return m_nSwimSpeed; }
private:
	int m_nSwimSpeed;;
};

class WaterBird :public Bird, public Fish         //����ˮ����
{
public:
	WaterBird(int b_age, int f_age, int fh, int speed) :Bird(b_age, fh),
		Fish(f_age, speed), Animal(b_age)   //����ˮ����������Ĺ��캯��
	{
		cout << "WaterBird constructor!" << endl;
	}
	//�����ӡ��������ĳ�Ա����
	void print_animalage() { cout << "age = " << m_nAge << endl; }
};

int main()
{
	WaterBird waterbird(5, 6, 20, 30);             //����ˮ�����
	cout << "waterbird flight altitude: " << waterbird.get_flightaltitude()
		<< ", swimming speed:" << waterbird.get_swimspeed() << endl;
	waterbird.print_animalage();
	return 0;
}
