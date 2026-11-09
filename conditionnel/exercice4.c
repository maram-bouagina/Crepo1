#include <stdio.h>
int main(){
    char c;
    printf("Donner un caractere : ");
    scanf("%c",&c);
    switch(c){
        case ' ':case '.':case ',':case ';':
            printf("Separateur");break;
        case '<':case '>':case '!':case '=':
            printf("Operateur");break;
        case '0':case '1':case '2':case '3':case '4':
        case '5':case '6':case '7':case '8':case '9':
            printf("Chiffre");break;
        default:
            if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
                printf("Alphabetique");
            else
                printf("Caractere non reconnu");
    }
    return 0;
}
