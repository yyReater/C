#include <iostream>
#include <string>
using namespace std;

string str[50];  //�ַ�������

void _sort(string str[], int m); //���ַ���������
int main()
{
	int m, n;  //mΪҪ���������������nΪ������
	while (1)
	{
		cout << "������Ҫ���������������\n";
		cin >> m;
		if (m == 0) //����0�˳�
			return 0;
		cout << "������"<<m<<"��������\n";
		for (n = 1; n <= m; n++)
			cin >> str[n];

		_sort(str, m); //����������
		cout << "����������б�������ʾ��\n";
		for (n = 1; n <= m; n++)
			cout << str[n] << endl;
	}

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
