#include<stdio.h>
#include<math.h>
int main() {
    int b , c, num,age,day,n,wh,do_wh,sum,sum_n,odd,fact;
    char day_c,ch;
    b = c = 2;
    int a = b+c;
    int power = pow(b,c);
    printf("Power is %d \n",power);
    printf("Power module of 3 is %d\n",power%3);
    printf("5*2-2*3 %d  5*2/2*3 %d 5*(2/2)*3 %d  5+2/2*3 %d \n",5*2-2*3,5*2/2*3,5*(2/2)*3,5+2/2*3);
    printf("Enter number to be checked for divide by 2: \n");
    scanf("%d",&num);
    printf("Number is divisble by 2 %d \n",num%2==0);
    
    printf("Enter age : \n");
    scanf("%d",&age);
    if (age>=18){
        printf("can vote\n");
    }
    else {
        printf("No right age to vote \n");
    }
    age >=18 ? printf("Condtion can vote\n") : printf("Condtion can not vote\n");
    
    printf("Enter the day 1-7 \n");
    scanf("%d",&day);
    switch(day){
    case 1: printf("Day is Monday\n");
            break;
    case 2: printf("Day is Tuesday\n");
            break;
    case 3: printf("Day is Wednesday\n");
            break;
    case 4: printf("Day is Thursday\n");
            break;
    case 5: printf("Day is Friday\n");
            break;
    case 6: printf("Day is Saturday\n");
            break;
    case 7: printf("Day is Sunday\n");
            break;
    default: printf("Day is Invalid\n");
    }
    printf("Enter the day M_S \n");
    scanf("%s",&day_c);
    switch(day_c) {
    case 'M': printf("Day is Monday\n");
            break;
    case 'T': printf("Day is Tuesday\n");
            break;
    case 'W': printf("Day is Wednesday\n");
            break;
    case 'Th': printf("Day is Thursday\n");
            break;
    case 'F': printf("Day is Friday\n");
            break;
    case 'S': printf("Day is Saturday\n");
            break;
    case 'Su': printf("Day is Sunday\n");
            break;
    default: printf("Day is Invalid\n");
    }
    
    printf("Enter Charcater \n");
    scanf("%s",&ch);
    if(ch>= 'A' && ch <= 'Z') {
        printf("Its Uppercase \n");
    }
    else if(ch>= 'a' && ch <= 'z') {
        printf("Its Lowercase \n");
    }
    else {
        printf("Not english Alphabet \n");
    }
    
    for(int i = 0;i<=10;i++){
        printf("no is %d \n",i);
    }
    
    printf("Enter value for while to be printed\n");
    scanf("%d",&n);
    wh = 0;
    while(wh<=n){
        printf("wh is %d\n",wh);
        wh++;
    }
    
    do_wh = 0;
    do {
        printf("do_wh %d\n",do_wh);
        do_wh++;
    } while (do_wh<5);
    
    printf("Enter numbers to be added\n");
    scanf("%d",&sum_n);
    sum = 0;
    for(int i=1;i<=sum_n;i++){
        sum = sum+i;
    }
    printf("Sum of first %d natural numbers is %d",sum_n,sum);
    for(int i=sum_n;i>=1;i--){
        printf("Rverse i is %d \n",i);
    }
    
    for(int i = 1;i<=10;i++){
        printf("%d\n",56*i);
    }
    
    do {
        printf("Enter number to be checked\n");
        scanf("%d",&odd);
        if(odd %2 != 0){
            break;
        }
    } while(1);
    printf("Odd number is received %d ",odd);
    
    for(int i = 0;i<=5;i++){
        if(i==3){
            continue;
        }
        printf("number is %d\n",i);
    }
    fact = 1;
    for(int i=1;i<=5;i++){
        fact = fact*i;
        printf("Factorial of %d is %d\n",i,fact);
    }
    return 0;
    
}
