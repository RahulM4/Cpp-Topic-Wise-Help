#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node (int data)
    {
        this-> data= data;
        next=nullptr;

    }

};

class Mystack{
    public:
    Node* head;
    int size=0;
    Mystack()
    {
        head==nullptr;
        size=0;

    }


    int Peek()
    {
        if(head==NULL)
        cout<<"UNDERFLOW";
        return head->data;
    }
    void Push(int data)
    {
        Node* temp = new Node(data);
        
        temp->next = head;
       
        head = temp;
         size++;
        
    }

    int Pop()
    {
        if(head==NULL){
            cout<<"UNDERFLOW";
        }
         int ans = head->data;
         size--;
         return ans;
    }
    int Size()
    {
         
         return size;
    }
    bool Empty()
    {
        return size==0;
    }
};


int main()
{
    Mystack st;
    st.Push(20);
    //st.Push(30);
    cout<<st.Peek()<<endl;
    cout<<st.Size()<<endl;
    cout<<st.Empty()<<endl;
    cout<<st.Pop()<<endl;
    cout<<st.Empty()<<endl;
    
    

}