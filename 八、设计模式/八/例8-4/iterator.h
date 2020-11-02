//iterator.h
#ifndef ITERATOR_H
#define ITERATOR_H
class Aggregate;
typedef int Object;
class Iterator{                                         //��������������
public:
	virtual ~Iterator();
	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool is_done() = 0;
	virtual Object current_item() = 0;
protected:
	Iterator();
};
//�������������������࣬��ʾһ��ʵ�ʿɲ����ĵ�����
class ConcreteIterator :public Iterator{
public:
	//�����������Ĺ��캯�����ײ���ΪҪ���е����ľۺ�����ָ��
	ConcreteIterator(Aggregate *ag, int idx = 0);
	~ConcreteIterator();
	void first();
	void next();
	bool is_done();
	Object current_item();
private:
	Aggregate *m_ag;
	int m_idx;
};
#endif