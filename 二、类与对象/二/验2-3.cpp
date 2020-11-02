#define _CRT_SECURE_NO_WARNINGS
 #include <iostream>
 #include <iomanip>
 using namespace std;
 #define Max 100 
 class Bank
 {
 	int top; //��¼���״���
 	char date[Max][10]; // ���� 
 		int money[Max]; // ��� 
 		int rest[Max]; // ��� 
 		static int sum; // �ۼ���� 
 	public:
 		Bank(){ top = 0; }
 		void bankin(char d[], int m) //��Ǯ
 		{
 			strcpy(date[top], d); //��Ǯ���ڴ洢��date[]��
 			money[top] = m;  //�洢�Ľ��洢money[]��
 			sum = sum + m;  //�ۼ����
 			rest[top] = sum; //�ۼ����
 			top++; 
 		}
 		void bankout(char d[], int m) //ȡǮ
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
 		//�����������
 		for (i = 0; i<top; i++)
 		{
 	
 			cout << setw(8) << date[i]; //��������
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
