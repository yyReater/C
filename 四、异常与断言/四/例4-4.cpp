#include <iostream>
#include <string>
using namespace std;

int int_div(int a, int b)                                 //ʵ����������ĺ���
{
	if (b == 0){
		throw 0;
		cout << "after throw!" << endl;
	}
	return a / b;
}
int main()
{
	int int_n1, int_n2;                                    //�����������ͱ���
	//ѭ����ζ�ȡ���ݣ�����������
	while (1){
		cout << "Please input two integers:";
		cin >> int_n1 >> int_n2;                         //������������
		try	{
			cout << "Maybe exception code:" << endl;
			cout << int_n1 << "/" << int_n2 << " = "
				<< int_div(int_n1, int_n2) << endl;   //����������ʾ������
			cout << "in try, after div!" << endl;
		}
		catch (int)                                         //��׽����Ϊ���͵��쳣
		{
			cout << "exception:div 0!" << endl;       //�쳣�������
		}
		cout << "after try��catch!" << endl;;
	}

	return 0;
}
