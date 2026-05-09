// its let you create your own type

#include <stdio.h>

enum day {sun,mon,tue,wed,thurs,fri,sat};
// typedef enum day {sun,mon,tue,wed,thurs,fri,sat}; // then we can ponlly use day instead of enum day

void print_day(enum day d){
    switch (d)
    {
    case sun : printf("sunday") ;break;
    case mon : printf("Monday") ;break;
    case tue : printf("Tuesday") ;break;
    case wed : printf("wednesday") ;break;
    case thurs : printf("thursdday") ;break;
    case fri : printf("friday") ;break;
    case sat : printf("saturday") ;break;
    
    default:
    printf("error");
        break;
    }
}

enum day next_day(enum day d){
return (d+1 %7);
}

int main(void){
    enum day today = fri;
    print_day(today);
    printf("\n\n");
    print_day(7);
    printf("\n\n");
    print_day(next_day(today));
    printf("\n\n");


}