#include <iostream>
// can also use #include <bits/stdc++.h>
using namespace std;

int main() {
  // Rectangle Pattern
  //  for(int i=0; i<4; i++)
  //  {
  //      for(int j=0; j<4; j++)
  //      {
  //          cout << "*" << " ";
  //      }
  //      cout << endl;
  //  }

  // Increasing Triangle Pattern
  //  for(int i=0; i<5; i++)
  //  {
  //      for(int j=0; j<=i; j++)
  //      {
  //          cout << "*" << " ";
  //      }
  //      cout << endl;
  //  }

  // Increasing Number Triangle Pattern
  //  for(int i=0; i<5; i++)
  //  {
  //      for(int j=0; j<=i; j++)
  //      {
  //          cout << j+1 << " ";
  //      }
  //      cout << endl;
  //  }

  // Increasing Number Triangle Pattern 2 [Using Row Number]
  //  for(int i=0; i<5; i++)
  //  {
  //      for(int j=0; j<=i; j++)
  //      {
  //          cout << i << " ";
  //      }
  //      cout << endl;
  //  }

  // Decreasing Traingle Pattern
  // int n = 6; // n for number of rows
  // for (int i = 1; i < n; i++) {
  //   for (int j = 1; j < n - i + 1; j++) // Here N is number of rows, i is
  //   present row in iteration , and  +1 is for pattern (see notebook for
  //   pattern)
  //   {
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // for (int i = 1; i < n; i++) {
  //   for (int j = 1; j < n - i + 1; j++)  // Here N is number of rows, i is
  //   present row in iteration , and  +1 is for pattern (see notebook for
  //   pattern)
  //   {
  //     cout << j;
  //   }
  //   cout << endl;
  // }

  // Center Triangle
  //  int n=4;
  //  for(int i=0; i<n;i++)
  //  {
  //    //space
  //    for(int j=0; j<n-i-1; j++)
  //    {
  //      cout << " ";
  //    }
  //    //star
  //    for(int k=0; k<2*i+1; k++)
  //    {
  //      cout << "*";
  //    }
  //    //space
  //    for(int j=0; j<n-i-1; j++)
  //    {
  //      cout << " ";
  //    }
  //    cout << endl;
  //  }

  // Reverse Center Triangle
  // int n = 5;
  // for (int i = 0; i < n; i++) {
  //   // leading spaces (increase each row)
  //   for (int j = 0; j < i; j++)
  //     cout << " ";
  //   // stars (decrease by 2 each row): 2*(n-i)-1
  //   for (int k = 0; k < 2 * (n - i) - 1; k++)
  //     cout << "*";
  //   cout << endl;
  // }

  // Diamond Pattern
  //  int n=4;
  //   for(int i=0; i<n;i++)
  //   {
  //     //space
  //     for(int j=0; j<n-i-1; j++)
  //     {
  //       cout << " ";
  //      }
  //      //star
  //      for(int k=0; k<2*i+1; k++)
  //     {
  //       cout << "*";
  //     }
  //     //space
  //     for(int j=0; j<n-i-1; j++)
  //     {
  //       cout << " ";
  //      }
  //      cout << endl;
  //    }

  //   for (int i = 0; i < n; i++) {
  //     // leading spaces (increase each row)
  //     for (int j = 0; j < i; j++)
  //       cout << " ";
  //     // stars (decrease by 2 each row): 2*(n-i)-1
  //     for (int k = 0; k < 2 * (n - i) - 1; k++)
  //       cout << "*";
  //     cout << endl;
  //   }

  // Pattern 8 =>  Center Triangle Rotated 180 degrees
  //    int n=4;
  //    for(int i=0; i<=2*n-1;i++)
  //    {
  //      int stars = i;
  //      if (i>=n)
  //      {
  //        stars = 2*n - i;
  //      }
  //      for(int j=0; j<stars; j++)
  //      {
  //        cout << "*";
  //      }
  //      cout << endl;
  //    }
  //  }

  // Pattern 9 => 1 & 0 Right Angle Pattern
  //  int n =5;
  //  for(int i=0; i<n; i++)
  //  {
  //    int start = 1;
  //    for(int i=0; i<n; i++)
  //    {
  //      if(i%2 == 0)
  //      {
  //        start = 1;
  //      }
  //      else
  //      {
  //       start = 0;
  //     }
  //     for(int j=0; j<i; j++)
  //     {
  //       cout << start;
  //       start = 1 - start;
  //     }
  //     cout << endl;
  //   }
  // }

//Pattern 10 => Number Space Number Pattern
  // int n = 5;
  // for (int i = 1; i <= n; i++) {
  //   int space = 2 * (n - i); // spaces shrink each row
  //   // left ascending numbers 1..i
  //   for (int j = 1; j <= i; j++) cout << j;
  //   // middle spaces
  //   for (int s = 0; s < space; s++) cout << " ";
  //   // right descending numbers i..1
  //   for (int j = i; j >= 1; j--) cout << j;
  //   cout << endl;
  // }


//Increasing Number Pattern
// int n=5;
// int num = 1;
// for(int i=0; i<=n; i++)
// {
//   for(int j=1; j<=i;j++)
//   {
//     cout << num << " ";
//     num = num+1;
//   }
//   cout << endl;
// }


//Alphabet Pattern
  // int n=5;
  // for(int i=0;i<=n; i++)
  // {
  //   for(char ch='A'; ch<='A'+i; ch++)
  //   {
  //     cout << ch << " ";
  //   }
  //   cout<<endl;
  // }

  //Reverse Alphabet Pattern
  // int n=5;
  // for(int i=0; i<=n; i++)
  // {
  //   for(char ch='A'; ch<= 'A' + (n-i-1); ch++)
  //   {
  //     cout << ch << " ";
  //   }
  //   cout << endl;
  // } 


  //Row-wise Alphabet Repeating Pattern
  // int n=5;
  // for(int i=0; i<=n; i++)
  // {
  //   char ch='A'+ i;
  //   for(int j=0; j<=i; j++)
  //   {
  //     cout << ch << " ";
  //   }
  //   cout << endl;
  // }
  
//Empty Rectangle Pattern
  // int n=5;
  // for(int i=0; i<n; i++)
  // {
  //   for(int j=0; j<n; j++)
  //   {
  //     if(i==0 || j==0 || i==n-1 || j==n-1)
  //     {
  //       cout << "*";
  //     }
  //     else
  //     {
  //       cout << " ";
  //     }
  //   }
  //   cout << endl;
  // }
}
// End Of File