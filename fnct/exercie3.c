#include<stdio.h>
float getMax(float a, float b){
           if(a>b){
                return a;
           }
           return b;
}

float getMin(float a, float b){
           if(a<b){
                return a;
           }
           return b;
}

float soustraction(float a,float b){
        return getMax(a,b)-getMin(a,b);
}

float multiplication(float a,float b){
        return a*b;
}


float division(float a, float b){
        //we're gonne devide per b
        if(b!=0){
            return a/b;
        }
        printf("division par 0 imp");
        return -1;
}
float inverse(float a){
    if(a!=0){
         return 1/a;
    }
    printf("inverse de 0 n'existe pas");
        return -1;
}

void main (){
   int a,b;
   do {
    printf("donner a");
    scanf("%f",&a);
   }while(a<=0);

    do {
    printf("donner b");
    scanf("%f",&b);
   }while(b<=0);

    printf("Max M.2f",getMax(a,b));
    printf("Min %.2f",getMin(a,b));
    printf("Soustraction %.2f",soustraction(a,b));
    printf("multiplication %.2f",multiplication(a,b));
    printf("division %.2f",division(a,b));
    printf("inverse %.2f",inverse(a));
}
