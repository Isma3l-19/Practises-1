#include <stdio.h>

int main(void)

{
    int a,b,sum,product,sub,div;
    //sub-substraction
    //div-division
    printf("ENTER A NUMBER IN THE SPACES PROVIDED\n");
    printf("a= ");
    scanf("%d",&a);

    printf("b= ");
    scanf("%d",&b);

    sum=a+b;
    product=a*b;
    sub=a-b;
    div=a/b;

    printf("sum=%d\t product=%d\n sub=%d\t div=%d\n",sum,product,sub,div);
    return 0;
}