//product.cpp
#include "product.h"
#include <iostream>
using namespace std;

AbstractProduct::AbstractProduct()                  //����AbstractProduct���캯��
{
}
AbstractProduct::~AbstractProduct()                //����AbstractProduct��������
{
}
Product1::Product1()                                  //����Product1���캯��
{
	cout << "product1 constructor!" << endl;
}
Product1::~Product1()                                 //����Product1��������
{
}
void Product1::operation()                           //����Product1��������
{
	cout << "product1 operation!" << endl;
}

Product2::Product2()                                   //����Product2���캯��
{
	cout << "product2 constructor!" << endl;
}
Product2::~Product2()                                 //����Product2��������
{
}
void Product2::operation()                          //����Product2��������
{
	cout << "product2 operation!" << endl;
}
