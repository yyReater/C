#include <iostream>
using namespace std;

using namespace std;
class Worker //����Worker��
{
public:
	char name[50];      //����
	char address[200];  //סַ
	int salary;         //����
	Worker(char* name, char* address) //���캯��
	{
		memset(this->name, 0, 50);
		memcpy(this->name, name, strlen(name));
		memset(this->address, 0, 200);
		memcpy(this->address, address, strlen(address));
	}
	virtual ~Worker(){}
	void printInfo() //��ӡ��������סַ��������Ϣ
	{
		cout << "name:" << name << ",address:" << address
			<< ",salary:" << salary << endl;
	}

};
class AWorker : public Worker  //�̶����ʹ�����
{
public:
	AWorker(char* name, char* address, int salary) :Worker(name, address)
	{
		this->salary = salary;
	}
};

class BWorker : public Worker //�Ƽ�������
{
public:
	BWorker(char* name, char* address, 
 				int total_numbers, int every) :Worker(name, address)
	{
		this->salary = total_numbers*every;
	}
};

class CWorker : public Worker //��ʱ������
{
public:
	CWorker(char* name, char* address, int total_hours,
    					 int every) :Worker(name, address)
	{
		this->salary = total_hours*every;
	}
};
int main()
{
	Worker* w; //����ָ��
	//����ָ��ָ��̶�����
    w = new AWorker((char*)"A Worker", (char*)"A address", 2000); 
	w->printInfo();
    //����ָ��ָ��Ƽ�����
	w = new BWorker((char*)"B Worker", (char*)"B address", 100, 15); 
	w->printInfo();
    //����ָ��ָ���ʱ����
	w = new CWorker((char*)"C Worker", (char*)"C address", 80, 30); 
	w->printInfo();

	return 0;
}
