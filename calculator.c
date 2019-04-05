#include<stdio.h>
#include<conio.h>
int a1,b1,i=1;
void input()
{
    printf("\nenter two number=");
    scanf("%d%d",&a1,&b1);
    i=0;
}
int sum(int a,int b)
{
    i=1;
    return a+b;
}
int sub(int a,int b)
{
    i=1;
    return a-b;
}
int mul(int a,int b)
{
    i=1;
    return a*b;
}
int div(int a,int b)
{
    i=1;
    return a/b;
}
int main()
{
    int c,res=0;
    input();
    while(1){
    printf("\n1.sum");
    printf("\n2.sub");
    printf("\n3.mul");
    printf("\n4.div");
    printf("\n5.change value");
    printf("\n0.exit");
    printf("\nenter your choice=");
    scanf("%d",&c);
    switch(c)
    {
        case 1:res=sum(a1,b1);break;
        case 2:res=sub(a1,b1);break;
        case 3:res=mul(a1,b1);break;
        case 4:res=div(a1,b1);break;
        case 5:input();break;
        case 0:printf("\npress any key to exit");
                getch();
                exit(1);
        default: printf("\n invalid option try again..");
    }
    if(i)
        printf("\nResult =%d",res);
    }
}
