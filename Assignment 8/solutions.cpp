#include<iostream>
using namespace std;


class Complex{
    int imaginary = 0;
    int real = 0;
    public:
        void setComplex(int x,int y);
        void showComplex();
    

};
void Complex::setComplex(int x, int y){
    real = x;
    imaginary = y;

}

void Complex :: showComplex(){
    cout<<real<<"+"<<imaginary<<"j"<<endl;
}
int main (){

    Complex c1;
    c1.setComplex(5,3);
    c1.showComplex();


    return 0;
}