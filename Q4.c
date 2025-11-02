#include<stdio.h>
int main(){
    
    
// SWAPPING OF TWO NUMBERS!
    int a,b,temp; 
    printf("Enter frist numbers: \n");
    scanf("%d",&a);
    printf("Enter second numbers: \n");
    scanf("%d",&b);

    printf("Original numbers:\nA=%d\tB=%d\n",a,b);
    printf("After Swapping\n");

// USING TEMP VARIABLE!
    temp=a; 
    a=b; 
    b=temp;
    printf("\nUsing Temp Variable: A=%d  B=%d!",a,b);
    
// USING POINTER MANIPULATION!
    int* aPtr=&b;
    int* bPtr=&a;
    printf("\nUsing Pointer Manipulation: A=%d  B=%d!",*bPtr,*aPtr);
    
// USING ARITHMETIC OPERATORS!
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nUsing Arithmetic Operator: A=%d  B=%d!",b,a);

// USING BITWISE XOR
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nUsing Bitwise Xor: A=%d  B=%d!",a,b);

   
    return 0;
}