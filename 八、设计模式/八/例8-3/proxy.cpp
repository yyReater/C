//proxy.cpp
#include <iostream>
#include "proxy.h"
using namespace std;

Subject::Subject()                                    //�������������Ĺ��캯��
{
}
Subject::~Subject()                                  //����������������������
{
}
ConcreteSubject::ConcreteSubject()               //������ʵ������Ĺ��캯��
{
}
ConcreteSubject::~ConcreteSubject()              //������ʵ���������������
{
}
void ConcreteSubject::request()                    //��ʵ������Ҫ��ɵĲ���
{
	cout << "ConcreteSubject request!" << endl;
}

Proxy::Proxy()                                        //��������๹�캯��
{
}
//�����๹�캯��������Ϊĳ�������ָ��
Proxy::Proxy(Subject *sub)
{
	m_sub = sub;
}
Proxy::~Proxy()                                       //�����������������
{
}
void Proxy::request()                                //ͨ������ʵ��������Ҫ��ɵĲ���
{
	cout << "Proxy request!" << endl;
	m_sub->request();
}
