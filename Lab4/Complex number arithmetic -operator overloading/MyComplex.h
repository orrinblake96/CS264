class MyComplex {
protected:
    double real;
    double image;
public:
    void setReal(double);
    void setImage(double);
    double getReal();
    double getImage();
    MyComplex();
    MyComplex(double, double);

    //operator+/-/*() is a new locally declared instance that holds the result of the operation.
    MyComplex operator+(const MyComplex &z);
    MyComplex operator-(const MyComplex &z);
    MyComplex operator*(const MyComplex &z);
    void print();
};
