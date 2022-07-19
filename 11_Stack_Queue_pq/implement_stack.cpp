#include <bits/stdc++.h>
using namespace std;
//Using array



// class MyStack
// {
//     int size, *arr, top;

// public:
//     MyStack()
//     {
//         top = -1;
//         size = 104;
//         arr = new int[size];
//     }

//     void Push(int x)
//     {
//         top++;
//         arr[top] = x;
//     }

//     int Pop()
//     {
//         int x = arr[top];
//         top--;
//         return x;
//     }

//     int Top()
//     {
//         return arr[top];
//     }

//     int Size()
//     {
//         return top + 1;
//     }

//     bool Empty()
//     {
//         return top == -1;
//     }
// };
// int main()
// {
//     // MyStack stacK;
//     // stacK.Push(10);
//     // stacK.Push(20);
//     // stacK.Push(30);
//     cout << "Top of stack is before deleting any element " << stacK.Top() << endl;
//     cout << "Size of stack before deleting any element " << stacK.Size() << endl;
//     cout << "The element deleted is " << stacK.Pop() << endl;
//     cout << "Size of stack after deleting an element " << stacK.Size() << endl;
//     cout << "Top of stack after deleting an element " << stacK.Top() << endl;
//     if(stacK.Empty()) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
// }





// //Using Linked List

// struct Node
// {
//     int data;
//     Node* link;
// };
  
// Node* top;
  
// void push(int data)
// {
      
//     // allocate memory in heap
//     Node* temp = new Node();
  
//     // Check if stack (heap) is full.
//     // Then inserting an element would
//     // lead to stack overflow
//     if (!temp)
//     {
//         cout << "\nStack Overflow";
//         exit(1);
//     }
  
//     // Initialize data into temp data field
//     temp->data = data;
  
//     // Put top pointer reference into temp link
//     temp->link = top;
  
//     // Make temp as top of Stack
//     top = temp;
// }
  
// // Utility function to check if
// // the stack is empty or not
// int isEmpty()
// {
//     return top == NULL;
// }
  
// // Utility function to return top element in a stack
// int peek()
// {
//     if (!isEmpty())
//         return top->data;
//     else
//         exit(1);
// }
  
// void pop()
// {
//     Node* temp;
  
//     // Check for stack underflow
//     if (top == NULL)
//     {
//         cout << "\nStack Underflow" << endl;
//         exit(1);
//     }
//     else
//     {
          
//         // Assign top to temp
//         temp = top;
//         // Assign second node to top
//         top = top->link;
//         // Release memory of top node
//         free(temp);
//     }
// }

// void display()
// {
//     Node* temp;
  
//     // Check for stack underflow
//     if (top == NULL)
//     {
//         cout << "\nStack Underflow";
//         exit(1);
//     }
//     else
//     {
//         temp = top;
//         while (temp != NULL)
//         {
  
//             // Print node data
//             cout << temp->data << "-> ";
  
//             // Assign temp link to temp
//             temp = temp->link;
//         }
//     }
// }
  
// // Driver Code
// int main()
// {
      
//     // Push the elements of stack
//     push(11);
//     push(22);
//     push(33);
//     push(44);
  
//     // Display stack elements
//     display();
  
//     // Print top element of stack
//     cout << "\nTop element is "
//         << peek() << endl;
  
//     // Delete top elements of stack
//     pop();
//     pop();
  
//     // Display stack elements
//     display();
  
//     // Print top element of stack
//     cout << "\nTop element is "
//         << peek() << endl;
          
//     return 0;
// }


//USING two QUEUE
class Stack {
    // Two inbuilt queues
    queue<int> q1, q2;
  
    // To maintain current number of
    // elements
    int curr_size;
  
public:
    Stack()
    {
        curr_size = 0;
    }
  
    void push(int x)
    {
        curr_size++;
  
        // Push x first in empty q2
        q2.push(x);
  
        // Push all the remaining
        // elements in q1 to q2.
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
  
        // swap the names of two queues
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
  
    void pop()
    {
  
        // if no elements are there in q1
        if (q1.empty())
            return;
        q1.pop();
        curr_size--;
    }
  
    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
  
    int size()
    {
        return curr_size;
    }
};
//USING SINGLE QUEUE
class Stack {
  queue < int > q;
  public:
    void Push(int x) {
      int s = q.size();
      q.push(x);
      for (int i = 0; i < s; i++) {

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
  

