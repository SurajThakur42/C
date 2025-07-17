// Option  A

#include<stdio.h>
int main(){
    int length,breadth;
    length = 3;
    breadth = 4;
    printf("The area of this rectangle is %d",(length*breadth));
    return 0;
}


// Option B

#include<stdio.h>
int main(){
    int length,breadth;
    printf("Length of the rectangle :");
    scanf("%d",&length);
    printf("Breadth of the rectangle :");
    scanf("%d",&breadth);
    printf("Area of the rectangle is %d",(length*breadth));
    return 0;
}
