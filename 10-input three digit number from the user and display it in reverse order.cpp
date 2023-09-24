#include<iostream>
using namespace std;

int main()
{
    
     int number;
    
    cout << "Enter a three-digit number: ";
    cin >> number;
    
    int reverseNumber = 0;
    
    while (number > 0)
    
    {
        reverseNumber = reverseNumber * 10 + number % 10;
        number /= 10;
    }
    
    cout << "Reversed number: " << reverseNumber << endl;

    return 0;
}