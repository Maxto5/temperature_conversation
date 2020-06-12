#include <stdio.h>
int main()
{
//intro
printf("A simple C program to list temperature convertion\n from fahrenheit to celsius in descending order\n");

//variable declarations
int upper,lower,step;
int fahr,celsius;

//variable initialisation
lower =0;
upper=200;
step=20;

fahr=upper;

printf("fahrenheit\t celcius\n");

//decision-making and loop
while(fahr>=lower){
celsius= 5 * (fahr-32) /9;
printf("%d\t\t%d\n",fahr,celsius);
fahr=fahr-step;
}

}
