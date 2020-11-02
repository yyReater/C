//factory.cpp
#include <iostream>
#include "factory.h"
#include "product.h"
using namespace std;

AbstractFactory::AbstractFactory()                 //������󹤳��๹�캯��
{
}
AbstractFactory::~AbstractFactory()                //������󹤳�����������
{
}
Factory::Factory()                                    //����򵥹����๹�캯��
{
	cout << "factory constructor!" << endl;
}
Factory::~Factory()                                   //����򵥹�������������
{
}
//����create_product()�������ú������ݲ���������ͬ��Ʒ����
AbstractProduct *Factory::create_product(int type)
{
	switch (type){
	case 1:	return new Product1();
	case 2: return new Product2();
	}
}
