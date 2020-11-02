#include<iostream>  
using namespace std;
const double PI = 3.14159;
class Shapes                                      //�����ʾ��״�ĳ�����  
{
public:
	Shapes(int x, int y = 0);
	virtual ~Shapes();
	virtual void disp() = 0;                   //�������麯������ʾ��״���  
protected:
	int m_nX, m_nY;
};
Shapes::Shapes(int x, int y)                  //����Shapes��Ĺ��캯��
{
	m_nX = x;
	m_nY = y;
}
Shapes::~Shapes()                               //����Shapes�����������
{
	cout << "Shapes destructor!" << endl;
}
class Square :public Shapes                    //����������
{
public:
	Square(int square_x, int square_y);
	~Square();
	void disp();
};
//������Square���캯����ʵ��
Square::Square(int square_x, int square_y) :Shapes(square_x, square_y)
{
}
Square::~Square()                               //������Square����������ʵ��
{
	cout << "Square destructor!" << endl;
}
void Square::disp()                             //�Ի��ി�麯����ʵ��
{
	cout << "square area:" << m_nX * m_nY << endl;
}
class Circle :public Shapes                    //Բ��������
{
public:
	Circle(int radius);
	~Circle();
	void disp();                                //����ി�麯��ͬ���ĺ���
};
Circle::Circle(int radius) :Shapes(radius) //������Circle���캯����ʵ��
{
}
Circle::~Circle()                              //������Circle����������ʵ��
{
	cout << "Circle destructor!" << endl;
}
void Circle::disp()                            //�Ի��ി�麯����ʵ��
{
	cout << "circle area:" << PI * m_nX * m_nX << endl;
}
int main()
{
	Shapes *ptr[2];                            //�������ָ������  

	ptr[0] = new Square(10, 5);             //ͨ��new����������Square����
	ptr[0]->disp();
	ptr[1] = new Circle(10);                 //ͨ��new����������Circle����
	ptr[1]->disp();
	for (int i = 0; i < 2; i++)
		delete ptr[i];
	system("pause");
	return 0;
}
