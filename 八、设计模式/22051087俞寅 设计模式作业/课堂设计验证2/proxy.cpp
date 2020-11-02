#include <iostream>
#include "proxy.h"
using namespace std;

Subject::Subject()                              
{
}
Subject::~Subject()                               
{
}


ConcreteSubject::ConcreteSubject()           
{
}
ConcreteSubject::~ConcreteSubject()             
{
}
void ConcreteSubject::fun()                   
{
	cout << "real fun()!" << endl;
}


Proxy::Proxy()                                    
{
}
Proxy::Proxy(Subject *sub)
{
	m_sub = sub;
}
Proxy::~Proxy()                                       
{
}
void Proxy::fun(){                      
	cout << "use the other fun()!" << endl;
	m_sub->fun();
}
