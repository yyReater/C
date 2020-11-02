#include <iostream>
using namespace std;

class Animal                                            //�������Animal
{
public:
	Animal(char *name);                               //�������๹�캯��
	void print_name();                                //����print_name()����
	virtual void print_color() = 0;                //�������麯��print_color()
	virtual ~Animal();                                //��������������
private:
	char *m_pAnimalName;                             //��Ŷ������Ƶ����ݳ�Ա
};

Animal::Animal(char *name)                          //Animal�๹�캯���Ķ���
{
	int len = strlen(name) + 1;
	m_pAnimalName = new char[len];                 //Ϊm_pAnimalNameָ�뿪�ٿռ�
	strcpy(m_pAnimalName, name);           //���붯������
}
Animal::~Animal()                                     //Animal����������
{
	cout << "Animal destructor!" << endl;
	if (m_pAnimalName){
		delete[]m_pAnimalName;                     //�ͷſռ�
	}
}
void Animal::print_name()                           //����print_name()����
{
	cout << "name:" << m_pAnimalName << endl;
}
class Cat :public Animal                             //����������Cat
{
public:
	Cat(char* name, char *catcolor);
	virtual void print_color();                   //�����麯��print_color()
	virtual ~Cat();                                  //��������������
private:
	char *m_pCatColor;                               //���è��ɫ�����ݳ�Ա
};
Cat::Cat(char* name, char *color) :Animal(name) //Cat�๹�캯���Ķ���
{
	cout << "Cat constructor!" << endl;
	m_pCatColor = new char[strlen(color) + 1];    //Ϊm_pCatColorָ�뿪�ٿռ�
	strcpy(m_pCatColor, color);  //��������è��ɫ���ַ���
}
Cat::~Cat()                                             //Cat�����������Ķ���
{
	cout << "Cat destructor!" << endl;
	if (m_pCatColor){
		delete[]m_pCatColor;                         //�ͷ�m_pCatColorָ��Ŀռ�
	}
}
void Cat::print_color()                              //print_color()�麯����ʵ��
{
	cout << "cat color :" << m_pCatColor << endl;
}
int main()
{
	Animal *p;                                         //�������Animalָ������

	p = new Cat("short_haired_cat", "white");   //ͨ��new����������Cat����
	p->print_name();
	p->print_color();
	cout << "--------------------" << endl;
	delete p;                                         //ͨ��delete�ͷ����������

	return 0;
}
