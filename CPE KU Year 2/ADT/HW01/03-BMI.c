#include<stdio.h>
int main(){
    double h,w,bmi;
    scanf("%lf %lf",&w,&h);
    h /= 100;
    bmi = w / ( h * h );
    printf("BMI: %.4lf and you are ",bmi);
    if(bmi >= 30)           printf("obese");
    else if(bmi >= 25)      printf("overweight");
    else if(bmi >= 18.6)    printf("healthy");
    else                    printf("underweight");
    return 0;
}