#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int balance1,balance2;
    printf("enter balance for account 1:");
    scanf("%d",&balance1);
    printf("\n Before swaping:\n");
    printf("account 1 balance:%d\n",balance1);
     printf("account 2 balance:%d\n",balance2);
     swap(&balance1,&balance2);
      printf("\n after swaping:\n");
      printf("account 1 balance:%d\n",balance1);
     printf("account 2 balance:%d\n",balance2);
    
}
