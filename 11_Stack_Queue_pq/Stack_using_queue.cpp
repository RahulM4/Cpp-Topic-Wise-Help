// #include<bits/stdc++.h>
// using namespace std;

// class Mystack{
//     public:
//     queue<int> q1,q2;

//     void Push(int data) //o(n)
//     {
//        while(!q1.empty())
//        {
//           q2.push(q1.front());
//           q1.pop();
//        }

//        q1.push(data);

//        while(!q2.empty())
//        {
//           q1.push(q2.front());
//           q2.pop();
//        }
//     }
//     int Pop()
//     {
//        int ans = q1.front();
//         q1.pop();
//         return ans;
//     }
//      int Peek()
//     {
//        int ans = q1.front();
//         return ans;
//     }
//    int Size()
//    {
//       return q1.size();
//    }

// };

// int main()
// {
//     Mystack s;
//     s.Push(50);
//     s.Push(80);
//     s.Push(100);
//     s.Push(200);
//     cout<<s.Pop()<<endl;
//      cout<<s.Pop()<<endl;
//      cout<<s.Peek()<<endl;
//      cout<<s.Size()<<endl;
// }

//Using single queue

#include<bits/stdc++.h>

using namespace std;

class Stack {
  queue < int > q;
  public:
    void Push(int x) {
      int s = q.size();
      q.push(x);
      for (int i = 0; i < s; i++) { //o(n)

        q.push(q.front());
        q.pop();
      }
    }
  int Pop() {
    int n = q.front();
    q.pop();
    return n;
  }
  int Top() {
    return q.front();
  }
  int Size() {
    return q.size();
  }
};

int main() {
  Stack s;
  s.Push(3);
  s.Push(2);
  s.Push(4);
  s.Push(1);
  cout << "Top of the stack: " << s.Top() << endl;
  cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: " << s.Pop() << endl;
  cout << "Top of the stack after removing element: " << s.Top() << endl;
  cout << "Size of the stack after removing element: " << s.Size();

}