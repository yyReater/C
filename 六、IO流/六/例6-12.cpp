#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream ifs; //��������������
	ifs.open("C:\\Users\\www\\Desktop\\a.txt", ios::in | ios::out | ios::binary);
	
	cout << "ifs first: " << ifs.tellg() << endl;  //���ļ���鿴ָ��λ��
	ifs.seekg(6); //��λ��ָ������ƶ�6���ֽ�
	cout << "ifs second: " << ifs.tellg() << endl; //�ƶ�ָ����ٲ鿴ָ��λ��
	char ch;
	ifs.get(ch); //��ȡ��ǰָ�봦���ַ�
	cout << "get cur char: " << ch << endl;

	ofstream ofs;  //�������������
	ofs.open("C:\\Users\\www\\Desktop\\a.txt", ios::in | ios::out | ios::binary);
	
	cout << "ofs first: " << ofs.tellp() << endl; //��������ļ��󣬲鿴ָ��λ��
	ofs.seekp(3);  //��ָ������ƶ�3���ֽ�
	cout << "ofs second: " << ofs.tellp() << endl; //���ú��ٲ鿴ָ��λ��
	ofs.put('A'); //��ǰָ�봦д���ַ�A���滻��ԭ�����ַ�
	ifs.seekg(ios::beg);  //�����������ļ�λ��ָ���ƶ�����ͷ
	char buf[20];
	while (!ifs.eof()) //��ȡ�ļ������
	{
		ifs.getline(buf, 20, '\n');
		cout << "buf: " << buf << endl;
	}
	ifs.close();
	ofs.close();

	system("pause");
	return 0;
}
