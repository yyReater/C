#include <iostream>
#include <string>
using namespace std;
int int_div(int a, int b)                                //ʵ����������ĺ���
{
	if (b == 0){
		throw 0;
	}
	return a / b;
}
void exception_handler(int n1, int n2)
{
	try{
		cout << "Maybe exception code:" << endl;
		cout << n1 << "/" << n2 << " = "
			<< int_div(n1, n2) << endl;               //����������ʾ������
		cout << "in try, after div!" << endl;
	}
	catch (int n)                                          //��׽����Ϊ���͵��쳣
	{
		cout << "exception:div "
			<< n << "!" << endl;                       //�쳣�������
		throw n;                                           //�����׳��쳣  
	}
}
int main()
{
	int int_n1, int_n2;                                  //�����������ͱ���

	while (1){                                             //ѭ����ζ�ȡ���ݣ�����������
		cout << "Please input two integers:";
		cin >> int_n1 >> int_n2;

		try{
			exception_handler(int_n1, int_n2);
		}
		catch (int)
		{
			cout << "outter try-catch!" << endl;    //���յ�23�����׵��쳣
		}
	}
	return 0;
}
