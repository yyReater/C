#include <iostream>
#include <string>
using namespace std;

int main()
{
	int int_n1, int_n2;                                //�����������ͱ���
	cout << "Please input two integers:";          //������ʾ
	cin >> int_n1 >> int_n2;                          //������������
	try
	{
		cout << "Maybe exception code:" << endl;  //��ʾ���ܳ����쳣�Ĵ���
		if (int_n2 == 0)                               //����Ϊ0���׳��쳣
		{
			throw 0;
		}
		else
		{
			cout << int_n1 << "/" << int_n2 << " = "
				<< (int_n1 / int_n2) << endl;     //����������ʾ������
		}
	}
	catch (int)                                           //��׽����Ϊ���͵��쳣
	{
		cout << "exception:div 0!" << endl;        //�쳣�������
	}
	system("pause");
	return 0;
}
