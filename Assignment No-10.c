//10.Write a program to find highly composite numbers(numbers with more factors than others).

#include<stdio.h>
int main(){
    int number ,count=0,check=1;
    scanf("%d",&number);
    for(int i=1;i<number;i++){
        if(number%i==0)count++;
    }
    for(int i=1;i<number;i++){
        int tag=0;
        for(int j=1;j<i;j++){
            if(i%j==0)tag++;
        }
        if(tag>=count){
            check=0;
            break;
        }
    }
    if(check)printf("Highly composite Number\n");
    else printf("Not Highly composite Number\n");
return 0;
}
