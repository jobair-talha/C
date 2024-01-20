#include<stdio.h>
int main(){

    int f1=0, f2=1, i, number;
    scanf("%d", &number);

     int sum =number==1? f1 : f1 + f2;

    for(i=3; i<=number ; i++){
        sum = sum +(i-1);
        f1 = f2;
        f2 = i;
    }

    printf("total sum = %d", sum);

    return 0;
}
