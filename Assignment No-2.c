//Determine whether a number is abundant (the sum of its factors is greater than the number itself).
#include<stdio.h>
int main(){
    int number ,sum=0;
    scanf("%d",&number);
    for(int i=1;i<number;i++){
        if(number%i==0)sum+=i;
    }
    if(sum>number)printf("Abundant\n");
    else printf("Not Abundant\n");
return 0;
}
