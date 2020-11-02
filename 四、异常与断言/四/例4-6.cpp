#include <iostream>
using namespace std;

class Example{                                                  //����Example��
public:
	Example(){ cout << "Example constructor!" << endl; }
	~Example() { cout << "Example destructor!" << endl; }
};
class ZeroException{                                           //�������������쳣����
public:
	ZeroException();
	~ZeroException();
	const char *getmsg() { return msg; }
private:
	const char *msg;

};
ZeroException::ZeroException() :msg("div zero")          //ZeroException�๹�캯��
{
	cout << "ZeroException constructor!" << endl;
}

ZeroException::~ZeroException()                          //ZeroException����������
{
	cout << "ZeroException destructor!" << endl;
}

int int_div(int n1, int n2)                                //�����������
{
	//����Example�����obj���ö������׳��쳣ʱ�ᱻ����
	Example obj;
	if (n2 == 0){
		throw ZeroException();
	}
	return n1 / n2;
}

int main()
{
	int int_n1, int_n2;                                     //�����������ͱ���

	while (1){                                                //ѭ����ζ�ȡ���ݣ�����������
		cout << "Please input two integers:";          //������ʾ
		cin >> int_n1 >> int_n2;                          //��������������
		try{
			cout << "Maybe exception code:" << endl;  //��ʾ���ܳ����쳣�Ĵ�����Ϣ
			cout << int_n1 << "/" << int_n2 << " = "
				<< int_div(int_n1, int_n2) << endl;  //����������ʾ������
			cout << "in try, after div!" << endl;
		}
		catch(ZeroException &divzero)                 //��׽ZeroException����쳣
		{
			cout << "exception:"
				<< divzero.getmsg() << endl;          //�쳣�������
		}
	}
	return 0;
}
