#include <iostream>                                   
#include <string>
using namespace std;

class Animal                                           //�������Animal
{
public:
	//����m_nWeightBase���Եĳ�Ա����
	void set_weight(int weight){ m_nWeightBase = weight; }
	//��ȡm_nWeightBase ֵ�ĳ�Ա����
	int get_weight(){ return m_nWeightBase; }
	//����m_nAgeBase���Եĳ�Ա����
	void set_age(int age){ m_nAgeBase = age; }
protected:
	int m_nAgeBase;                                  //���屣����Աm_nAgeBase
private:
	int m_nWeightBase;                              //����˽�г�Աm_nWeightBase
};
class Cat :public Animal                            //ͨ�����м̳У�����������Cat
{
public:
	Cat(string con_name) :m_strName(con_name){}
	//���庯��print_age()���ú������ʻ����Աm_nAgeBase
	void print_age(){ cout << m_strName << ", age = " << m_nAgeBase << endl; }
private:
	string m_strName;                              //�������˽�г�Ա
};
int main()
{
	Cat cat("Persian");                           //�������������cat
	cat.set_age(5);                               //�����������ôӻ���̳еĹ��г�Ա����
	cat.set_weight(6);                            //�����������ôӻ���̳еĹ��г�Ա����
	cat.print_age();                              //�������������Լ��Ĺ��к���
	cout << "cat weight = " << cat.get_weight() << endl;
	system("pause");
	return 0;
}
