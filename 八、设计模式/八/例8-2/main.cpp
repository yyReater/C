#include <iostream>
#include "product.h"
#include "factory.h"
using namespace std;

int main()
{
	AbstractFactory *fac = new Factory();            //�����򵥹�����
	AbstractProduct *p1 = fac->create_product(1);  //ͨ���򵥹���������Ʒ1
	AbstractProduct *p2 = fac->create_product(2);  //ͨ���򵥹���������Ʒ2
	p1->operation();                                     //��Ʒ1ִ����Ӧ����
	p2->operation();                                     //��Ʒ2ִ����Ӧ����
	delete fac;
	delete p1;
	delete p2;
	system("pause");
	return 0;
}
