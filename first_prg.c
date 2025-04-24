#include <stdio.h>
int main()
{
  int age = 25;
  int side,radius ;
  char star = '*';
  float pi = 3.14;
    printf("age is %d star is %c pi is %f\n",age,star,pi);
    scanf("%d",&age);
    printf("New age is :%d \n",age);
    printf("Enter side\n");
    scanf("%d",&side );
    printf("Area is %d \n",side*side);
    printf("Enter Radius of circle\n");
    scanf("%d",&radius );
    printf("Area of circle is  %f",3.14*side*side);
    return 0;
    
}
