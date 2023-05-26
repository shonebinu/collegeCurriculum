#include<stdio.h>
int main()
{
    int a=0,b=1,c,i=0,l[100],j;
    c=a+b;
    printf("%d\n%d\n",a,b);
    while(c<=400)
    {
        printf("%d\n",c); 
        if(c%3==0) 
        {
            l[i]=c;
            i++;
        }
        a=b;
        b=c;
        c=a+b;
    }
    printf("The numbers divisible by three are:");
    for(j=0;j<i;j++) printf("%d  ",l[j]);
    return 0;

}
