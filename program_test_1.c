#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    Scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j++){
            if (j<=n-i)
            {
                printf("");
            }
            else if (i%2==1)
            {
                k++;
                printf("%d ",k);

            }
            else
            {
                printf("%d ",k);
                k--;
            }
            
        }k+=n;
        printf("\n");
    }
}