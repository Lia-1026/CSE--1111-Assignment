//5.Write a program that checks if a given number is prime or not by finding its factors.
#include<stdio.h>
int main(){
    int number,count=0;
    scanf("%d",&number);
    for(int i=2;i<number;i++){
        if(number%i==0)count++;
    }
    if(count)printf("Not Prime\n");
    else printf("Prime\n");
return 0;
}
