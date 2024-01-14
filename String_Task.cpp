#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[200];
    gets(a);
    int j=0;
    int n=strlen(a);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U'&&a[i]!='Y'&&a[i]!='y')
        {
            b[j]='.';
            j++;
            if(a[i]>=65&&a[i]<=90)
            {
                b[j]=a[i]+32;
                j++;
            }
            else{
                b[j]=a[i];
                j++;
            }
        }
    }
    b[j]='\0';
    puts(b);
    return 0;
    
}