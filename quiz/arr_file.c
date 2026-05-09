/*
this code purpose is to read large n umber of data and compute its sum and give average
*/

#include <stdio.h>

void average(int sum,int total)
{
  double avg = (double)sum/total;   // type casting to double so it return correct value

    printf("average is %.2lf",avg);

}

int main(void)
{
    FILE *fp; // file type || a connection or address to opened file
    int num , sum = 0,count=0;
    fp = fopen("elephent_data.txt","r");
       if (fp == NULL) // check if file is opening
        return printf("error file opening");

    while (fscanf(fp,"%d",&num) ==1) // check and reaad one value at a time till end of the file
    {   
        sum+=num; // gives sum
        count++; // gives total elements in the file
    }

    average(sum,count);
    fclose(fp);

    


}