#include <stdio.h>
#include<ctype.h>
void Remplir (char v [], int N){
        for(int i=0;i<=N;i++){
            do{
                printf("donner le %d eme element",i+1);
                scanf("%c",&v[i]);
            }while(toupper(v[i])<toupper('A')   ||   toupper(v[i])>toupper('Z') );

        }
}

void Afficher (char v[], int N){
        for(int i=0;i<=N;i++){
                printf("%c - ",v[i]);
        }
        printf("\n");
}
int nbOccurence(char v[],int N, char x){
        int s=0;
        for(int i=0;i<=N;i++){
                if(v[i]==x){
                    s++;
                }
        }
        return  s;
}
void AfficherNbOcc(char v[],int N){
        for(int i=0;i<=N;i++){
                int j=0;
           while(v[j]!=v[i] && j<i){
                j++;
           }
            if(j==i){
                printf("%c: %d fois \n",v[i],nbOccurence(v,N,v[i]));
            }

        }
}

int main () {
    int N;
    char  v[50];
      do{
        printf("donner la taille du tableau N (0<= N<=20) \n");
        scanf("%d",&N);

    }while(N>50 || N<20);
    Remplir(v,N);
    Afficher(v,N);
    AfficherNbOcc(v,N);
    return 1;
}

