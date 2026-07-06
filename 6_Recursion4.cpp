//Summation of first n numbers using recursion
//if n=3 [first 3 numbers] then sum=1+2+3=6

//parameterised way
#include <iostream>
using namespace std;

int f(int n, int sum)
{
    if(n<1)
    {
        cout << sum;
        return sum;
    }
    else
    {
        return f(n-1, sum+n);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << "\n";
    f(n,0);
}