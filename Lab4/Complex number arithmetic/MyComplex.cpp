#include <iostream>
#include "MyComplex.h"

using namespace std;

//default constructor which initialises both a and b to be set equal to zero.
MyComplex::MyComplex() {
    real = 0;
    image = 0;
}

//constructor function that enables an object of this
// class to be initialised when it is declared.
MyComplex::MyComplex(double a, double b) {
    real = a;
    image = b;
}

//Getter and Setter methods for both the real and imaginary components
void MyComplex::setReal(double r) {
    real = r;
}

void MyComplex::setImage(double i) {
    image = i;
}

double MyComplex::getReal() {
    return real;
}

double MyComplex::getImage() {
    return image;
}

//Addition of two MyComplex numbers
MyComplex MyComplex::Add(const MyComplex &z){
    double r = real + z.real;
    double i = image + z.image;

    return MyComplex(r, i);
}

//Subtraction of two MyComplex numbers
MyComplex MyComplex::Subtraction(const MyComplex &z){
    double r = real - z.real;
    double i = image - z.image;
    return MyComplex(r, i);
}

//Multiplication of two MyComplex numbers
MyComplex MyComplex::Multiply(const MyComplex &z){
    double r = ((real)*(z.real)) - ((image)*(z.image));
    double i = ((real)*(z.image)) + ((image)*(z.real));
    return MyComplex(r, i);
}

//print function to output a complex number
// to the screen in the following format: “2 + 4i”
void MyComplex::print() {
    cout << real << " + " << image << "i" << endl;
}
