#ifndef MEDIATOR_H
#define MEDIATOR_H

#include<iostream>
#include<string> 

using namespace std;

class Person;
class Mediator{
    public:
        virtual void setLandlord(Person* p) = 0;
        virtual void setRenter(Person* p) = 0;
        virtual void sendMsg(Person* p,string msg);
};

class HouseMediator : public Mediator{
    private:
        Person *landlord;
        Person *renter;
    public:
        void setLandlord(Person *p);
        void setRenter(Person *p);
        void sendMsg(Person *p, string msg);
};

class Person{
    protected:
        Mediator *mediator;
    public:
        virtual void setMediator(Mediator* mediator){};
        virtual void sendMessage(string msg) = 0;
        virtual void getMessage(string msg);
};

class Landlord : public Person{
    public:
        void setMediator(Mediator *mdr);
        void sendMessage(string msg);
        void getMessage(string msg);
};

class Renter : public Person{
    public:
        void setMediator(Mediator *mdr);
        void sendMessage(string msg);
        void getMessage(string msg);
};

#endif