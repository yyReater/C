#include <iostream>                                   
#include <string>
using namespace std;

class Animal                                                //�������Animal
{
public:
	//����m_nWeightBase���Եĳ�Ա����
	void set_weight(int weight){ m_nWeightBase = weight; }
	//��ȡm_nWeightBaseֵ�ĳ�Ա����
	int get_weight(){ return m_nWeightBase; }
	//����m_nAgeBase���Եĳ�Ա����
	void set_age(int age){ m_nAgeBase = age; }
protected:
	int m_nAgeBase;                                        //���屣����Աm_nAgeBase
private:
	int m_nWeightBase;                                    //����˽�г�Աm_nWeightBase
};

class Cat :protected Animal                             //ͨ�������̳У�����������Cat
{
public:
	Cat(string con_name) :m_strName(con_name){}
	//���庯��set_print_weight()���ú������ʻ����Ա����set_weight()��get_weight()
	void set_print_weight()
	{
		set_weight(6);
		cout << m_strName << " weight = " << get_weight() << endl;
	}
private:
	string m_strName;                                   //�������˽�г�Ա
};

class PersianCat :protected Cat                       //�����̳е�������PersianCat
{
public:
	PersianCat() :Cat("persian cat"){  }             //���幹�캯��
	//����persian_set_print_age()����Animal���е����ݳ�Աm_nAgeBase��set_age()����
	void persian_set_print_age()
	{
		set_age(5);                                  //ֱ�ӵ��ôӻ����б����̳еĺ���
		cout << "PersianCat, age = " << m_nAgeBase << endl;
	}
};
int main()
{
	PersianCat persian_cat;                          //����PersianCat����
	persian_cat.persian_set_print_age();          //������ʾm_nAgeBaseֵ�ĳ�Ա����
	system("pause");
	return 0;
}
