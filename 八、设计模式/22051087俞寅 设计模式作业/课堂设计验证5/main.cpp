#include "observer.h"

int main(){
    Observer *ob1 = new ObserverBlog();
    Observer *ob2 = new ObserverBlog();

    Blog *bg = new BlogCSDN();
    bg->Attach(ob1);
    bg->Attach(ob2);

    bg->setStatus("明天地球要爆炸啦！");
    bg->Notify();

    return 0;
}