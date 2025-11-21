#include<stdio.h>
#include<stdlib.h>
int main(){
    int*arr;
    int n=5;
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("memory not allocated!\n");
        printf("array values after  calloc\n");
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
            free(arr);
        }
    }
}
