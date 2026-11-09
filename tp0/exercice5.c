#include<stdio.h>

void remplir(int t[50][50],int l,int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("t[%d][%d] = ",i,j);
            scanf("%d",&t[i][j]);
        }
    }
}

void afficher(int t[50][50],int l,int c)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}

void sommeligne(int t[50][50],int l,int c)
{
    int i,j,s;
    for(i=0;i<l;i++)
    {
        s=0;
        for(j=0;j<c;j++)
            s=s+t[i][j];

        printf("Somme ligne %d = %d\n",i,s);
    }
}

void sommecolonne(int t[50][50],int l,int c)
{
    int i,j,s;
    for(j=0;j<c;j++)
    {
        s=0;
        for(i=0;i<l;i++)
            s=s+t[i][j];

        printf("Somme colonne %d = %d\n",j,s);
    }
}

void main()
{
    int t[50][50],l,c;

    printf("Donner L et C : ");
    scanf("%d%d",&l,&c);

    remplir(t,l,c);
    printf("Le tableau est :\n");
    afficher(t,l,c);
    sommeligne(t,l,c);
    sommecolonne(t,l,c);
}
