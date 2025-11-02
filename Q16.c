#include<stdio.h>
int main(){
    
// INSERTING AN ELEMENT AT FRONT, MIDDLE, END OF AN ARRAY!
    
   int n, index, value;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[100]; 

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

// VALUE TO INSERT!
    printf("Enter value to insert: ");
    scanf("%d", &value);

// POSTION TO INSERT THE VALUE!
    printf("Enter position to insert (0 = front, %d = end, or any index): ", n);
    scanf("%d", &index);

// BEFORE INSERTION!
    printf("\nArray before insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

// AFTER INSERTION!
    for(int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    n++;

    printf("\nArray after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}