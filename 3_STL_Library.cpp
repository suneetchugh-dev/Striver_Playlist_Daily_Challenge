 //What is STL => STL is Standard Templatee Libarary
//STL is a collection of template classes and functions which are used for general purpose in C++ programming
//STL is divided into 4 parts
//1. Containers => queues, vectors, sets , map, etc
//2. Algorithms
//3. Iterators
//4. Functors


//=>>Let's Start
// #include <bits/stdc++.h> //this is the library, because of this you don't have to add libraries individually
// using namespace std;

// void print()
// {
//     cout << "Suneet Chugh";
// }

// int sum(int a, int b)
// {
//     cout << a+b;
// }
// int main()
// {
//     print()
//     int s = sum(5,5);
//     return 0;
// }

// void explainPair() {

//   //Using Pair For Storing Two Values 
//   pair<int, int> p = {1, 3};
//   cout << p.first << " " << p.second;

//   pair<int, pair<int><int>> p ={1, {3,4}};
//   cout << p.first <<< " " << p.second.second << " " << p.second.first

//   //What If We Want To Store More Than 2 Values => then we can use nested pair
//   pair <int, int> arr[] = { {1,2} , {2,5}, {5,1} };
//   cout << arr[1].second;
// }


// void explainVector() 
// {
  // Vector are dynamic in nature, we can always increase and decrease the size
  // of a vector, more like a container like an array but dynamic in nature
  // vector<int> v;  //Created Vector of Integer Type and name is v

  // v.push_back(1);
  // v.emplace_back(2); //similar to push_back but faster than push_back

  // vector <pair<int, int>> vec;

  // v.push_back({1, 2});
  // v.emplace_back(1, 2); //similar to push_back but faster than push_back

  // vector<int> v(5,100); //vector of size 5 and all values are 100, container of size 5 with 5 instances of 100 like 100,100,100,100,100

  // vector<int> v(5,20);
  // vector <int> v2(v1);

  // cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << endl;
  // cout << v.size() << endl;

 // Example: Using vector, iterators, pop_back, and erase in C++

//  // 1. Create a vector of integers
//  vector<int> v;
//  v.push_back(10); // Adds 10 to the end
//  v.push_back(20); // Adds 20 to the end
//  v.push_back(30); // Adds 30 to the end
//  v.push_back(40); // Adds 40 to the end

//  // 2. Print all elements using a simple for loop
//  cout << "Vector elements using index: ";
//  for (int i = 0; i < v.size(); i++) {
//    cout << v[i] << " ";
//  }
//  cout << endl;

//  // 3. Print all elements using an iterator
//  cout << "Vector elements using iterator: ";
//  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
//    cout << *it << " "; // *it gives the value at the iterator
//  }
//  cout << endl;

//  // 4. Remove the last element using pop_back()
//  v.pop_back(); // Removes 40
//  cout << "After pop_back: ";
//  for (int x : v)
//    cout << x << " ";
//  cout << endl;

//  // 5. Erase the second element (index 1)
//  // v.erase(v.begin() + 1) removes the element at index 1 (20)
//  v.erase(v.begin() + 1);
//  cout << "After erasing second element: ";
//  for (int x : v)
//    cout << x << " ";
//  cout << endl;

//  // 6. Show how to use iterator to access elements
//  vector<int>::iterator it = v.begin(); // Points to first element
//  cout << "First element: " << *it << endl;
//  ++it; // Move to next element
//  if (it != v.end())
//    cout << "Second element: " << *it << endl;

//  // 7. Safe way to move iterator forward
//  // Only move if enough elements exist
//  if (v.size() > 2) {
//    it = v.begin() + 2;
//    cout << "Third element: " << *it << endl;
//  }

// }

 // Now Learning List
 //  void explainList()
 //  {
    // // Remember Subscript is not allowed in List, and the benefit it provides is to
    // // push elements in the start.
    // list<int> ls;
    // ls.emplace_back(4); // places at last
    // cout << "After emplace_back(4): ";
    // for (int x : ls)
    //   cout << x << " ";
    // cout << endl;
    // ls.emplace_front(2); // places in front
    // cout << "After emplace_front(2): ";
    // for (int x : ls)
    //   cout << x << " ";
    // cout << endl;
    // // rest all operations are same as of vector
    // return 0;
 // }



#include <bits/stdc++.h>
 using namespace std;
 int main() {

 }
