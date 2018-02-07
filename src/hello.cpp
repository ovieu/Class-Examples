#include <iostream>
#include "console.h"
using namespace std;

//  the forward declaration of the cylinder
//  volume method
double cylinderVolume(double r, double h);
void printLine(int width = 10, char letter = '*');

//  swap example
void swap(int& a, int& b);

//  display swap values
void displaySwapValues(int x, int y);

int main() {
    int x = 17;
    int y = 35;

    cout << "before the swap" << endl;
    displaySwapValues(x, y);

    cout << "after the swap" << endl;
    swap(x, y);
    displaySwapValues(x, y);

    return 0;
}

//  the actual implementation of the method
double cylinderVolume(double r, double h) {
    return 3.143 * r * r * h;
}

//  the implemenation of the printLine method
void printLine(int width, char letter) {
    for (int i = 0; i < width; i++) {
        cout << letter;
    }
}

//  shows how swap works with reference semantics in
//  c++
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void displaySwapValues(int x, int y) {
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
}
