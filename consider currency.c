#include<stdio.h>
int main()
{
    int rs1,rs2,rs5,rs10,rs50,rs100,num;
    printf("enter the amount");
    scanf("%d",&num);
    rs100=num/100;
    num=num%100;
    rs50=num/50;
    num=num%50;
    rs10=num/10;
    num=num%10;
    rs5=num/5;
    num=num%5;
    rs2=num/2;
    num=num%2;
    rs1=num/1;
    printf("\n for amount of you have give!!");
    printf("\n notes of 100=%d",rs100);
    printf("\n notes of 50=%d",rs50);
    printf("\n notes of 10=%d",rs10);
    printf("\n notes of 5=%d",rs5);
    printf("\n coin of 2=%d",rs2);
    printf("\n coin of 1=%d",rs1);
    return 0;
}
