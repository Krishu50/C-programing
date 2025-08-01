#include<stdio.h>
int main()
{
    long a1,a2,a3,a4,a5,num;
    printf("enter the five digit value");
    scanf("%d",&num);
    a1=num/10000;
    a2=(num/1000)%10;
    a3=(num/100)%10;
    a4=(num/10)%10;
    a5=num/10;
    printf("the reverse value :%d%d%d%d%d",a5,a4,a3,a2,a1);
    return 0;

}
