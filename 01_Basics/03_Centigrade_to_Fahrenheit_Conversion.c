
// Centigrade to Fahrenheit Conversion
// tip : Formula >> (0°C × 9/5) + 32 = 32°F

#include<stdio.h>
int main(){
    int Degree;
    printf("Enter a Degree Celsius ");
    scanf("%d",&Degree);
    float Temp = (Degree*9/5) + 32;

    printf("Fahrenheit = %f",Temp);


    return 0;
}