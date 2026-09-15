/* Write a program to print the following pattern:     5\n   45\n  345\n 2345\n12345 */
#include <stdio.h>
int main(void){for(int r=5;r>=1;r--){for(int s=1;s<r;s++)putchar(' ');for(int c=r;c<=5;c++)printf("%d",c);putchar('\n');}return 0;}
