#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
	cout << "please input data:" << endl;
	deque<int> d;  //����һ��deque<int>����d
	istream_iterator<int> it(cin); //����һ������������������cin���ж�ȡ����
	istream_iterator<int> itf; //Ĭ��������������
	while (it != itf) //�Ƚ�it��itf���������ж϶�ȡ�����Ƿ�Ϸ�
	{
		*it; //�൱��cin>>
		d.push_back(*it); //����ȡ�������ݴ洢��d������
		++it; //����������ƶ�
	}
	// ��������������������������
	copy(d.begin(), d.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	system("pause");
	return 0;
}
