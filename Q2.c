#include<stdio.h>
int main(){
    int a,b,hcf,s;
    printf("Enter num1=");
    scanf("%d", &a);
    printf("Enter num2=");
    scanf("%d", &b);
    if(a>=b){
        s=a;
    }
    else{s=b;}
    for(int i=1; i<=s; i++){
        if(a%i==0 && b%i==0){
            if(i>hcf){
                hcf=i;
            }
        }
    }
    printf("HCF:%d", hcf);
    return 0;
}