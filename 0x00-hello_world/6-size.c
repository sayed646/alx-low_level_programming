#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 int main(void){
 int a;
 long int x;
 long long int y;
 char h;
 float d;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
} 
