//9.Write a program to find and display common factors of two numbers.
#include<stdio.h>
int main(){
    int num1,num2,count=0;
    scanf("%d%d",&num1,&num2);
    printf("Common factors are:");
    for(int i=1;i<num1;i++){
        if(num1%i==0 && num2%i==0){
            printf("%d",i);
            count++;
        }
    }
    printf("\nNumber of common factors are:%d\n",count);
return 0;
}
