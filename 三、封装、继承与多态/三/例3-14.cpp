#include <iostream>
using namespace std;

class Bird                                                  //��������
{
public:
	//����������ĳ�Ա����
	void breath()   { cout << "bird breath!" << endl; }
};
class Fish                                                 //��������
{
public:
	//����������ĳ�Ա����
	void breath()   { cout << "fish breath!" << endl; }
};
class WaterBird :public Bird, public Fish         //����ˮ����
{
public:
	//����ˮ����Ϊ�ĳ�Ա����
	void fly_swim() { cout << "waterbird cat fly and swim!" << endl; }
//	void breath()   { cout << "waterbird breath!" << endl; }	
};

int main()
{
	WaterBird waterbird;                            //����ˮ�����
	//��������WaterBird�̳����������࣬���������д���ͬ������breath()
	//ˮ����������breath()����ʱ�������û���ͬ�������Ķ�����
	waterbird.breath();
	return 0;
}
