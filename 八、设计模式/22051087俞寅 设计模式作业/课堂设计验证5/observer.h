#ifndef OBSERVER_H
#define OBSERVER_H
#include<list>
#include<iostream>

using namespace std;

class Observer;

class Blog{
    protected:
        list<Observer*> *obvrs;
        string m_status;
    public:
        void Attach(Observer *p);
        void Remove(Observer *p);
        void Notify();
        virtual string getStatus() = 0;
        virtual void setStatus(string sta) = 0;
};

class BlogCSDN : public Blog{
    private:
        string m_name;
    public:
        string getStatus();
        void setStatus(string sta);
};

class Observer{
    public:
        virtual void update(string s) = 0;
};

class ObserverBlog : public Observer{
    public:
        void update(string s);
};

#endif