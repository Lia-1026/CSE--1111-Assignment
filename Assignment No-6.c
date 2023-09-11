//6.Write a program that determines whether one number is divisible by another by checking the factors.
#include<stdio.h>
int main(){
    int num1,num2,count=1;
    scanf("%d%d",&num1,&num2);
    for(int i=1;i<num1;i++){
        if(num1%i==0){
            if(num2==i)count=0;
        }
    }
    if(count)printf("%d is not divisible by %d \n",num1,num2);
    else printf("%d is divisible by %d \n",num1,num2);
return 0;
}
