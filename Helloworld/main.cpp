//
//  main.cpp
//  Helloworld
//
//  Created by sebas ho on 1/17/25.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Comments" << "\n";
    
// Next Section(VARIABLES)
    
    int myNum = 15;
    double myFloatNum = 5.99;
    char myLetter = 'D';
    string myText = "Hello";
    bool myBoolean = true;

    cout << myNum << myFloatNum << myLetter << myText << "\n";

// Next Section(CONSTANTS)
    const int myNumber = 15; // with the "const" the variable will remain unchangeable.

// Calculate the are of the rectangle
    
    int length = 5;
    int width = 6;
    int area;
    
area = length * width;
    
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n";

// User Input(CIN >> )
    
    int x;
    cout << "Typea number: ";
    cin >> x;
    cout << "Your number is: " << x << "\n";
    
// 
    return 0;
}
//
// Multiline comments start with /* and ends with */


