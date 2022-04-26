#include<stdio.h>
#include<conio.h>
int main()
{
    int age,ch,n,pay;
    int name, gender;
    printf("!! Add details to book ticket !!\n");
    printf("Enter your Name :\n");
    scanf("%s",&name);
    printf("Enter your Gender :\n");
    scanf("%s",&gender);
    printf("Enter your Age :\n");
    scanf("%d",&age);
    //printf("Enter your  :\n");
    printf("Enter your choice where you wnat to go :");
    printf("1) Degras 2) Ashat 3) Islampure ");
    scanf("%d",&ch);
    
    switch (ch)
    {
    case 1:
    n,pay;
    printf("Book at a time only single ticket :");
    scanf("%d",&n);
    if(n=1)
    {
        if(n>18)
        {
             pay=n*5;
             printf("Pay Rs %d",pay);
        }
        else
        {
             pay=n*10;
            printf("Pay Rs %d",pay);
        }
    }
    break;

    case 2:
    n,pay;
    printf("Book at a time only single ticket :");
    scanf("%d",&n);
    if(n=1)
    {
        if(n>18)
        {
             pay=n*10;
             printf("Pay Rs %d",pay);
        }
        else
        {
             pay=n*20;
            printf("Pay Rs %d",pay);
        }
    }
    break;

    case 3:
    n,pay;
    printf("Book at a time only single ticket :");
    scanf("%d",&n);
    if(n=1)
    {
        if(n>18)
        {
             pay=n*15;
             printf("Pay Rs: %d",pay);
        }
        else
        {
             pay=n*30;
            printf("Pay Rs %d",pay);
        }
    }
    break;
    
    default:printf("Enter correct choice !!!!!!!!!!!!!");
        break;
    }
    getch();
    return 0;
}