#include<stdio.h>
int sicalculator(){
    int p,t,r,si;
    printf("enter your principle amount\n");
    scanf("%d",&p);
    printf("enter no of years\n");
    scanf("%d",&t);
    printf("enter rate of interest\n");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("%d",si);
}
int main()  {
    sicalculator();
}
