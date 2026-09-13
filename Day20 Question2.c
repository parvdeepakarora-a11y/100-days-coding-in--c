
#include <stdio.h>
int main(){
    int a,b,c=1,d=0,n=0;
    printf("enter a binary number= ");
    scanf("%d",&a);
    while(a>0){
        b=a%10;
        if(b!=1 && b!=0){
            n=1;
            break;
        }
        if(b==1){
            b=0;   
        }
        else{
            b=1;
        }
        d=d+(b*c);
        c*=10;
        a/=10;
    }
    if(n==1)
    printf("not a valid binary number, try again\n");
    else
    printf("complement of given binary number= %d",d);
    return 0;  
}