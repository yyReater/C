#include "observer.h"


void Blog::Attach(Observer *p){
    obvrs->push_back(p);
}
void Blog::Remove(Observer *p){
    obvrs->remove(p);
}
void Blog::Notify(){
    list<Observer*>::iterator iter;
    for(iter=obvrs->begin(); iter!=obvrs->end(); iter++)
        (*iter)->update(m_status);
}


string BlogCSDN::getStatus(){
    return m_status;
}
void BlogCSDN::setStatus(string sta){
    m_status = sta;
}

void ObserverBlog::update(string s){
    cout<<"博客更新："<<endl;
    cout<<s<<endl;
}



