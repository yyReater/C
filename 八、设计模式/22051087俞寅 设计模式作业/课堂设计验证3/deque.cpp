#include<iostream>
#include "deque.h"

using namespace std;

void Queue::push(int x){
    cout<<"尾部插入x"<<endl;
}
void Queue::pop(){
    cout<<"头部弹出"<<endl;
}

void Stack::push(int x){
    cout<<"头部插入x"<<endl;
}
void Stack::pop(){
    cout<<"尾部弹出"<<endl;
}


Deque::Deque(){
}
Deque::Deque(Sequence *Sub){
    sub = Sub;
}
void Deque::push_back(int x){
    sub->push(x);
}
void Deque::push_front(int x){
    sub->push(x);
}
void Deque::pop_back(){
    sub->pop();
}
void Deque::pop_front(){
    sub->pop();
}