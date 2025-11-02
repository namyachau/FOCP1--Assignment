#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d %d", &a,&b);
    c=a+(~b+1);
    printf("Ans:%d", c);
    return 0;
}