#include<stdio.h>
int calc(int *x){
    if(*x % 2 == 0){
        printf("piar");
    }
    else{
        printf("impair");
    }
};

int main(){
    int a;
    printf("entre le num :");
    scanf("%d", &a);
        calc(&a);

return 0;
};