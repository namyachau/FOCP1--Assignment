#include<stdio.h>
int main(){

// DUPLICATES IN ARRAY!
    int n,duplicate=1,a; 
    printf("Enter number of values in the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d values: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Duplicates in the Array: ");
    for(int i=0; i<n; i++){

// CHECKING THE NUMBER IF ALREADY PRINTED!
        int alrdyPrt = 0;
        for(int k = 0; k < i; k++){
            if(arr[k] == arr[i]) {
                alrdyPrt = 1;
                break;
            }
        }
// CHECKING DUPLICATE NUMBER!
        if(alrdyPrt==1) continue;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                duplicate=0;
                break;
            }
        }
    }
    
// IF NO DUPLICATE FOUND!
    if(duplicate==1)printf("-1");
    return 0;
}