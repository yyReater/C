#include <iostream>
#include <list>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
using namespace std;
int main()
{
	char str[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	list<char> lt;
	lt.assign(str, str + sizeof(str) / sizeof(char));
	copy(lt.begin(), lt.end(), ostream_iterator<char>(cout, " "));
	cout << endl;

	list<char>::iterator it = lt.begin();
	advance(it, 5); //�������������ƶ�5����λ
	cout << "�������������ƶ�5����λ��ָ���Ԫ��Ϊ��" << *it << endl;
	cout << "the distance between begin and f is: " << distance(lt.begin(), it)
		<< endl;
	iter_swap(lt.begin(), it); //��������λ�õ�Ԫ��
	cout << "��������λ�õ�Ԫ��֮��";
	copy(lt.begin(), lt.end(), ostream_iterator<char>(cout, " "));
	cout << endl;

	system("pause");
	return 0;
}
