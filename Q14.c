#include<stdio.h>
int main(){

// PRIME NUMBER IN THE ARRAY!
    int n,count=0,isprime=1,num;
    
    printf("Enter number of values to be stored in array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d values: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n; i++){
        num=arr[i];
        if(arr[i]<=1){isprime=0;}
        else{
            for(int j=2; j*j<=num; j++){
                if(num%j==0){
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime){count++;}
    }
    printf("\nPrime Numbers in the array: %d",count);
    return 0;
}