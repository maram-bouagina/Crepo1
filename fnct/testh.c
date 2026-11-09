#include <stdio.h>
int k=0;
int main()
{
    int n,i,j,m,rest,div,rows;
    int t[100][100];
    int len[100];
    do
    {
        printf("donner un entier n");
        scanf("%d",&n);
    }
    while(n<=0);
    rest=n%2;
    m=n;
    div=n/2;
    rows=n+1-rest;
    for(i=1;i<=rows;i++)
    {
        len[i]=m;
        for(j=0;j<m;j++)
        {
            printf("donner une valeur");
            scanf("%d",&t[i][j]);
            printf(" i=%d et  j=%d  et valeur%d  \n",i,j,t[i][j]);
        }
        printf(" m= %d  \n",m);
        if(k==0)
        {
            m=2*(div-i)+rest;
            if(m<1)
            {
                if(rest==0)
                    m=1;
                else
                    m=2*(i-div)+rest;
                k=1;
            }
        }
        else
            m=2*(i-div)+rest;
    }
    for(i=1;i<=rows;i++)
    {
        for(j=0;j<n-len[i];j++)
            printf(" ");
        for(j=0;j<len[i];j++)
            printf("%d ",t[i][j]);
        printf("\n");
    }
    return 0;
}
