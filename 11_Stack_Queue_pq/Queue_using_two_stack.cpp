#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
    public:
    stack<int> s1;
    stack<int>  s2;
    void Push(int data) // o(1)
    {
        s1.push(data);
    }


    int Pop() // o(n)
    {
        if(s1.empty()) return -1;
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
            
        }
        int ans = s2.top();
        s2.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return ans;
    }
    int Size()
    {
        return s1.size();

    }
    bool Empty()
    {
        return s1.empty();
    }

};

int main()
{
    MyQueue Q;
    Q.Push(20);
    Q.Push(40);
    Q.Push(50);
    cout<<Q.Pop()<<endl;
    cout<<Q.Pop()<<endl;
    cout<<Q.Pop()<<endl;
  

    cout<<Q.Size()<<endl;
    cout<<boolalpha<<Q.Empty()<<endl;
   // cout<<Q.peek()<<endl;

}