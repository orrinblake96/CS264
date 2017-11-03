#include <iostream>
#include "MyComplex.h"

using namespace std;

int main() {
    double real;
    double image;

    //User input for 1st complex num
    cout << "Enter a real number for 1st complex number: " << endl;
    cin >> real;
    cout << "Enter an imaginary number for 1st complex number: " << endl;
    cin >> image;

    //create 1st complex num using set
    MyComplex ComplexNum1(real, image);
    ComplexNum1.setReal(real);
    ComplexNum1.setImage(image);

    //display the 1st complex number using get
    ComplexNum1.getReal();
    ComplexNum1.getImage();
    cout << "1st complex number: ";
    ComplexNum1.print();


    //User input for 2nd complex num
    cout << "Enter a real number for 2nd complex number: " << endl;
    cin >> real;
    cout << "Enter an imaginary number for 2nd complex number: " << endl;
    cin >> image;

    //create 2nd complex num
    MyComplex ComplexNum2(real, image);
    ComplexNum2.setReal(real);
    ComplexNum2.setImage(image);

    //display the 2nd complex number using get
    ComplexNum2.getReal();
    ComplexNum2.getImage();
    cout << "2nd complex number: ";
    ComplexNum2.print();

    cout << endl;
    //add complex nums, when using operator overloading just use normal addition.
    MyComplex addition;
    addition = ComplexNum1 + ComplexNum2;
    cout << "Addition of numbers: ";
    addition.print();

    //sub complex nums, when using operator overloading just use normal subtraction.
    MyComplex subtraction;
    subtraction = ComplexNum1 - ComplexNum2;
    cout << "Subtraction of numbers: ";
    subtraction.print();

    //mul complex nums, when using operator overloading just use normal multiplication.
    MyComplex multiply;
    multiply = ComplexNum1 * ComplexNum2;
    cout << "Multiplication of numbers: ";
    multiply.print();


}
