#include<stdio.h>
struct book{
    char title[50];
    char authour[50];
    int year;
};
int main(){
    int n,i;
    printf("enter number of books:");
    scanf("%d",&n);
    struct book l[n];
    for(i=0;i<n;i++){
        printf("title,authour,year%d\n",i+1);
        scanf("%s %s %d",l[i].title,l[i].authour,&l[i].year);
        printf("%s %s %d",l[i].title,l[i].authour,l[i].year);
    }
}
