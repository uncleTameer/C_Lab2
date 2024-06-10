#include<stdio.h>
int main(){
    printf("enter height: \n");
    int height;
    scanf("%d",&height);
    printf("enter width: \n");
    int width;
    scanf("%d",&width);


        for (int i=0;i<height;i++){
            for (int j=0;j<width;j++){
                if( i==0||i==height-1||j==0||j==width-1){
                    printf("*");
                }else{printf(" ");}
            
            
        }
        printf("\n");
        }
    return 0;
}