#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    Scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-i;j++){
            while(j<=n-i)
            {
                printf("");
            }
            while (i%2==1)
            {
                k++;
                printf("%d ",k);

            }
            while(i%2!=1)
            {
                printf("%d ",k);
                k--;
            }
            
        }k+=n;
        printf("\n");
    }
}
