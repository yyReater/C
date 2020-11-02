#include<iostream>
#include <string>
using namespace std;

/* 请在这里填写答案 */
static double maxx = 0;
class Student{
    protected:
        string num, name;
    public:
        Student(string n1, string n2){
            num = n1;
            name = n2;
        }
        virtual double avg() = 0;
        virtual void display() = 0;
};
class GroupA : public Student{
    protected:
        int s1, s2;
    public:
        GroupA(string n1, string n2, int S1, int S2):Student(n1, n2){
            s1 = S1;
            s2 = S2;
            if((s1 + s2) / 2.0 > maxx)
                maxx = (s1 + s2) / 2.0;
        }
        double avg(){
            return (s1 + s2) / 2.0;
        }
        void display(){
            if(this->avg() == maxx)
                cout<<num<<" "<<name<<endl;
        }
};
class GroupB : public Student{
    protected:
        int s1, s2;
        char gs;
    public:
        GroupB(string n1, string n2, int S1, int S2, char GS):Student(n1, n2){
            s1 = S1;
            s2 = S2;
            gs = GS;
            if((s1 + s2) / 2.0 > maxx)
                maxx = (s1 + s2) / 2.0;
        }
        double avg(){
            return (s1 + s2) / 2.0;
        }
        void display(){
            if(this->avg() == maxx || this->avg() >= maxx * 0.7 && gs == 'A')
                cout<<num<<" "<<name<<endl;
        }
};
class GroupC : public Student{
    protected:
        int s1, s2, s3, s4, s5;
    public:
        GroupC(string n1, string n2, int S1, int S2, int S3, int S4, int S5):Student(n1, n2){
            s1 = S1;
            s2 = S2;
            s3 = S3;
            s4 = S4;
            s5 = S5;
        }
        double avg(){
            return (s1 + s2 + s3 + s4 + s5) / 5.0;
        }
        void display(){
            if (this->avg() >= 0.9 * maxx) cout<<num<<" "<<name<<endl;
        }
};

int main()
{
    const int Size=50;
    string num, name;
    int i,ty,s1,s2,s3,s4,s5;
    char gs;
    Student *pS[Size];
    int count=0;
    for(i=0;i<Size;i++){
        cin>>ty;
        if(ty==0) break;
        cin>>num>>name>>s1>>s2;
        switch(ty){
             case 1:pS[count++]=new GroupA(num, name, s1, s2); break;
             case 2:cin>>gs; pS[count++]=new GroupB(num, name, s1,s2, gs); break;
             case 3:cin>>s3>>s4>>s5; pS[count++]=new GroupC(num, name, s1,s2,s3,s4,s5); break;
        }			
    }
    for(i=0;i<count;i++) {
        pS[i]->display();
        delete pS[i];
    }
    return 0;
}
