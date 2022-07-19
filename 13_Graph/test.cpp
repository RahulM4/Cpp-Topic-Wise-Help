#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int  data)
    {
        this->val = data;
        next = NULL;
    }
};

void insertTail(Node* head, int x)
{
    if(head == NULL)
    {
        return;
    }
   Node* temp = new Node(x);
   head =temp->next; 
}

void print(Node * head)
{
    int 
}


int main()
{
    

}