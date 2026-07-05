//print my name n times using recursion
// #include <iostream>
// using namespace std;


// void f(int i,int n)
// {
//     if(i>n)
//     {
//         return;
//     }
//     cout << i << "-" << "Krish\n";
//     f(i+1,n);
// }


// int main()
// {
//     int n;
//     cout << "Enter No of Time You Want Your Name to get printed: ";
//     cin >> n;
//     f(1,n);
// }


//Print in terms n to 1
#include <iostream>
using namespace std;


void f(int i,int n)
{
    if(i<1)
    {
        return;
    }
    cout << i << "-" << "Krish\n";
    f(i-1,n);
}


int main()
{
    int n;
    cout << "Enter No of Time You Want Your Name to get printed: ";
    cin >> n;
    f(n,n);
}    