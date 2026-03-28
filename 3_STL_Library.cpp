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


  
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // explainPair();
    vector <int> v;
    v.emplace_back(2);
    cout << v[0] << endl;


    vector <int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";
    it = it + 2;
    cout << *(it) << " ";
    return 0;
}

