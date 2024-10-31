#include <stdio.h>

int verificaBissexto(int *ano){
    if(*ano % 400 == 0){
        return 1;
    }
    return 0;
}
int verificaValidade(int *dia, int *ano){
    if(*dia < 1 || *dia >1000){
        return 0;
    }
    else if (*ano < 0 || *ano > 9999)
    {
        return 0;
    }
    return 1;
}
//                      148      2019
void calculaDiaMes(int *dia, int *ano){
    if (verificaValidade(dia, ano) == 0 ){
        printf("Entradas invalidas!\n");
    }
    
    else if (verificaBissexto(ano) == 1){ //bissexto
        int mes[] = {31,29,31,30,31,30,31,31,30,31,30,31};
        int i =0;
        int soma=0;
        while (*dia > soma){
            soma+=mes[i];
            i++;
        }
        //                 148-151+31 - soma mais 31 pra achar o dia exato pelo mes completo.
        printf("%05.2f/%05.2f/%d\n", (double) *dia-soma+mes[i-1], (double) i, *ano);
    }
    else{
        int mes[] = {31,28,31, 30,31,30,31,31,30,31,30,31};
        int i =0;
        int soma=0;
        while (*dia > soma){
            soma+=mes[i];
            i++;
        }
        printf("%05.2f/%05.2f/%d\n", (double) *dia-soma+mes[i-1], (double) i, *ano);
    }
}
int main(){
    int d , a;
    //              148 2019
    scanf(" %d %d", &d, &a);
    calculaDiaMes(&d,&a);
    return 1;
}