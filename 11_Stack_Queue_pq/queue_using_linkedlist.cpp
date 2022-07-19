#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->next=nullptr;
        this->data = data;
    }

};

class MyQueue{
    public:
    Node* front, *rear;

    MyQueue()
    {
        front = rear =nullptr;
    }


    void Enqueue(int data)
    {
        Node* newNode = new Node(data);
        if(rear==nullptr)
        {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void  Dequeue()
    {
        if(front==nullptr)
        {
            return;
        }

        Node* temp = front;
        front = front->next;
       if(front ==nullptr)
       {
         rear =nullptr;
       }
       
       delete(temp);
     
    }
};


int main()
{
    MyQueue Q;
    Q.Enqueue(20);
    Q.Enqueue(50);
    Q.Enqueue(100);
    Q.Dequeue();Q.Dequeue();
    cout<<(Q.rear)->data<<endl;
}