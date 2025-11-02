#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c=0,n=0;
    //BINARY TO DECIMAL
    printf("Enter the binary number:");
    scanf("%d", &a);
    while(a!=0){
        b=a%10;
        c+=(float)(b*pow(2,n));
        n++;
        a/=10;

    }
    printf("\n%d", c);
    //DECIMAL TO BINARY
    int e,f,g=0,h=1;
    printf("enter a decimal:");
    scanf("%d",&e);
    while(e>0){
        f=e%2;
        g+=f*h;
        h*=10;
        e/=2;
        
    }
    printf("%d", g);
    return 0;
}