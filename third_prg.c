#include<stdio.h>
#include<math.h>

/*void print_namaste(){
    printf("namaste \n");
}
void print_bjr(){
    printf("Bonjour \n");
}

int sum(int a,int b){
    return a+b;
}


int main(){
    char ch;
    printf("Enter nationality\n");
    scanf("%s",&ch);
    if(ch=='I'){
    print_namaste();}
    else {
    print_bjr();}
    return 0;
    
    sum(5,8);
}*/

/*int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    //Address
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    printf("%p\n",&age);
    printf("%u\n",ptr);
    printf("%p\n",&ptr);
}*/

/*int main(){
    int x ;
    int *ptr;
    ptr = &x;
    *ptr = 0;
    
    printf("%d\n",x);
    printf("%d\n",*ptr);
    
    *ptr+=5;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    
    (*ptr)++;
    printf("%d\n",x);
    printf("%d\n",*ptr);
}*/

/*int main() {
    float price = 100.0;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f\n",**pptr);
}*/

/*void square(int n);
void _square(int* n);

int main() {
    int number = 4;
    square(number);
    printf("Number is %d\n",number);
    _square(&number);
    printf("Number is %d\n",number);
    
}
//Call by value
void square(int n) {
    n = n*n;
    printf("Square is %d\n",n);
}
//
void _square(int* n) {
    *n = (*n)*(*n);
    printf("Square is %d\n",*n);
}*/

/*void swap(int a,int b);
void _swap(int *a,int *b);
int main() {
    int x = 3;
    int y = 5;
    swap(3,5);
    printf("x: %d y: %d\n",x,y);
    _swap(&x,&y);
    printf("x: %d y: %d\n",x,y);
    
}

void swap(int a,int b) {
    int t = a;
     a = b;
     b = t;
     printf("a: %d b: %d\n",a,b);
}
void _swap(int* a,int* b) {
    int t = *a;
     *a = *b;
     *b = t;
     printf("a: %d b: %d\n",*a,*b);
}*/

/*void print_address(int n);
void _print_address(int * n);
int main(){
    int  n = 4;
    print_address(n);
    printf("Address of n is %u\n",&n);
     _print_address(&n);
    printf("Ref Address of n is %u\n",&n);
}

void print_address(int n){
    printf("Address is %u\n",&n);
}

void _print_address(int* n){
    printf("Ref Address is %u\n",n);
}*/

void sum_avg(int a,int b,int *sum,int*prod,int *avg);
int main() {
    int a = 2;
    int b = 3;
    int sum,avg,prod;
    sum_avg(a,b,&sum,&prod,&avg);
    printf("Sum is %d Prod is %d Avg is %d",sum,prod,avg);
    
}
void sum_avg(int a,int b, int *sum,int*prod,int*avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}
