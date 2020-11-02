//iterator.cpp
#include <iostream>
#include "aggregate.h"
#include "iterator.h"
using namespace std;

Iterator::Iterator()                                    //�������������Ĺ��캯��
{
}
Iterator::~Iterator()                                  //����������������������
{
}
//��������������Ĺ��캯�����ײ�����ʾ���ĸ��ۺ��������ݽ��е������ڶ���������ʾ�����￪ʼ����
ConcreteIterator::ConcreteIterator(Aggregate *ag, int idx)
{
	m_ag = ag;
	m_idx = idx;
}
ConcreteIterator::~ConcreteIterator()             //����������������������
{
}
Object ConcreteIterator::current_item()           //�����ȡ�ۺ������е�ǰ����ĺ���
{
	return m_ag->get_item(m_idx);
}
//�������þۺ�������λ�õĺ���
void ConcreteIterator::first()
{
	m_idx = 0;
}
//�������þۺ���������һ��λ�õĺ���
void ConcreteIterator::next()
{
	if (m_idx < m_ag->get_size())
		m_idx++;
}
//�����ж��Ƿ������ϵĺ���
bool ConcreteIterator::is_done()
{
	return (m_idx == m_ag->get_size());
}
