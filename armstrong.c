#include<stdio.h>
int main()
{
    int n,rem,sum=0,no;
    printf("\nENTER NO. :");
    scanf("%d",&n);//Taking user's input.
    no=n;//Making a copy of Input.
    while(n)//Main logic of the code.
    {
        rem=n%10;
        n=n/10;
        sum+=rem*rem*rem;
    }
    if(no==sum)//Checking the conditon belongs to the logic.
        printf("\nARMSTRONG NO.!");//print if true.
    else
        printf("\nOOPS!NOT AN ARMSTRONG NO!");//print if false.
    return 0;

}
