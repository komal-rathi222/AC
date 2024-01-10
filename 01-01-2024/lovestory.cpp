#include<iostream>
int main()
{
    int i,j,c=0;
    char a[]="codeforces",b[10];
    printf("enter string");
    for(i=0;i<10;i++)
    {
        scanf("%c",&b[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }
    printf("%d",c);
}
