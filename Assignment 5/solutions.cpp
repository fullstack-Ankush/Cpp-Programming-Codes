#include<iostream>
using namespace std;

void swapNumbers(int &x, int &y);
int add(int a = 0,int b = 0);


int main(){


    
}
// solution 1

void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// solution 2

int add(int a = 0,int b = 0){
    return a + b;

}

// solution 3
float area(float radius ){
    return 3.14 * radius * radius; 
}

float area(float length , float breath){
    return length * breath;
}

float area(int base , int height ){
    return 0.5 * base * height ;
}

// solution 4
void maximum(int a, int b){
    if (a>b){
        cout <<a<<endl;

    }
    else{
        cout << b<< endl;
    }
}

void mximum(float a, float b){
    if (a>b){
        cout << a<<endl;

    }
    else{
        cout << b<< endl;
    }
}

// solution 5
