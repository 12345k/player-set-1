#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[1000];
int l,i,count=1;
scanf("%s",&a);
l=strlen(a);
   
    
   for(i=0;i<l;i++)
   {
        if(a[i]>='A' &&a[i]<='Z')
        {
                     count=count+1;
        }           
   }
   printf("%d",count);
    getch();
    return 0;
    
}
