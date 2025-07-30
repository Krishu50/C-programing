#include<stdio.h>
int main()
{
    int BS;
    printf("enter the basic salary");
    scanf("\n%d",&BS);
    int DA=(BS/100)*70;
    int HRA=(BS/100)*7;
    int MA=(BS/100)*2;
    int TA=(BS/100)*4;
    int PF=(BS/100)*12;
    int IT=500;
    int allowances=DA+HRA+MA+TA;
    int DD=PF+IT;
    int GS=BS+allowances;
    int NS=GS-DD;
    printf("\n DA of basic salary=%d",DA);
    printf("\n HRA of basic salary=%d",HRA);
    printf("\n MA of basic salary=%d",MA);
    printf("\n TA of basic salary=%d",TA);
    printf("\n PF of basic salary=%d",PF);
    printf("\n Gross salary      =%d",GS);
    printf("\n Net salary        =%d",NS);
    return 0;
}
