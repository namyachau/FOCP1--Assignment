#include<stdio.h>
int main(){

// MAXIMUM & MINIMUM VALUE IN THE ARRAY!
    int n;
    printf("Enter number of values in array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d values: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int min,max;
    min=arr[0];
    max=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("Maximum value: %d\n",max);
    printf("Minimum value: %d",min);

    return 0;
}