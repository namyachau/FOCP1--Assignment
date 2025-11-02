#include<stdio.h>
int main(){

// CHECKING OCCURENCE OF SCORE 99!

// 2D ARRAY-->
    int n,m;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    printf("Enter number of columns: ");
    scanf("%d",&m);

    int arr[n][m];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf("Enter %d,%d element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i][j]==99){
                printf("99 occurs at %d,%d in the array\n",i,j);
            }
        }
    }

// 1D ARRAY -->

    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]==99){
            printf("99 occurs at %d in the array\n",i);
        }
    }
    return 0;
}