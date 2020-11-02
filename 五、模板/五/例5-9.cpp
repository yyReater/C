#include <iostream>
using namespace std;
template<typename T, unsigned size> //������ģ�����unsigned size
class Array{
	T arr[size];
public:
	T& operator[](unsigned i)
	{
		if (i >= size)
			cout << "out of the bound" << endl;
		else
			return arr[i];
	}
};
int main()
{
	Array<char, 5> arr1;  //����һ������Ϊ5��char��������
	Array<int, 10> arr2;  //����һ������Ϊ10��int����
	arr1[0] = 'A';
	cout << arr1[0] << endl;
	for (int i = 0; i < 10; i++)//Ϊint��������arr2��ֵ�����
		arr2[i] = i + 1;
	for (int i = 0; i < 10; i++)
		cout << arr2[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
