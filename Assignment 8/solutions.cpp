#include<iostream>
using namespace std;


// class Complex{
//     int imaginary = 0;
//     int real = 0;
//     public:
//         void setComplex(int x,int y);
//         void showComplex();
    

// };
// void Complex::setComplex(int x, int y){
//     real = x;
//     imaginary = y;

// }

// void Complex :: showComplex(){
//     cout<<real<<"+"<<imaginary<<"j"<<endl;
// }

class Time{

    int hr = 0;
    int min = 0;
    int sec = 0;

    public:
        void setTime(int h,int m,int s){
            if (h>= 0 && h<25)
                hr = h;
            if (m >= 0 && m <61)
                min = m;
            if (sec >= 0 && sec <61)  
                sec  = s;

        }
        void showTime(){
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }

};
int main (){

    // Complex c1;
    Time t1;
    // c1.setComplex(5,3);
    // c1.showComplex();
    t1.setTime(4,15,55);
    t1.showTime();

    return 0;
}