#include <stdio.h>
#include <math.h>
#include "point.h"


double distance (Point p1, Point p2){
    double distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}

int main(){
    Point p1;
    printf("Enter the cordinates of the first point [x y]:");
    scanf("%d",&p1.x);
    scanf("%d",&p1.y);

    Point p2;
    printf("Enter the cordinates of the second point [x y]:");
    scanf("%d",&p2.x);
    scanf("%d",&p2.y);

    double dis = distance(p1,p2);
    printf("Distance between these two points is : %.2f",dis);
}
