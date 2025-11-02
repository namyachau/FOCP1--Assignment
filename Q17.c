#include<stdio.h>
int main(){
    
// DELETING AN ELEMENT AT FRONT, MIDDLE, END OF AN ARRAY!
    
   int n, index;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

// POSTION OF ELEMENT TO DELETE!
    printf("Enter position of number to delete: ", n);
    scanf("%d", &index);

// BEFORE DELETING!
    printf("\nArray before Deletion:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

// AFTER DELETING!
    for(int i=index; i<n; i++) {
        arr[i]=arr[i+1];
    }n--;
    
    printf("\nArray after deletion:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}