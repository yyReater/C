#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	deque<int> d1; //����һ���յ�deque<int>����
	cout << "d1(1): ";
	copy(arr, arr + 6, back_inserter(d1)); //������arr�е�Ԫ�ز��뵽d1������
	//��d1�����е�Ԫ����������������������Ļ
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << "d1(2): ";
	front_inserter(d1) = 11;  //ǰ�˲���Ԫ��
	front_inserter(d1) = 22;
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, " ")); //�ٴ�����
	cout << endl;

	cout << "d1(3): ";
	//��d1�����е�����Ԫ���ٴβ��뵽d1������ǰ��
	copy(d1.begin(), d1.end(), front_inserter(d1));
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << "d1(4): ";
	inserter(d1, d1.end()) = 33; //��33������d1������β��
	inserter(d1, d1.end()) = 44;
	copy(d1.begin(), d1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	deque<int> d2; //����һ���յ�deque����d2
	cout << "d2: ";
	//��d1������Ԫ�ز��뵽d2������ͷ��
	copy(d1.begin(), d1.end(), inserter(d2, d2.begin()));
	copy(d2.begin(), d2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	system("pause");
	return 0;
}
