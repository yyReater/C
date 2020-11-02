#include <iostream>
using namespace std;

class Bird{                                                  //��������
public:
	Bird(int fh)                                            //��������������Ĺ��캯��
	{
		cout << "Bird constructor!" << endl;
		m_nFlightAltitude = fh;
	}
	//����������շɵĳ�Ա����
	void fly_in_sky()	{ cout << "bird fly in sky!" << endl; }
	//����������ĳ�Ա����
	void breath() { cout << "bird breath!" << endl; }
	//�����ȡ����и߶ȵĳ�Ա����
	int get_flightaltitude() { return m_nFlightAltitude; }
private:
	int m_nFlightAltitude;
};
class Fish                                                  //��������
{
public:
	Fish(int speed)                                      //����������������캯��
	{
		cout << "Fish constructor!" << endl;
		m_nSwimSpeed = speed;
	}
	//��������ˮ���εĳ�Ա����
	void swim_in_water()	{ cout << "fish swim in water!" << endl; }
	//����������ĳ�Ա����
	void breath() { cout << "fish breath!" << endl; }
	//�����ȡ���ٵĳ�Ա����
	int get_swimspeed() { return m_nSwimSpeed; }
private:
	int m_nSwimSpeed;
};
//����������-ˮ���࣬�̳��Ի���Bird��Fish
class WaterBird :public Bird, public Fish
{
public:
	//����ˮ����������Ĺ��캯�������е��û���Ĺ��캯��
	WaterBird(int fh, int speed) :Bird(fh), Fish(speed)
	{
		cout << "WaterBird constructor!" << endl;
	}
	//����ˮ����Ϊ�ĳ�Ա����
	void fly_swim() { cout << "waterbird cat fly and swim!" << endl; }
	//����ˮ������ĳ�Ա����
	void breath(){ cout << "waterbird breath!" << endl; }
};
int main()
{
	WaterBird waterbird(20, 30);                         //����ˮ�����
	//����get_flightaltitude()��������ʾˮ����и߶�
	cout << "waterbird flight altitude: " << waterbird.get_flightaltitude();
	//����get_swimspeed()��������ʾˮ������
	cout << ", swimming speed:" << waterbird.get_swimspeed() << endl;
	system("pause");
	return 0;
}
