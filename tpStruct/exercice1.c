#include <stdio.h>
struct Joueur{
        char  nom [10], prenom[10];
        int    age, score ;

    } ;
    typedef struct Joueur joueur;
    typedef struct {
        char   nomE [10];
        joueur j1 ;
        joueur j2;

    } equipe;

joueur  saisis_joueur(){
    joueur  j;
    printf("donner un le nom de joueur \n ");
    scanf("%s",j.nom);
     printf("donner un le prenom de joueur \n");
    scanf("%s",j.prenom);
    printf("donner un l'age de joueur \n ");
    scanf("%d",&j.age);
      do{
          printf("donner un le score de joueur \n ");
        scanf("%d",&j.score);
      }while(j.score>100||j.score<0);

    return j;
}
equipe   saisis_equipe(){
    equipe e;
    printf("donner un le nom de l'equipe \n ");
    scanf("%s",e.nomE);
     e.j1=saisis_joueur();
     e.j2=saisis_joueur();
     return e;
    }

void Afficher_joueur(joueur j){
    printf(" le nom %s \t ",j.nom);
    printf(" le prenom %s\t",j.prenom);
    printf(" l'age %d \t",j.age);

}
void Afficher_equipe(equipe  e){
        Afficher_joueur(e.j1);
        Afficher_joueur(e.j2);
        printf(" le nomE %s \t ",e.nomE);

}

int main(){


    joueur j1,j2;
    equipe e, t[50];
    //j1=saisis_joueur(j1);
    //j2=saisis_joueur(j2);
    //e=saisis_equipe(e,j1,j2);
    int n;
    do
        {
            printf("donner le nombre des équipes");
            scanf("%d",&n);
        }
        while(n<0||n>50);

    for(int i=0;i<n;i++){
             printf("donner l'element du tabeleau %d",i+1);
            t[i]=saisis_equipe();
         }

       for(int i=0;i<n;i++){
            Afficher_equipe(t[i]);
         }
    return  1;
}
