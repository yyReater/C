#include <iostream>
#include "aggregate.h"
#include "iterator.h"
using namespace std;

int main()
{
	//����һ������ľۺ����ͣ���agָ��
	Aggregate *ag = new ConcreteAggregate();
	//���������it������agָ��ľۺ���������
	Iterator *it = new ConcreteIterator(ag);
	//ʹ�õ��������β����ۺ������еĶ���
	for (; !(it->is_done()); it->next()){
		cout << it->current_item() << endl;
	}
	system("pause");
	return 0;
}
