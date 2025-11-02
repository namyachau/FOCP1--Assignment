#include<stdio.h>
int main(){

// QUADRANT OF A POINT!
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);

    printf("Enter value of y: ");
    scanf("%d",&y);

    if(x==0 && y==0){
        printf("Point is at origin!");
    }

    if(x==0 && (y<0 || y>0)){
        printf("Point (%d,%d) is on y-axis!",x,y);
    }
    if((x<0 || x>0) && y==0){
        printf("Point (%d,%d) is on x-axis!",x,y);
    }

    if(x!=0 && y!=0){
        printf("Point (%d,%d) lies in ",x,y);
        if(x>0 && y>0)printf("quadrant 1!");
        if(x<0 && y>0)printf("quadrant 2!");
        if(x<0 && y<0)printf("quadrant 3!");
        if(x>0 && y<0)printf("quadrant 4!");
    }
    return 0;
}