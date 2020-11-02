#include <iostream>
using namespace std;

class ZeroException{                                    //�������������쳣����
public:
	ZeroException() :msg("div zero!"){}              //���캯��
	const char *getmsg() { return msg; }            //��ȡmsg��Ϣ
private:
	const char *msg;
};
int int_div(int n1, int n2)
{
	if (n2 == 0){
		throw ZeroException();                        //�׳��쳣�����
	}
	return n1 / n2;
}

int main()
{
	int int_n1, int_n2;                                  //�����������ͱ���

	while (1){                                             //ѭ����ζ�ȡ���ݣ�����������
		cout << "Please input two integers:";        //������ʾ
		cin >> int_n1 >> int_n2;                        //������������
		try	{
			cout << "Maybe exception code:" << endl;
			cout << int_n1 << "/" << int_n2 << " = "
				<< int_div(int_n1, int_n2) << endl;//����������ʾ������
			cout << "in try, after div!" << endl;
		}
		catch (ZeroException divzero)                  //��׽�쳣
		{
			cout << "exception:"
				<< divzero.getmsg() << endl;         //�쳣�������
		}
	}
	return 0;
}
