#include<iostream>
#include "deque.h"

using namespace std;

int main(){
    Sequence *queue = new Queue();
    Deque *now = new Deque(queue);
    now->push_back(5);
    now->pop_front();
    return 0;
}