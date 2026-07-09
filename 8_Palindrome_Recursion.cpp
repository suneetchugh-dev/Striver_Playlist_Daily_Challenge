//reversing a string , basically doing palindrome using recursion
//palindrome is basically when a string or number result the same output when we reverse the original one. then the given input is a palindrome.
//palindrome ex : - MADAM
//so how do you even validate => we keep a original copy and we make change to original , if at the end after reversing the original the copy is exactly == original then the provided input is a palindrome.

#include <iostream>
using namespace std;

bool f(int i, string &s)
{
    int n=s.size();
    if(i>= n / 2)
    {
        return true;
    }
    if(s[i]!=s[n-i-1])
    {
        return false;
    }
    return f(i+1,s);
}


int main()
{
    string s = "madasm";
    cout << f(0,s);
    return 0;
}

