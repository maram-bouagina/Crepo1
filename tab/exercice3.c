//exercicec3
#include <stdio.h>
void  saisieRemplirTab(int * n, int t[]){

        do{
            printf("donner la taille du tab");
            scanf("%d",n);

        }while((*n>10 )|| (*n<=0));
        for (int i=0;i<*n;i++){
            printf("donner le case num %d",i+1);
            scanf("%d",&t[i]);
        }}
void affichertab (int t[], int n ){
            for (int i=0;i<n;i++){
            printf("%d \n",t[i]);
        }
}
void PairsImpairs(int v[], int n,int p[],int I[],int *np,int *ni ){

        for (int i=0;i<n;i++){
            if(v[i]%2==0){
                p[*np]=v[i];
                (*np)++;
            }
            else{
                I[*ni]=v[i];
                (*ni)++;
            }
        }

}
int main(){
    int v[10], p[10], I[10],n;
    int np=0;
    int ni=0;




        saisieRemplirTab(&n,v);
        affichertab(v,n);
        PairsImpairs(v,n,p,I,&np,&ni);
        for (int i=0;i<np;i++){
           printf("%d", p[i]);
        }for (int i=0;i<np;i++){
            printf(" %d", I[i]);
        }





 return 0;



}
