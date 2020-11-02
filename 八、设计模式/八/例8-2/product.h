//product.h
#ifndef PRODUCT_H
#define PRODUCT_H

class AbstractProduct{                                 //��������Ʒ�࣬�ṩ��Ʒ�����Ľӿ�
public:
	virtual ~AbstractProduct();
	virtual void operation() = 0;
protected:
	AbstractProduct();
};
//������Product1�������Գ����Ʒ��
class Product1 :public AbstractProduct{
public:
	~Product1();
	Product1();
	void operation();                                    //�������ڱ���Ʒ�Ĳ�������
};
//����Product2�������Գ����Ʒ��
class Product2 :public AbstractProduct{
public:
	~Product2();
	Product2();
	void operation();
};
#endif
