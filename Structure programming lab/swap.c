#include<stdio.h>
int main()
{

    int num, last, first, tem=0, rem, newRem ;

    printf("Enter your number: ");
    scanf("%d", &num);

    first = num%10;

    num = num/10;

    while(num !=0)
    {
        last = num %10;
        num = num/10;

        if(num != 0)
        {
            tem = tem*10 + last;
        }


    }
    printf("%d", first);
    while(tem !=0)
    {
        newRem = tem%10;
        printf("%d", newRem);
        tem /=10;
    }
    printf("%d", last);

}
