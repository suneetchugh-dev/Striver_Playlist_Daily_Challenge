//Summation of first n numbers using recursion
//if n=3 [first 3 numbers] then sum=1+2+3=6

//parameterised way
// #include <iostream>
// using namespace std;

// int f(int n, int sum)
// {
//     if(n<1)
//     {
//         cout << sum;
//         return sum;
//     }
//     else
//     {
//         return f(n-1, sum+n);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << "\n";
//     f(n,0);
// }


//Functional Way

// #include <iostream>
// using namespace std;


// int f(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     {
//         return n + f(n-1);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << f(n);
// }


//task by striver

//=> factorial of n

// #include <iostream>
// using namespace std;

// int f(int n)
// {
//     if(n<0)
//     {
//         throw invalid_argument("Enter a valid number positive number");
//     }
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * f(n-1);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << f(n);
// }