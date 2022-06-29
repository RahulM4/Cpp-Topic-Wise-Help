// //    https://www.code-recipe.com/post/lru-cache.
// #include <bits/stdc++.h>
// using namespace std;

// class LRUCache {
// 	// store keys of cache
// 	list<int> dq;

// 	// store references of key in cache
// 	unordered_map<int, list<int>::iterator> ma;
// 	int csize; // maximum capacity of cache

// public:
// 	LRUCache(int);
// 	void refer(int);
// 	void display();
// };

// // Declare the size
// LRUCache::LRUCache(int n)
// {
// 	csize = n;
// }

// // Refers key x with in the LRU cache
// void LRUCache::refer(int x)
// {
// 	// not present in cache
// 	if (ma.find(x) == ma.end()) {
// 		// cache is full
// 		if (dq.size() == csize) {
// 			// delete least recently used element
// 			int last = dq.back();

// 			// Pops the last element
// 			dq.pop_back();

// 			// Erase the last
// 			ma.erase(last);
// 		}
// 	}

// 	// present in cache
// 	else
// 		dq.erase(ma[x]);

// 	// update reference
// 	dq.push_front(x);
// 	ma[x] = dq.begin();
// }

// // Function to display contents of cache
// void LRUCache::display()
// {

// 	// Iterate in the deque and print
// 	// all the elements in it
// 	for (auto it = dq.begin(); it != dq.end();
// 		it++)
// 		cout << (*it) << " ";

// 	cout << endl;
// }

// // Driver Code
// int main()
// {
// 	LRUCache ca(4);

// 	ca.refer(1);
// 	ca.refer(2);
// 	ca.refer(3);
// 	ca.refer(1);
// 	ca.refer(4);
// 	ca.refer(5);
// 	ca.display();

// 	return 0;
// }
// // This code is contributed by Satish Srinivas



// class LRUCache {
// public:
//   using Key = int;
//   using Value = int;
//   using Iter = list<pair<Key, Value>>::iterator;
  
//   LRUCache(int capacity) : capacity_(capacity) {
//   }

//   int get(int key) {
//     auto map_iter = map_.find(key);
    
//     if (map_iter == map_.end()) {
//       return -1;
//     }
    
//     Iter list_iter = map_iter->second;
//     pair<Key, Value> key_val = *list_iter;  
//     list_.erase(list_iter);
    
//     list_.emplace_front(key_val);
//     map_.insert_or_assign(key, list_.begin());
    
//     return key_val.second;
//   }

//   void put(int key, int value) {
//     auto map_iter = map_.find(key);
    
//     if (map_iter == map_.end()) {
//       if (map_.size() >= capacity_) {
//         pair<Key, Value> LRU = list_.back();
//         list_.pop_back();
//         map_.erase(LRU.first);
//       }
//     } else {
//       list_.erase(map_iter->second);
//     }

//     list_.emplace_front(key, value);
//     map_.insert_or_assign(key, list_.begin());
//   }
    
// private:
//   const int capacity_;
//   list<pair<Key, Value>> list_;
//   unordered_map<Key, Iter> map_;
// };