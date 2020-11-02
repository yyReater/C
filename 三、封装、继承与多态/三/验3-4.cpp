#include <iostream>
using namespace std;

using namespace std;
class Worker //基类Worker类
{
public:
	char name[50];      //姓名
	char address[200];  //住址
	int salary;         //工资
	Worker(char* name, char* address) //构造函数
	{
		memset(this->name, 0, 50);
		memcpy(this->name, name, strlen(name));
		memset(this->address, 0, 200);
		memcpy(this->address, address, strlen(address));
	}
	virtual ~Worker(){}
	void printInfo() //打印出姓名、住址、工资信息
	{
		cout << "name:" << name << ",address:" << address
			<< ",salary:" << salary << endl;
	}

};
class AWorker : public Worker  //固定工资工人类
{
public:
	AWorker(char* name, char* address, int salary) :Worker(name, address)
	{
		this->salary = salary;
	}
};

class BWorker : public Worker //计件工人类
{
public:
	BWorker(char* name, char* address, 
 				int total_numbers, int every) :Worker(name, address)
	{
		this->salary = total_numbers*every;
	}
};

class CWorker : public Worker //计时工人类
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
	Worker* w; //基类指针
	//基类指针指向固定工人
    w = new AWorker((char*)"A Worker", (char*)"A address", 2000); 
	w->printInfo();
    //基类指针指向计件工人
	w = new BWorker((char*)"B Worker", (char*)"B address", 100, 15); 
	w->printInfo();
    //基类指针指向计时工人
	w = new CWorker((char*)"C Worker", (char*)"C address", 80, 30); 
	w->printInfo();

	return 0;
}
