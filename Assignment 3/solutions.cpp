#include<iostream>
using namespace std;

int main(){
    // solution 1
    // int a,b,c;

    // cin>>a>>b>>c;
    // int avg = (a+b+c)/3;
    // cout<<avg;

    // solution 2
    // int n;
    // cin>>n;
    // cout<<n*n;

    // // solution 3
    // int x = 5,y = 7;
    // x = x + y ;
    // y = x - y;
    // x = x - y;

    // solution 4
    // int x = 5,y =7;
    // if (x>y)
    //     cout<<x<<"is greater"<<endl;
    // else
    //     cout<<y<<"is greater"<<endl;

    // solution 5
    int sum = 0;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0;i<10;i++){
        sum += a[i];
    }
    cout<<sum<<endl;
    

}