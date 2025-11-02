#include<stdio.h>
int main(){
    
// PRINTING BINARY PATTERN!

// PRINTING ROWS EXCEPT LAST!
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%d",(j+1)%2);
        }
// MAINTAINING SPACE!
        if(i!=5){
            for(int spc=1; spc<2*(5-i)+1; spc++){
                printf(" ");
            }
            for(int j=1; j<=i; j++){
                printf("%d",(j+1)%2);
            }
        }
// PRINTING LAST ROW!
        else{
            for(int j=i+1; j<=2*i-1; j++){
                printf("%d",(j+1)%2);
            }
        }
        printf("\n");
    }
    return 0;
}