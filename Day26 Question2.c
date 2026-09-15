/* Write a program to print the following grouped star pattern: *, ***, *****, ***, *. */
#include <stdio.h>
int main(void){int rows[]={1,3,5,3,1};for(int r=0;r<5;r++){for(int c=0;c<rows[r];c++)putchar('*');putchar('\n');}return 0;}
