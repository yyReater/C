#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
using namespace std;
template<typename T>
class Multi  //��ģ��
{
private:
	T value;
public:
	Multi(const T& v) :value(v){}  //���캯��
	void operator()(T& elem) const{ elem *= value; } //����()�����
};
void print(int elem) //��ӡԪ��
{
	cout << elem << " ";
}
int main()
{
	int arr[] = { 21, 4, 55, 22, 46, 79, 9, 5, 78, 34, 100 };
	vector<int> v;
	v.assign(arr, arr + sizeof(arr) / sizeof(int)); //�������v������ֵ

	//����for_each()������������ÿ��Ԫ�ض�����2
	for_each(v.begin(), v.end(), Multi<int>(2));

	//����copy()���캯����������Ԫ�����
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));	cout << endl;

	//����find()�㷨�����������Ƿ����ֵΪ200��Ԫ��
	vector<int>::iterator it = find(v.begin(), v.end(), 200);
	if (*it == 200)
		cout << "��������ֵΪ200��Ԫ��" << endl;
	else
		cout << "�����в�����ֵΪ200��Ԫ��" << endl;

	sort(v.begin(), v.end()); //����sort()�㷨��������Ԫ�ش�С��������
	cout << "����֮��" << endl;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	int sum = accumulate(v.begin(), v.end(), 0); //�ۼ�������Ԫ��
	cout << "sum = " << sum << endl;
	system("pause");
	return 0;
}
