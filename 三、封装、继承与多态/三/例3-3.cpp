#include <iostream>                                   
#include <string>
using namespace std;

class Animal                              //�������Animal
{
public:
	//����m_nWeightBase���Եĳ�Ա����
	void set_weight(int weight){ m_nWeightBase = weight; }
	//��ȡm_nWeightBaseֵ�ĳ�Ա����
	int get_weight(){ return m_nWeightBase; }
	//����m_nAgeBase���Եĳ�Ա����
	void set_age(int age){ m_nAgeBase = age; }
protected:
	int m_nAgeBase;                            //���屣����Աm_nAgeBase
private:
	int m_nWeightBase;                        //����˽�г�Աm_nWeightBase
};
class Cat :private Animal                    //ͨ��˽�м̳У�����������Cat
{
public:
	Cat(string con_name) :m_strName(con_name){}
	//���庯��set_print_age()���ú������ʻ��๫�г�Ա����set_age()�ͱ�����Աm_nAgeBase
	void set_print_age()
	{
		set_age(5);                           //���û���ĳ�Ա����
		cout << m_strName << " age = " << m_nAgeBase << endl;
	}
	//���庯��set_print_weight()���ú������ʻ��๫�г�Ա����set_weight()��get_weight()
	void set_print_weight()
	{
		set_weight(6);                      //���û���ĳ�Ա����   
		cout << m_strName << ", weight = " << get_weight() << endl;
	}
private:
	string m_strName;                        //�������˽�г�Ա
};
int main()
{
	Cat cat("Persian");                     //�������������cat
	cat.set_print_age();
	cat.set_print_weight();                //�������������Լ��Ĺ��к���
	system("pause");
	return 0;
}
