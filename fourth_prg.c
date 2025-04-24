#include<stdio.h>
/*int main(){
    int marks[3];
    printf("Enter phy: \n");
    scanf("%d",&marks[0]);
    
    printf("Enter Che: \n");
    scanf("%d",&marks[1]);
    
    printf("Enter math: \n");
    scanf("%d",&marks[2]);
    
    printf("Marks of phy:%d, Marks of che::%d marks of Math:%d\n",marks[0],marks[1],marks[2]);
}*/

/*int main(){
    int age = 22;
    int *ptr = &age;
    printf("Ptr is %u\n",ptr);
    ptr++;
    printf("Ptr is %u\n",ptr);
    ptr--;
    printf("Ptr is %u\n",ptr);
    
    float fage = 100.0;
    float *fptr = &fage;
    printf("fPtr is %u\n",fptr);
    fptr++;
    printf("fPtr is %u\n",fptr);
    fptr--;
    printf("fPtr is %u\n",fptr);
    
    char cage = '*';
    char *cptr = &cage;
    printf("cPtr is %u\n",cptr);
    cptr++;
    printf("cPtr is %u\n",cptr);
    cptr--;
    printf("cPtr is %u\n",cptr);
    
    int ag = 22;
    int _ag =23;
    int *ptra = &ag;
    int *_ptra = &_ag;
    printf("ptra %u _ptra %u Diffrence %u\n",ptra,_ptra,ptra-_ptra);
    _ptra =&ag;
    printf("comparison=%u\n",ptra==_ptra); 
    
    int aadhar[5];
    //input
    int *aptr = &aadhar[0];
    for(int i=0;i<=10;i++){
        printf("%d index : ",i);
        scanf("%d",(aptr+i));
    }
    //output
    for(int i=0;i<=10;i++){
        printf("%d index =%d  array index %d\n ",i,*(ptr+i),aadhar[i]);
    }
    return 0;
}*/
/*void print_numbers(int arr[],int n);
int main(){
    int arr[] = {1,2,5,6,9,7};
    print_numbers(arr,6);
}
void print_numbers(int arr[],int n){
    for(int i=0;i<=n;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}*/
/*int count_odd(int arr[],int n);
int main(){
    int arr[] = {1,2,3,4,5,6};
    printf("%d",count_odd(arr,6));
    return 0;
}

int count_odd(int arr[],int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]%2 != 0){
            count++;
        }
    }
    return count;
}*/
/*int reverse(int arr[],int n);
void print_arr(int arr[],int n);

int main(){
    int arr[] = {1,2,3,4,5};
    reverse(arr,5);
    print_arr(arr,5);
    return 0;
}

void print_arr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("arr[%d] %d\n",i,arr[i]);
    }
}
int reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i] = secondval;
        arr[n-i-1] = firstval;
    }
}*/
// Online C++ compiler to run C++ program online
//#include <iostream>
//using namespace std;
//#include <string>
/*int main() {
    // Write C++ code here
    //int arr[4] = {1,2,3,5};
    int file=100;
    double sales = 9.99;
    std::cout << "Try programiz.pro" ;
    std::cout << file ;
    //std::cout << arr[3];
    return 0;
}*/
/*int main (){
    int a =2,b=5,t;
    t = a;
    a = b;
    b = 2;
    std::cout<< a  << b;
}*/
/*int main (){
  const  double pi=3.14;
    pi =0;
    return 0;
}*/
/*int main (){
  double x= 5;
  double y = 10;
  double z = (x + 10)/(3*y);
  cout << z<<endl;
  
  double value;
  cin >> value;
  cout << value;
    return 0;
}*/
/*class employee {
    public:
    std::string name;
    int salary;
};
class programmer : public employee
{
    public:
    int no_of_tkt;
};
    
}

int main() {
  employee har;
  har.name = "Pard";
  har.salary = 100;
  std::cout <<"The name of emplyee is  " << har.name << "  and his salry is " <<har.salary ;
  return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char **ptr;

    // Allocate memory for 1 pointer (like 1 string)
    ptr = (char **)malloc(sizeof(char *));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Now allocate memory for the actual string
    *ptr = (char *)malloc(100 * sizeof(char));  // space for 100 characters
    if (*ptr == NULL) {
        printf("Memory allocation failed!\n");
        free(ptr);  // Free the outer pointer
        return 1;
    }

    // Assign a string
    snprintf(*ptr, 100, "Hello from a double pointer!");

    // Print the result
    printf("%s\n", *ptr);

    // Free allocated memory
    free(*ptr);
    free(ptr);

    return 0;
}
