#include <iostream>
using namespace std;
int main()
{
    //=>Basic Input Output
    cout << "Hello World" << endl;
    cout << "Krish is the best" << endl;
    int day;
    cin >> day;

    //=>Switch Case
    switch (day)
    {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;      
        case 4:
            cout << "Thursday" << endl;     
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }

    //=>Arrays
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << "You have entered: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    //=>2D Arrays
    int arr[3][5];
    arr[3][5] = 78;
    cout << arr[3][5] << endl;

    //=>Strings
    string s = "this is a string";
    cout << s << endl;
    int len = s.size();
    cout << len << endl;
    cout << s.length() << endl;
    cout << s[-1] << endl; //prints last character
    cout << s[len-1] << endl; //prints last character
    cout << s[0] << endl;  //prints first character


    //For Loops
    int i;
    for(i=0; i<=5;i++)
    {
        cout << "Krish is the best" << endl;
        cout << i << endl; //i is accessible here as it is declared inside the loop
    }
    cout << i << endl; //i is accessible here as it is declared outside the loop //also value of i will be 6 here

    //Changing the condition
    for(int i=1; i<25; i+=5)
    {
        cout << "Krish is the best" << endl;
        cout << i << endl;
    }
    //reversing the loop
    for(int i=5; i>=1; i--)
    {
        cout << "Krish is the best" << endl;
        cout << i << endl;
    }

    //Converting For Loop into While Loop
    int i=1;
    while(i<=5)
    {
        cout << "Krish is the best" << i << endl;
        i+=1;
    }

    // //do While loop
    int i =2;
    do
    {
        cout << "Krish is the best" << i << endl;
        i+=1;
    }
    while(i<=1);
    cout << i << endl;

    //Functions
    //Function are set of code which perform something for you
    //Function is used modularise code
    //Function are used to increase redability
    //Function are used to avoid repitition of code

    //Types of functions 
    //void -> does not return any value
    //return -> returns a value
    //parameterised -> takes some value as input to perform task
    //non parameterised -> does not take any value as input to perform task
    
    //One Example of function=>
    string name;
    cin >> name;
    void printname(string name)
    {
        cout << "Krish is the best" << endl;
    }
    printName(name);


    //pass by value 

    void doSomething(int num)
    {
        num += 10;
        cout << "Inside function: " << num << endl;
    }
    int main()
    {
        int num =5;
        doSomething(num); //takes copy of num, it modified the copy but original num remains unchanged
        cout << "Outside function: " << num << endl;
        return 0;
    }

    //pass by reference => we use & to pass by reference
    void doSomething(int &num)
    {
        num += 10;
        cout << "Inside function: " << num << endl;
    }
    return 0;
} 