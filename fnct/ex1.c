#include<stdio.h>
int h,m,s;

void print_heure(){

 printf("Il est %d heure%c %d minute%c %d seconde%c\n",
           h, h <= 1 ?' ':'s',
           m, m <= 1 ?' ':'s',
           s, s <= 1 ?' ':'s');
           }
void set_heure(int heure, int minute, int sec){
    h=heure;
    m=minute;
    s=sec;
}

void tick (){
   s++;
   if(s==60){
        s=0;
        m++;
        if(m==60){
            m=0;
            h++;
            if(h==24)
                h=0;
        }

   }
}


void main(){
     do{
         printf("donner les heures,les minutes et les secondes");
    scanf("%d%d%d",&h,&m,&s);
    }while(h<0||h>23||m<0||m>59||s<0||s>59);

    print_heure();
    set_heure(4,2,1);
    print_heure();
    tick();
    print_heure();
}
