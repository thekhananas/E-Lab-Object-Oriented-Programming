#include <stdio.h>
int leap(int y)
{
if(y%400==0)
return 1;
else if(y%4==0 && y%100!=0)
return 1;
else
return 0;
}
int main()
{
    int t,m,y,d,a;
    scanf("%d",&t);
    for(int j=1;j<=t;j++)
    {
    scanf("%d:%d:%d",&y,&m,&d);
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        a=((31-d)/2)+1;
        printf("%d\n",a);
    }
    else if(m==2)
    {
        if(leap(y))
        {
            a=((29-d)/2)+1;
            printf("%d\n",a);
        }
        else
        {
             a=((59-d)/2)+1;
            printf("%d\n",a);
        }
    }
    else
    {
         a=((61-d)/2)+1;
            printf("%d\n",a);
    }
    }
    return 0;
}