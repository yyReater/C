#include <iostream>
#include <stdio.h>
using namespace std;

class Animal                                                //�������Animal
{
public:
	Animal(char *name);                                   //�������๹�캯��
	void print_name();                                    //����print_name()����
	virtual void print_color();                         //�����麯��print_color()
	virtual void speak();                                //�����麯��speak()
	virtual ~Animal();                                    //������������
private:
	char *m_pAnimalName;                                 //��Ŷ������Ƶ����ݳ�Ա
};
Animal::Animal(char *name)                               //Animal�๹�캯���Ķ���
{
	int len = strlen(name) + 1;
	m_pAnimalName = new char[len];                     //Ϊm_pAnimalNameָ�뿪�ٿռ�
	strcpy(m_pAnimalName, name);               			//���붯������
}
Animal::~Animal()                                         //Animal����������
{
	cout << "Animal destructor!" << endl;
	if (m_pAnimalName){
		delete[] m_pAnimalName;                         //�ͷſռ�
	}
}
void Animal::print_name()                               //��ʾ��������
{
	cout << "name:" << m_pAnimalName << endl;
}
//�����麯��print_color()���������ڻ�����Ϊ�պ�������Ҫ�����������ض���
void Animal::print_color()
{

}
void Animal::speak()
{
	cout << "animal language!" << endl;
}

class Cat :public Animal                                  //����������Cat
{
public:
	Cat(char* name, char *catcolor);
	virtual void print_color();                        //�����麯��print_color()
	virtual void speak();                               //�����麯��speak()
	virtual ~Cat();
private:
	char *m_pCatColor;                                   //���è����ɫ�����ݳ�Ա
};
Cat::Cat(char* name, char *color) :Animal(name)     //Cat�๹�캯���Ķ���
{
	cout << "Cat constructor!" << endl;
	m_pCatColor = new char[strlen(color) + 1];  //Ϊm_pCatcolorָ�뿪�ٿռ�
	strcpy(m_pCatColor, color); //��������è��ɫ�Ե��ַ���
}
Cat::~Cat()                                             //Cat�����������Ķ���
{
	cout << "Cat destructor!" << endl;
	if (m_pCatColor){
		delete[] m_pCatColor;                        //�ͷ�m_pCatcolorָ��Ŀռ�
	}
}
void Cat::print_color()                               //print_color()�麯����ʵ��
{
	cout << "cat color :" << m_pCatColor << endl;
}
void Cat::speak()                                      //speak()�麯����ʵ��
{
	cout << "cat language: miaomiao!" << endl;
}
int main()
{
	Animal *p[2];                                      //�������Animalָ������
	int i;
	p[0] = new Cat("short_haired_cat", "white");//ͨ��new����������Cat����
	p[0]->print_name();
	p[0]->print_color();
	p[0]->speak();
	p[1] = new Cat("persian_cat", "brown");     //ͨ��new����������Cat����
	p[1]->print_name();
	p[1]->print_color();

	for (i = 0; i < 2; i++)
		delete p[i];                                  //ͨ��delete�ͷ����������

	return 0;
}
