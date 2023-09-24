#include<iostream>
using namespace std;

int main()
{
    
    double miles, kilometers;
    
    cout << "Enter miles: ";
    cin >> miles;
    
    kilometers = miles * 1.609;
    
    cout << "Kilometers: " << kilometers << endl;

    return 0;
}