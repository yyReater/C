#include <iostream>
using namespace std;

class Singleton{                                         //����Singleton��
public:
	static Singleton *get_instance();                //���徲̬��Ա����
	int get_var();
	void set_var(int);
private:
	Singleton();                                         //�������캯��Ϊ˽�г�Ա
	virtual ~Singleton();                              //��������������
	static Singleton *instance;                       //���徲̬���ݳ�Ա
	int var;
};
Singleton::Singleton()                                  //���幹�캯��
{
	var = 20;
	cout << "Singleton constructor!" << endl;
}
Singleton::~Singleton()                                 //������������
{
	delete instance;
}

Singleton *Singleton::instance = NULL;               //�Ծ�̬���ݳ�Ա���г�ʼ��
//���徲̬��Ա����get_instance()���ú���������̬���ݳ�Աinstance
//��һ�ε��ñ�����ʱ��Ϊinstance�ṩ��Чֵ��һֱ�����������������
Singleton *Singleton::get_instance()
{
	if (NULL == instance){
		//��������һ�ε���ʱ������һ��Singleton���󣬶����ַ��instance��¼
		//�ö���һֱ����ֱ���������
		instance = new Singleton();
	}
	return instance;
}
int Singleton::get_var()                               //����get_var()��Ա����
{
	return var;
}
void Singleton::set_var(int n)                        //����set_var()��Ա����
{
	var = n;
}
int main()
{
	//��������Singleton*��������ͨ��get_instance()����Ϊ���ʼ��
	//��һ�ε���get_instance()ʱ�������󣬶����ַ��¼��p1��
	Singleton *p1 = Singleton::get_instance();
	//�ڶ��ε���get_instance()ʱ�����ٴ�������p2��p1��¼ͬһ�������ַ
	Singleton *p2 = Singleton::get_instance();

	cout << "p1 var = " << p1->get_var() << endl;
	cout << "p2 var = " << p2->get_var() << endl;
	p1->set_var(5);
	cout << "p1 var = " << p1->get_var() << endl;
	cout << "p2 var = " << p2->get_var() << endl;

	system("pause");
	return 0;
}
