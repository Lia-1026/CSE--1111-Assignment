//7.Write a program to calculate the sum of all the factors of a given number.
#include<stdio.h>
int main(){
    int number1,sum=0;
    scanf("%d",&number1);
    for(int i=1;i<=number1;i++){
        if (number1%i==0)sum+=i;
    }
    printf("Sum of factors:%d\n",sum);
return 0;
}

