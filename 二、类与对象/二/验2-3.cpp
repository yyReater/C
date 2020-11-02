#define _CRT_SECURE_NO_WARNINGS
 #include <iostream>
 #include <iomanip>
 using namespace std;
 #define Max 100 
 class Bank
 {
 	int top; //记录交易次数
 	char date[Max][10]; // 日期 
 		int money[Max]; // 金额 
 		int rest[Max]; // 余额 
 		static int sum; // 累计余额 
 	public:
 		Bank(){ top = 0; }
 		void bankin(char d[], int m) //存钱
 		{
 			strcpy(date[top], d); //存钱日期存储在date[]中
 			money[top] = m;  //存储的金额存储money[]中
 			sum = sum + m;  //累计余额
 			rest[top] = sum; //累计余额
 			top++; 
 		}
 		void bankout(char d[], int m) //取钱
 		{
 			strcpy(date[top], d);
 			money[top] = -m;
 			sum = sum - m;
 			rest[top] = sum;
 			top++;
 		}
 		void disp();
 	};
 	
 	int Bank::sum = 0;
	void Bank::disp()
 	{
 		int i;
 		//输出交易详情
 		for (i = 0; i<top; i++)
 		{
 	
 			cout << setw(8) << date[i]; //交易日期
 			if (money[i] < 0)
 				cout << setw(6) <<money[i];
 			else
 				cout << setw(3) <<"+"<<money[i];
 			printf("%6d\n", rest[i]);
 		}
 	}
 	
 	
 	int main()
 	{
 		Bank obj;
 		obj.bankin("2001.2.5", 1000);
 		obj.bankin("2001.3.2", 2000);
 		obj.bankout("2001.4.1", 500);
 		obj.bankout("2001.4.5", 800);
 		obj.disp();
  	}
