#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream ofs;
	//���ļ���trunc�Ǵ��ļ�ǰ���ļ����
	ofs.open("C:\\Users\\www\\Desktop\\a.txt", ios::trunc);

	char ch = 'a';
	if (ofs)  //�ж��ļ��Ƿ�򿪳ɹ�
	{
		for (int i = 1; i <= 26; i++)
		{
			if (i % 5 == 0)  //����5���ַ�ʱ����
				ofs << endl;
			ofs << ch; //ֱ�ӵ���<<���������д��
			ch++;
		}
		cout << "write success" << endl;
	}
	else
		cout << "write failed" << endl;
	ofs.close();
	system("pause");
	return 0;
}
