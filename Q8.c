#include<stdio.h>
int main(){

// FIBONACCI SERIES!
    int n,a=0,b=1,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    printf("Fibonacci Series till %d: \n",n);
    while(a<=n){
        printf("%d ",a);
        c = a + b; 
        a = b;
        b = c;
    }
    return 0;
}
