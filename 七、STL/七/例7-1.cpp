#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v; //����һ���յ�vector����
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);  //��Ԫ����ӵ�v��
	for (int i = 0; i < 10; i++)
		cout << v[i] << "  ";  //���Ԫ��
	cout << endl;
	v.pop_back();  //�Ƴ�ĩβ��Ԫ��
	for (int i = 0; i < 9; i++) //��ʱԪ�ظ���Ϊ9
		cout << v[i] << "  ";  //���Ԫ��
	cout << endl;
	system("pause");
	return 0;
}
