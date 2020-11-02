//proxy.h
#ifndef PROXY_H
#define PROXY_H

class Subject{                                           //�������������
public:
	virtual ~Subject();
	virtual void request() = 0;
protected:
	Subject();
};
//�������������������࣬����һ�����������
class ConcreteSubject :public Subject{
public:
	ConcreteSubject();
	~ConcreteSubject();
	void request();
};
class Proxy :public Subject{                         //���������
public:
	Proxy();
	Proxy(Subject *sub);
	~Proxy();
	void request();
private:
	Subject *m_sub;                                    //����һ��ָ�������ָ��
};
#endif
