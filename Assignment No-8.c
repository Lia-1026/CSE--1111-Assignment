//8.Write a program to check if a number is perfect (equal to the sum of its factors excluding itself).
#include<stdio.h>
int main(){
    int number,sum=0;
    scanf("%d",&number);
    for(int i=1;i<number;i++){
        if(number %i==0)sum+=i;
    }
    if(sum==number)printf("Perfect\n");
    else printf("Not Perfect\n");
return 0;
}
