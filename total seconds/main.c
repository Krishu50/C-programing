#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,minute,seconds;
    int total_seconds;
    scanf("%d%d%d",&hours,&minute,&seconds);
    printf("Enter the time(HH:MM:SS):");
    total_seconds=(hours*3600)+(minute*60)+seconds;
    printf("Total seconds=%d\n",total_seconds);
    return 0;
}
