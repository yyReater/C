#ifndef DEQUE_H
#define DEQUE_H

class Sequence{
    public:
        virtual void push(int x) = 0;   
        virtual void pop() = 0;
};

class Queue : public Sequence{
    public:
        void push(int x);
        void pop();
};

class Stack : public Sequence{
    public:
        void push(int x);
        void pop();
};

class Deque{
    public:
        Deque();
        Deque(Sequence *Sub);
        void push_back(int x);
        void push_front(int x);
        void pop_back();
        void pop_front();
    private:
        Sequence *sub;
};

#endif