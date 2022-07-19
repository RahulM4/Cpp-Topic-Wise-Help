#include <bits/stdc++.h>
using namespace std;

//creat class Node
class Node{
    public:
    int val;
    Node* next;
    //create constructors
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
//create insert function
void InsertatHead(Node* &head, int x)
{
    Node* temp = new Node( x);
    temp->next =head;
    head =temp;
}
//print function to print list
void PrintList(Node* head)
{
    Node* temp = head;
    if(temp == NULL)
    {
        return;
    }
   while(temp != NULL)
   {
       cout<<temp->val<<" ";
       temp = temp->next;
   }
   cout<<endl;

}


int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        InsertatHead(head, x);
    }
    PrintList(head);
}