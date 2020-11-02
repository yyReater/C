#include<cstdio>
using namespace std;

class Date{
    protected:
        int year, month, day;
        Date(int y, int m, int d){
            year = y;
            month = m;
            day = d;
        }
};
class Time{
    protected:
        int hour, minute, second;
        Time(int h, int m, int s){
            hour = h;
            minute = m;
            second = s;
        }
};

class Schedule : public Date, public Time{
    protected:
        int ID;
        
    public:
        bool operator< (const Schedule &s2){
            printf("asdA");
            if (this->year < s2.year) return true;
            if (this->year > s2.year) return false;
            if (this->month< s2.month) return true;
            if (this->month > s2.month) return false;
            if (this->day < s2.day) return true;
            if (this->day > s2.day) return false;
            if (this->hour < s2.hour) return true;
            if (this->hour > s2.hour) return false;
            if (this->minute < s2.minute) return true;
            if (this->minute > s2.minute) return false;
            if (this->second < s2.second) return true;  
            if (this->second > s2.second) return false;
            return true;
        }
        Schedule(int i, int y, int m, int d, int h, int mi, int s):Date(y, m, d),Time(h, mi, s){
            ID = i;
        }
        void Print(){
            printf("The urgent schedule is No.%d: %d/%d/%d %d:%d:%d\n", ID, year, month, day, hour, minute, second);
        }
};

Schedule *f[10000];
int cnt, id, y, m, d, h, mi, s;
int main(){
    scanf("%d", &id);
    cnt = 0;
    while (id){
        scanf("%d/%d/%d", &y, &m, &d);
        scanf("%d:%d:%d", &h, &mi, &s);
        f[++cnt] = new Schedule(id, y, m, d, h, mi, s);
        scanf("%d", &id);
    }
    int max = 1;
    for (int i = 2; i <= cnt ; i++)
        if (*f[i] < *f[max]){
			max = i;
			printf("asd");
		}
		//else printf("asd");
	
    f[max]->Print();
    return 0;
}