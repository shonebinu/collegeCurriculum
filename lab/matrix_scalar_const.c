#include<stdio.h>
int main()
{
    int a[30][30],s,i,j,r,c,count=0;
    printf("Enter the number of rows and columns of the matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter the elements:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the scalar constant to be searched:");
    scanf("%d",&s);
    for(i=0;i<r;i++) 
    for(j=0;j<c;j++) 
    if(a[i][j]==s)
    count+=1;
    printf("Number of times %d occured is %d \n",s,count);
    //return 0;
    if(count==0)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                a[i][j]*=s;
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

    }
return 0;
}
