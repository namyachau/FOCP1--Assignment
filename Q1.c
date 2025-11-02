#include<stdio.h>
#include<math.h>
int main(){
    int a, n=0;
    printf("Enter a number = ");
    scanf("%d", &a);
    int b=a;
    while(b != 0){
        b/=10;
        n++;
    }
    printf("Total digits = %d", n); //digits
    int c,d=0,m=0;
    b=a;
    while(b!=0){
        c = b%10;
        d += (int)(pow(c,n)+0.3);
        b/=10;
        m++;
    }
    printf("\n%d", d);
    if(d==a){
        printf("\nIs an armstrong no.");
    }
    else{
        printf("\nNot an armstrong no.");
    }
    return 0;
}