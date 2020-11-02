#include <iostream>
#include <string>
using namespace std;

struct IBase                                               //�ӿ�IBase
{
	virtual void base() = 0;                           //�������麯��base()
};

struct IDerive1 :public IBase                          //�ӿ�IDerive1
{
	virtual void derive1() = 0;                      //�������麯��derive1()
	virtual void base() = 0;                          //�������麯��base()
};

struct IDerive2 :public IBase                          //�ӿ�IDerive2
{
	virtual void derive2() = 0;                      //�������麯��derive2()
	virtual void base() = 0;                          //�������麯��base()
};

void callderive1(IDerive1 &p)                         //���庯��callderive1()
{
	p.derive1();
	p.base();
}

void callderive2(IDerive2 &p)                         //���庯��callderive2()
{
	p.derive2();
	p.base();
}

class COuter :public IDerive1{                        //�����ⲿ��̳���IDerive1
private:
	//�ⲿ���˽�б���
	string outer_private;                            //�����ⲿ��˽�б���

	class CInner :public IDerive2{                  //�����ڲ��࣬�̳���IDerive2
	private:
		//�����ⲿ��ָ����Ϊ�ڲ����Ա�����ڲ����ⲿ��
		COuter *parent;
	public:
		CInner(COuter *p) :parent(p)
		{
		}
		//��д����IDerive2���麯��,�������ⲿ���˽�г�Ա 
		void derive2()
		{
			cout << "derive2 called for inner of " << parent->outer_private << endl;
		}
		//��д����IDerive2���麯������Ȼ���ⲿ���Ա����ͬ������������
		void base()
		{
			cout << "base called for inner" << endl;
		}
	};
	CInner inner;
public:
	//�����ⲿ�๹�캯��
	COuter(const string &str) :outer_private(str), inner(this){}
	//��д����IDerive1�е��麯��derive1()
	void derive1()
	{
		cout << "derive1 called for outer" << endl;
	}
	//��д����IDerive1�е��麯��base()
	void base()
	{
		cout << "base called for outer" << endl;
	}
	//����IDerive2&����
	operator IDerive2&()
	{
		return inner;
	}
};
int main()
{
	COuter obj("outer");
	callderive1(obj);
	callderive2(obj);
	system("pause");
	return 0;
}
