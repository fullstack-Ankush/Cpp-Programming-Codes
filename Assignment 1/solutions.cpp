#include<stdio.h>

// int main(){
//     int x;
//     printf("Enter the number : ");
//     scanf("%d ",&x);

//     if (x%2 == 0){
//         printf("Even Number");
//     }
//     else{
//         printf("Odd Number");
//     }
//     // printf("\n");

// }

int factorial(int n ){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n-1);
}


int main(){
       
}