#include<bits/stdc++.h>
using namespace std;

//structure
struct Node
{
public:
    int Data;   // store data of Node,
    Node *Next; // store address of next node

    // create Constructor
    Node(int Data)
    {
        this->Data = Data;
        Next = NULL;
    }                                   
};
// class node
class node
{
public:
    int data;   // store data of Node,
    node *next; // store address of next node

    // create Constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }                                   
};
