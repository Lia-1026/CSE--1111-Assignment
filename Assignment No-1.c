//1.Calculate the count of divisors for given number.
#include<stdio.h>
int main(){
    int number,count=0;
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        if(number%i==0)count++;
    }
    printf("Divisors:%d\n",count);
return 0;
}
