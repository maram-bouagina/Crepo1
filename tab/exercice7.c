#include<stdio.h>

void initialisation (int iNb_jour []){
        for(int i=1;i<=12;i++){
           if(i==2){
            iNb_jour[i]=28;
           }
           else if((i%2==0 && i<=6 )|| (i%2==1 && i>8 )){
            iNb_jour[i]=30;
           }
           else{
            iNb_jour[i]=31;
           }
        }


}

void impression(int iNb_jour[],int n){
           for(int i=1;i<=n;i++){
                printf("%d\t",iNb_jour[i]);
        }}

int main(){
    int iNb_jour[13];
    initialisation(iNb_jour);
    impression(iNb_jour,12);
    return 1;
}
