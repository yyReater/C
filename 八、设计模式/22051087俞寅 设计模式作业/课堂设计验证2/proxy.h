#ifndef PROXY_H
#define PROXY_H


class Subject{                                          
public:
	virtual ~Subject();
	virtual void fun() = 0;
protected:
	Subject();
};


class ConcreteSubject :public Subject{
public:
	ConcreteSubject();
	~ConcreteSubject();
	void fun();
};


class Proxy :public Subject{                     
public:
	Proxy();
	Proxy(Subject *sub);
	~Proxy();
	void fun();
private:
	Subject *m_sub;                                
};

#endif
