#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     * 
     */
     
     int soma, vet[9];
     
     for(int i = 0; i <9; i++){

        scanf("%d",&vet[i]);
     }
     
 

     for(int i = 0; i <9; i++){

        soma+= vet[i];
     }


     if(soma%9==0){
        printf("Dasher\n");
     }

     if(soma%9==1){
        printf("Dancer\n");
     }

     if(soma%9==2){
        printf("Prancer\n");
     }

     if(soma%9==3){
        printf("Vixen\n");
     }

     if(soma%9==4){
        printf("Comet\n");
     }

     if(soma%9==5){
        printf("Cupid\n");
     }

     if(soma%9==6){
        printf("Donner\n");
     }

     if(soma%9==7){
        printf("Blitzen\n");
     }
if(soma%9==8){
        printf("Rudolph\n");
     }

    return 0;
}