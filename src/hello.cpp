#include <iostream>
#include "console.h"
using namespace std;

//  the forward declaration of the cylinder
//  volume method
double cylinderVolume(double r, double h);
void printLine(int width = 10, char letter = '*');

int main() {
    printLine(7, '?');
    cout << endl;
    printLine(5);
    cout << endl;
    printLine();
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
