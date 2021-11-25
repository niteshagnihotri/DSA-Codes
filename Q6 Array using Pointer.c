#include <stdio.h>

int main(){
    int data[5], i=0;
    printf("Enter Elements : \n");
    for (i=0; i<5;i++){
        scanf("%d", data+i);
    }
    printf("Elements Entered : \n");
    for(i=0; i<5; i++){
        printf("%d\t", *(data+i));
    }
}