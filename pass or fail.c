#include<stdio.h>
int ispassed(int m1,int m2,int m3)
{
    if(m1>=40 && m2>=40 && m3>40)
    return 1;
    else return 0;
}
int main(){
    int subject1,subject2,subject3;
    float average;
    printf("enter marks for subject 1:");
    scanf("%d",&subject1);
    printf("enter marks for subject 2:");
    scanf("%d",&subject2);
     printf("enter marks for subject32:");
    scanf("%d",&subject3);
    average=(subject1+subject2+subject3)/3.0;
    printf("average marks:%.2f\n",average);
    if (ispassed(subject1,subject2,subject3))
    printf("Result:PASS\n");
    else
    printf("Result:FAIL\n");
    
}
