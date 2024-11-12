#include <stdio.h>

//! logica não está desenvolvida e nem testada.

int conta7(int entrada, int *count){
    if (entrada != 0){
        int unidade =  entrada / 100; //(7),17
        if (unidade == 7)
        {
            *count++;
        }
        entrada%=10; // 7(17)? 
        return conta7(entrada, *count);
    }
}
int main(){
    int leitura;
    int count = 0;
    scanf(" %d", &leitura);
    conta7(leitura, count);
    printf("%d", count);
    ;
    return 0;
}