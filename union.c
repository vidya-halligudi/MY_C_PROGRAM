#include <stdio.h>
int main() {
     union vidya{
        int age;
        float mark;
    };
    union vidya v;
    v.age=10;
    printf("%d\n",v.age);
    v.mark=10.7;
    printf("%f\n",v.mark);
}
