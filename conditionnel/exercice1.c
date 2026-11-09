#include <stdio.h>
int main(){
    char c;
    printf("Donner un caractere : ");
    scanf("%c",&c);
    if(c>='a'&&c<='z')
        printf("Minuscule");
    else if(c>='A'&&c<='Z')
        printf("Majuscule");
    else
        printf("Chiffre");
    return 0;
}
