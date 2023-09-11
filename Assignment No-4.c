//4.Find pairs of amicable number (two numbers whose factors sum to each other).
#include<stdio.h>
int main(){
    int number1,number2,sum1=0,sum2=0;
    scanf("%d%d",&number1,&number2);
    for(int i=1;i<number1;i++){
        if(number1%i==0)sum1+=i;
    }
    for(int i=1;i<number2;i++){
        if(number2%i==0)sum2+=i;
    }
    if(sum1==number2 && sum2==number1)printf("Amicable\n");
    else printf("Not Amicable\n");
return 0;
}

