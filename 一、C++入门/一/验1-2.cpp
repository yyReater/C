#include <iostream>
using namespace std;

//����
void _sort(int* p, int m)
{
	int i, j;
	int temp = 0;
	for (i = 0; i < m - 1; i++)
	{
		for (j = 0; j < m - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
			    temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

//���
void _out(int *p, int m)
{
	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
}
int main()
{
	int *p = new int[10];

	for (int i = 0; i < 10; i++)
		p[i] = rand() % 100;
	cout << "����ǰ��\n";
	_out(p, 10);
	_sort(p, 10);
	cout << "�����\n";
	_out(p, 10);

	delete []p;
	cout << "�����ڴ�ռ�ɹ���\n";

	system("pause");
	return 0;
}	

void _sort(string str[], int m)
{
	int i, j;
	for (i = 2; i <= m; i++)  //i�ӵ�����Ԫ�أ��Ǳ�Ϊ2����ʼ
	{                         //�ڴ����ַ�������ʱ��0�Ǳ�û�д��Ԫ��
		if (str[i] < str[i - 1])
		{
			str[0] = str[i];
			str[i] = str[i - 1];
			for (j = i - 2; str[0] < str[j]; j--)  //j=i-2��i�Ǵ�2��ʼ��
				str[j + 1] = str[j];
			//ѭ����������0λ�õ�������j+1λ�û���
			str[j + 1] = str[0];
		}
	}
}
