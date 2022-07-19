// #include <bits/stdc++.h>
// using namespace std;

// class MyQueue
// {
// public:
//     int *arr;
//     int capacity;
//     int rear;

//     MyQueue(int n)
//     {
//         capacity = n;
//         arr = new int[n];
//         rear = -1;
//     }

//     void Enqueue(int data)
//     {
//         if (rear == capacity - 1)
//         {
//             cout << "overflow";
//         }

//         rear++;
//         arr[rear] = data;
//     }

//     int Dequeue()
//     {
//         if (rear == -1)
//         {
//             cout<<"empty"
//         }
//         else
//         {
//             int result = arr[0];

//             for (int i = 0; i < rear; i++)
//             {
//                 arr[i] == arr[i + 1];
//             }
//             rear--;
//             return result;
//         }
//     }

//     int getfront()
//     {
//         if (rear == -1)
//         {
//             return -1;
//         }
//         else
//         {
//             return arr[0];
//         }
//     }
// };

// int main()
// {
//     MyQueue Q(3);
//     Q.Enqueue(20);
//     Q.Enqueue(50);
//     Q.Enqueue(100);
//     Q.Dequeue();
//     Q.Dequeue();
//     Q.Dequeue();
//     cout << Q.getfront() << endl;
// }

//Using Circular array
#include<bits/stdc++.h>

using namespace std;
class Queue {
  int * arr;
  int start, end, currSize, maxSize;
  public:
    Queue() {
      arr = new int[16];
      start = -1;
      end = -1;
      currSize = 0;
    }

  Queue(int maxSize) {
    ( * this).maxSize = maxSize;
    arr = new int[maxSize];
    start = -1;
    end = -1;
    currSize = 0;
  }
  void push(int newElement) {
    if (currSize == maxSize) {
      cout << "Queue is full\nExiting..." << endl;
      exit(1);
    }
    if (end == -1) {
      start = 0;
      end = 0;
    } else
      end = (end + 1) % maxSize;
    arr[end] = newElement;
    cout << "The element pushed is " << newElement << endl;
    currSize++;
  }
  int pop() {
    if (start == -1) {
      cout << "Queue Empty\nExiting..." << endl;
    }
    int popped = arr[start];
    if (currSize == 1) {
      start = -1;
      end = -1;
    } else
      start = (start + 1) % maxSize;
    currSize--;
    return popped;
  }
  int top() {
    if (start == -1) {
      cout << "Queue is Empty" << endl;
      exit(1);
    }
    return arr[start];
  }
  int size() {
    return currSize;
  }

};

int main() {
  Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}