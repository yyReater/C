#include <iostream>
using namespace std;

class Animal                                                  //�������Animal
{
public:
	//��ȡm_nAge����ֵ�ĺ���
	int get_age(){ return m_nAge; }
	//��ȡm_nWeight����ֵ�ĺ���
	int get_weight(){ return m_nWeight; }
	//����m_nAge���Եĺ���
	void set_age(int param_age){ m_nAge = param_age; }
	//����m_nWeight���Եĺ���
	void set_weight(int param_weight){ m_nWeight = param_weight; }
	//���嶯��˵���ĺ���
	void speak(){ cout << "animal language!" << endl; }
private:
	int m_nWeight;
	int m_nAge;
};

class Cat :public Animal                                  //����������Cat
{
public:
	//����m_strName���Եĺ���
	void set_name(string param_name);
	//����è˵���ĺ������ú���������е�speak()����ͬ��
	void speak(){ cout << "cat language: miaomiao!" << endl; }
private:
	string m_strName;
};
int main()
{
	Cat cat;                                                //�������������cat
	Animal *panimal = &cat;                              //�������ָ�벢��ʼ��Ϊcat��ַ

	panimal->set_age(5);                                 //����ָ����û���set_age()����
	cout << "base type: age = "
		<< panimal->get_age() << endl;               //ָ��ָ����û���get_age()����
	cat.speak();                                          //������������speak()����
	panimal->speak();                                    //����ָ�����speak()����

	system("pause");
	return 0;
}
