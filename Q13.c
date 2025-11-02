#include<stdio.h>
int main(){

// PEAK VALUE IN THE ARRAY!
    int n; 
    printf("Enter number of values in array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d values: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    if(n<=2){
        printf("Peak Value can not be possible!");
    }else{
        printf("Peak Value(s) in the array: \n");
        for(int i=1; i<n-1; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}