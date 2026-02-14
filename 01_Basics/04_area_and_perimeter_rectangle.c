// Compute rectangle perimeter and area

// A=wl
// P=2(l+w)

#include<stdio.h>
int main(){

    float width,length;
    printf("Enter a width of rectangle\n");
    scanf("%f",&width);
    printf("Enter a length of rectangle\n");
    scanf("%f",&length);
    printf("Area of Rectangle: %f\n",width*length);
   
    printf("Perimeter of rectangle: %f",2*(length+width));
    return 0;
}
