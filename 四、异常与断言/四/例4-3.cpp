#include <iostream>
#include <string>
using namespace std;

int int_div(int a, int b)                                //ʵ����������ĺ���
{
	if (b == 0){                                           //������Ϊ0���׳��쳣
		throw 0;
	}
	return a / b;
}
int main()
{
	int int_n1, int_n2;                                   //�����������ͱ���
	while (1){                                              //ѭ����ζ�ȡ���ݣ�����������
		cout << "Please input two integers:";
		cin >> int_n1 >> int_n2;                         //��������������
		try	{
			cout << "Maybe exception code:" << endl;
			cout << int_n1 << "/" << int_n2 << " = "
				<< int_div(int_n1, int_n2) << endl;  //����������ʾ������
		}
		catch (int)                                        //��׽�����쳣
		{
			cout << "exception:div 0!" << endl;      //�쳣�������
		}
	}
	system("pause");
	return 0;
}
