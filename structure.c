#include<stdio.h>
struct person {
int age;
float height;
};
int main(){
    struct person p;
    p.age=20;
    p.height=5.6;
    printf("age:%d\n", p.age);
    printf("height:%.1f\n", p.height);
}
