#include <iostream>
#include <strstream>
using namespace std;
int main()
{
	char buf[50] = "12 25 68 -68 25 27 15 65 69 144";
	int arr[10];
	cout << "buf: " << buf << endl;

	istrstream istr(buf, sizeof(buf)); //���������ַ�������buf����
	for (int i = 0; i < 10; i++)
		istr >> arr[i];  //���ַ�����buf�ж���10������������������arr
	cout << "arr: ";
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 9; i++)  //ð�ݷ�������arr��������
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

		}
	}
	ostrstream ostr(buf, sizeof(buf)); //��������ַ�������buf����
	for (int i = 0; i < 10; i++)
		ostr << arr[i] << " "; //��10������������ַ�����buf
	ostr << ends;  //ends��C++��I/O������������һ��'\0'
	cout << "buf: " << buf << endl;

	system("pause");
	return 0;
}
