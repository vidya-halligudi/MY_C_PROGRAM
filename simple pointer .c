#include<stdio.h>
int main(){
   int num,*p;
  p=&num;
   printf("value of num=%d\n",num);
   printf("address of num =%p\n",&num);
   printf("pointer p stores=%p\n",p);
   printf("value using pointers=%d\n",*p);
   return 0;
}
