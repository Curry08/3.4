#include <stdio.h>

int main(){
    char nome;
    int sesso;
    printf("Inserisci iniziale del nome: ");
    scanf("%c",&nome);
    printf("Inserisci 0 sei maschio 1 sei femmina: ");
    scanf("%d",&sesso);
    if(sesso==0){
        printf("Egregio signor");
    }
    else if(sesso==1){printf("Gentilissima signora");}
    return 0;
}
