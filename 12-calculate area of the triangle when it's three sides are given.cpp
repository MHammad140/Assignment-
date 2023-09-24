#include<iostream>
using namespace std;

int main()
{
    double a, b, c;
    
    cout << "Enter the length of side A: ";
    cin >> a;
    
    cout << "Enter the length of side B: ";
    cin >> b;
    
    cout << "Enter the length of side C: ";
    cin >> c;
    
    // Calculate the semi-perimeter (s)
    double s = (a + b + c) / 2.0;
    
    // Calculate the area directly
    double area = √(s * (s - a) * (s - b) * (s - c));
    
    cout << "Area of the triangle: " << area << endl;

    return 0;
}