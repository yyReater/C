#include <iostream>
using namespace std;

class Bird                                                 //��������
{
public:
	//����������շɵĳ�Ա����
	void fly_in_sky()	{ cout << "bird fly in sky!" << endl; }
	//����������ĳ�Ա����
	void breath() { cout << "bird breath!" << endl; }
};
class Fish                                              //��������
{
public:
	//��������ˮ���εĳ�Ա����
	void swim_in_water()	{ cout << "fish swim in water!" << endl; }
	//����������ĳ�Ա����
	void breath() { cout << "fish breath!" << endl; }
};
class WaterBird :public Bird, public Fish         //����ˮ����
{
public:
	//����ˮ����Ϊ�ĳ�Ա����
	void fly_swim() { cout << "waterbird cat fly and swim!" << endl; }
};
int main()
{
	WaterBird waterbird;                           //����ˮ�����
	waterbird.fly_in_sky();                       //���ô�����̳�����flyinsky()����
	waterbird.swim_in_water();                   //���ô�����̳�����swiminwater()����
	system("pause");
	return 0;
}
