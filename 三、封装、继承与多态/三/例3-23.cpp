#include <iostream>
using namespace std;

class Outer                                             //�����ⲿ��Outer
{
public:
	class  Inner{                                      //�����ڲ���Inner
	private:
		int inner_n;
	public:
		//�ڲ����Ա����set_outer_n()ͨ���ⲿ�����ò��������ⲿ��˽�г�Աouter_n
		void set_outer_n(Outer &ref_outer)	{ ref_outer.outer_n = 10; }
		void set_inner_n() { inner_n = 100; }
		//�ڲ����Ա����show()ͨ���ⲿ�����ò��������ⲿ���Ա����show()
		void show(Outer &ref_outer)
		{
			ref_outer.show();
			cout << "inner_n = " << inner_n << endl;
		}
	};                                                  //�ڲ��ඨ�����
	//Inner inner_obj;                               //�����ڲ������inner
	//�ⲿ���Ա����
	void show() { cout << "outer_n = " << outer_n << endl; }
private:
	int outer_n;
};

int main()
{
	Outer outer_obj;                              //�����ⲿ�����
	Outer::Inner inner_obj;                     //ʹ���������޶��������ڲ������

	inner_obj.set_inner_n();                    //�����ڲ��ຯ��set_inner_n()
	inner_obj.set_outer_n(outer_obj);         //�����ڲ��ຯ��set_outer_n()
	inner_obj.show(outer_obj);                 //�����ڲ��ຯ��show()

	system("pause");
	return 0;
}
