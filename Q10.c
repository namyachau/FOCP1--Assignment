#include<stdio.h>
int main(){

// COUNTING NO. OF STUDENTS GOT 99 SCORE!
    int stdnum,count=0;
    
// NUMBER OF STUDENTS!
    printf("Enter number of students: ");
    scanf("%d",&stdnum);

    int arr[stdnum];

// MARKS OF STUDENT!
    for(int i=0; i<stdnum; i++){
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&arr[i]);

    }
    for(int i=0; i<stdnum; i++){
        if(arr[i]==99){
            count++;}
    }
    printf("\nNumber of students who scored 99 marks: %d students\n",count);

    for(int i=0; i<stdnum; i++){
        if(arr[i]==99){
            printf("\nStudent %d scored 99 marks!\n",i+1);
        }
    }
    
    return 0;
}