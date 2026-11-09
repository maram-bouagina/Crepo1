#include<stdio.h>
void permutation (int * a,int * b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main (){
    int a,b;
    printf("donner a et b");
    scanf("%f%f",&a,&b);
    permutation(&a,&b);
    printf("a devient %d et b devient %d",a,b);

}
