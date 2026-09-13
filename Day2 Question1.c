
 #include<stdio.h>
int main() {
    float length , breadth, area , perimeter;
    printf("enter the length of rectangle:");
    scanf("%f", &length);
    printf(" enter the breadth of the rectangle:");
    scanf("%f", &breadth);
    area= length * breadth;
    perimeter= 2*(length+breadth);
    printf(" area of the rectangle : %f\n",area);
    printf(" perimeter of the rectangle : %f\n",perimeter);
    return 0;
}
 
 
 
 
