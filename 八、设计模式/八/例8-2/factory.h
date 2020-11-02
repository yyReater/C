//factory.h
#ifndef FACTORY_H
#define FACTORY_H
class AbstractProduct;

class AbstractFactory{                                  //������󹤳���
public:
	virtual ~AbstractFactory();
	virtual AbstractProduct *create_product(int) = 0;
protected:
	AbstractFactory();
};
//����򵥹����࣬�����Գ��󹤳��࣬��Ҫ������������ͬ��Ʒ
class Factory :public AbstractFactory{
public:
	~Factory();
	Factory();
	AbstractProduct *create_product(int);          //���ݲ�����������ͬ��Ʒ����
};
#endif
