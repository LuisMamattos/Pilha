#include <stdio.h>
#include <stdlib.h>

//Luis Miguel Avila Mattos, M2

//Quando abre um parentese a pilha aumenta, quando fecha ela dimunui
//Nao pode ter tamanho negativo durante o processo(condição 2), e no final tem que ter tamanho zero(condição 1)

char var ='y';int pilha = 0;int flag = 0;
void escrita();
int main()
{
    printf("digite a expressao: \n");
    while(var != 'x'){
        scanf("%c",&var);
        if(var=='('){
            pilha++;
        }
        if(var==')'){
            pilha--;
            if(pilha < 0){
                flag = 1;//  VIOLA A CONDIÇÃO 2
            }
        }
    }
    escrita();
    return 0;
}
void escrita(){
    if((pilha == 0)&&(flag == 0)){
        printf("\tExpressao valida\n");
        return;
    }
    printf("\tExpressao invalida\n");
    return;
}
