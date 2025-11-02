#include<stdio.h>
int main(){

// ARRAY , EVEN ARRAY, ODD ARRAY!
    int n,count=0,count1=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);

    int scores[n];
    printf("Enter %d numbers to be stored in the array: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&scores[i]);
    }
    
    int even_arr[n],odd_arr[n];

// PUTTING EVEN NUMBER INTO EVEN ARRAY AND ODD ONE INTO ODD ARRAY!
    for(int i=0; i<n; i++){
        if(scores[i]%2==0 ){
            even_arr[count++]=scores[i];
        }
        else{ odd_arr[count1++]=scores[i];
        }
    }

// PRINTING OF ARRAY!
    printf("\nScores: ");
    for(int i=0; i<n; i++){
        printf("%d ",scores[i]);
    }printf("!");

// PRINTING OF EVEN ARRAY!
    printf("\n\nEven Scores: ");
    for(int j=0; j<count; j++){
        printf("%d ",even_arr[j]);
    }printf("!");
        
// PRINTIGN OF ODD ARRAY!
    printf("\nOdd Scores: ");
    for(int j=0; j<count1; j++){
        printf("%d ",odd_arr[j]);
    }printf("!");
    return 0;
}