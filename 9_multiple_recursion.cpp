//understanding multiple recursion calls using fibonnaci series example 
//time complexity (T.C) is nearly exponential => 2^n (but not exact) like for n=4 it made 9 recursive calls, but not exactly like 2^4 which is equal to => 16
#include <iostream>
using namespace std;

f(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        last = f(n-1);
        slast = f(n-2);
        return last+slast;
    }
}

int main()
{
    int n;
    cin >> n;
    f(n);
}