#include<stdio.h>
void main(){
    int n,i=2,flag=0;
    printf("enter the number\n",n);
    scanf("%d",&n);
    while(i<n)
    {
       if(n%i==0){
        flag=1;
        break;
       }
       i++;
    }
       if(flag==0){
        printf("number is prime");
       }
       else{
        printf("number is not prime");
       }
    }
