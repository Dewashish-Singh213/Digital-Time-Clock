#include <stdio.h>
#include <time.h>
//for sleep() function
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int hour, minute, second;
    //hour=minute=second=0;
    printf("***********************************\n\n");
    printf("\tTime Clock\n\n");
    printf("Enter Hour , Minute, Second\n\n");
    printf("Hour : ");
    scanf("%d",&hour);
    printf("\nMinute : ");
    scanf("%d",&minute);
    printf("\nSecond : ");
    scanf("%d",&second);
    if(hour<0||hour>24)
    {
        printf("\nInvalid Time");
        exit(0);
    }
    if(minute<0||minute>60)
    {
        printf("\nInvalid Time");
        exit(0);
    }
    if(second<0||second>60)
    {
        printf("\nInvalid Time");
        exit(0);
    }
    while(1)
{
 //clear output screen
    system("clear");
 //print time in HH : MM : SS format
 printf("***********************************\n\n");
    printf("\tTime Clock\n\n");
    printf("\t%02d : %02d : %02d ",hour,minute,second);
    //clear output buffer in gcc
    fflush(stdout);
//increase second
    second++;
//update hour, minute and second
    if(second==60){
    minute+=1;
    second=0;
}
    if(minute==60){
    hour+=1;
    minute=0;
}
    if(hour==24){
    hour=0;
    minute=0;
    second=0;
}
    sleep(1);   //wait till 1 second
}
    return 0;
}