#include <stdio.h>
int main(){
    int i,x,s;

    s=0;
    for(i=1;i<=4;i++){
        printf("Donner une valeur : ");
        scanf("%d",&x);
        s+=x;
    }
    printf("Somme avec for=%d\n",s);

    s=0;
    i=0;
    while(i<4){
        printf("Donner une valeur : ");
        scanf("%d",&x);
        s+=x;
        i++;
    }
    printf("Somme avec while=%d\n",s);

    s=0;
    i=0;
    do{
        printf("Donner une valeur : ");
        scanf("%d",&x);
        s+=x;
        i++;
    }while(i<4);
    printf("Somme avec do while=%d\n",s);

    return 0;
}
