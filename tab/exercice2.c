//exercicec2
#include <stdio.h>
void  saisieRemplirTab(int * n, int t[]){

        do{
            printf("donner la taille du tab");
            scanf("%d",n);

        }while((*n>100 )|| (*n<=0));
        for (int i=0;i<*n;i++){
            printf("donner le case num %d",i+1);
            scanf("%d",&t[i]);
        }}
void affichertab (int t[], int n ){
            for (int i=0;i<n;i++){
            printf("%d \n",t[i]);
        }
}
int nbPositifs(int t[], int n ){
        int p =0 ;
        for (int i=0;i<n;i++){
            if(t[i]>=0){
                p++;
            }
        }
        return p;
}
int main(){
    int t[100], n;
        saisieRemplirTab(&n,t);
        affichertab(t,n);
int p=nbPositifs(t,n);
        printf("le min est %d", min);



 return 1 ;



}
