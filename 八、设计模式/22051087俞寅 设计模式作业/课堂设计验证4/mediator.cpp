#include "mediator.h"
using namespace std;

void HouseMediator::setLandlord(Person *p){
    landlord = p;
}
void HouseMediator::setRenter(Person *p){
    renter = p;
}
void HouseMediator::sendMsg(Person *p, string msg){
    if(p == landlord)
        renter->getMessage(msg);
    if(p == renter)
        landlord->getMessage(msg);
}

void Landlord::setMediator(Mediator *mdr){
    mediator = mdr;
}
void Landlord::sendMessage(string msg){
    mediator->sendMsg(this, msg);
}
void Landlord::getMessage(string msg){
    cout<<"房东收到消息"<<endl;
}

void Renter::setMediator(Mediator *mdr){
    mediator = mdr;
}
void Renter::sendMessage(string msg){
    mediator->sendMsg(this, msg);
}
void Renter::getMessage(string msg){
    cout<<"租客收到消息"<<endl;
}