#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<char> v;  //�����յ�vector����v
	v.insert(v.begin(), 'a');  //��ͷ��λ�ò���Ԫ��
	v.insert(v.begin(), 'b');
	v.insert(v.begin(), 'c');
	v.insert(v.begin() + 1, 5, 't');  //��begin()+1λ�ò���5��tԪ��
	for (int i = 0; i < 8; i++)  //���Ԫ��
		cout << v[i] << " ";
	cout << endl;
	cout << "erase elems:\n";
	v.erase(v.begin() + 1, v.begin() + 6);//ɾ��begin()+1��begin()+6�����5��Ԫ��
	for (int i = 0; i <3; i++)
		cout << v[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
