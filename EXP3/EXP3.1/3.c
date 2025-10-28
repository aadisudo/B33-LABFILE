// WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>
#include <limits.h>


int main() {
    int x1, x2, x3, y1, y2, y3;


    printf("The value of x1,y1:");
    scanf("%d %d",&x1,&y1);


    printf("The value of x2,y2:");
    scanf("%d %d",&x2,&y2);
   
    printf("The value of x3,y3:");
    scanf("%d %d",&x3,&y3);


    int area=0.5*( x1*(y2-y3)+ x2*(y3-y1)+ x3*(y1-y2));// Formula to calculate collinear points
    if(area==0) // statement says that is area of triangle formed by three points must be 0
    {
        printf("The points are collinear");
    }
    else
     {
        printf("The points are not collinear");
    }
   
    return 0;
}
