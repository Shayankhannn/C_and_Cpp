// #include<stdio.h>
// #define PI 3.14159
// int main(void)
// { 
//  double radius;
//  printf("Enter radius:");
//  scanf("%lf", &radius);
// printf("volume is : %lf \n\n",  (4/3.0) *PI  *radius*radius*radius  );
// return 0;
// }

#include <stdio.h>
#define PI 3.14159

int main(void)
{
    double radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    double volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("volume is : %lf\n\n", volume);

    return 0;
}