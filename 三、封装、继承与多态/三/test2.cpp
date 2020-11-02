#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>

using namespace std;

class Pet{
    protected:
        string name;
        int length, weight, current;
    public:
        virtual void display(int day) = 0;
        Pet(string n, int l, int w, int c){
            name = n;
            length = l;
            weight = w;
            current = c;
        }
        void Print(){
            cout<<name<<" "<<length<<" "<<weight<<endl;
        }

};

class Cat : public Pet{
    public:
        Cat(string n, int l, int w, int c):Pet(n, l, w, c){}
        void display(int day){
            day -= current;
            length += 1 * day;
            weight += 2 * day;
            return ;
        }
}; 

class Dog: public Pet{
    public:
        Dog(string n, int l, int w, int c):Pet(n, l, w, c){}
        void display(int day){
            day -= current;
            length += 2 * day;
            weight += 1 * day;
            return ;
        }
}; 
Pet *pt[10];
int now, l, w, c, cnt;
string n;
int main(){
    cnt = 0;
    scanf("%d", &now);
    while(cin>>n>>l>>w>>c){
        if(now == 1)pt[++cnt] = new Cat(n, l, w, c);
        else pt[++cnt] = new Dog(n, l, w, c);
        scanf("%d", &now);
    }
    for(int i = 1; i <= cnt; i++)pt[i]->display(now);
    for(int i = 1; i <= cnt; i++)pt[i]->Print();
    return 0;
}
