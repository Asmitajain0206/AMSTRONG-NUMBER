#include<stdio.h>
int main()
{
    int n,rem,sum=0,no;
    printf("\nENTER NO. :");
    scanf("%d",&n);
    no=n;
    while(n)
    {
        rem=n%10;
        n=n/10;
        sum+=rem*rem*rem;
    }
    if(no==sum)
        printf("\nARMSTRONG NO.!");
    else
        printf("\nOOPS!NOT AN ARMSTRONG NO!");
    return 0;

}
