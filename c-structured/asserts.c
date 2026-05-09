#define NDEBUG // make assert get ignore 
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

// assert are only for programmers
//check if something is true while program runs
int main(void)
{
    int age = -5;

    assert(age >= 0);

    printf("Age is valid");

    return 0;
}