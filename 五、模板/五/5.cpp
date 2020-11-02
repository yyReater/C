#include<cstdio>
using namespace std;

template <typename T>
class Node{
    public:
        T a;
        Node *next;
        Node(T a_){
            a = a_;
            next = NULL;
        }
};

template <typename T>
class NodeList{
    public:
        Node *head;

};

int main(){

}