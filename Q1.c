#include<stdio.h>
int main(){

    printf("enter num: \n");
        int num;

    scanf("%d",&num);
    int count=0;
    for (int i=1;i<num;i++){
        if (num%i==0){
            count++;
            printf("it's divideable by: %d\n",i);
        }
    }
    printf("%d is dividable by %d numbers: ",num,count);
    return 0;
}