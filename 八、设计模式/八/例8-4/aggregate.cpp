//aggregate.cpp
#include <iostream>
#include "aggregate.h"
#include "iterator.h"
using namespace std;

Aggregate::Aggregate()                               //�������ۺ����͵Ĺ��캯��
{
}
Aggregate::~Aggregate()                              //�������ۺ����͵���������
{
}
ConcreteAggregate::ConcreteAggregate()            //�������ۺ����͵Ĺ��캯��
{
	//��ۺ����������������ݣ�����ΪSIZE��5������������int���͵�������
	for (int i = 0; i < SIZE; i++)
		m_objs[i] = i;
}
ConcreteAggregate::~ConcreteAggregate()           //�������ۺ����͵���������
{
}
//�������ɵ������ĺ���
Iterator *ConcreteAggregate::create_iterator()
{
	return new ConcreteIterator(this);
}
//����Ӿۺ������л�ȡ����Ԫ�صĺ���
Object ConcreteAggregate::get_item(int idx)
{
	if (idx < this->get_size())
		return m_objs[idx];
	return -1;
}
int ConcreteAggregate::get_size()                   //�����ȡ�ۺ�����Ч���ݸ����ĺ���
{
	return SIZE;
}
