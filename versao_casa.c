#include <stdio.h>
#include <stdlib.h>

//Luis Miguel Avila Mattos, M2

//Quando abre um parentese a pilha aumenta, quando fecha ela dimunui
//Nao pode ter tamanho negativo durante o processo(condição 2), e no final tem que ter tamanho zero(condição 1)

char var ='y';
char *pilha;
int tam = 0;
int flag = 0;
int i = 0;
char prato = 'P';
void escrita();
int main()
{
    pilha = malloc(sizeof(char));
    printf("digite a expressao: \n");
    while((var = getchar())!= 'x'){
        printf("%c",var);

        if(var=='('){
            pilha[tam] = prato;
            tam++;
            pilha = realloc(pilha,((tam+1)*sizeof(char)));
        }
        if(var==')'){
            tam--;
            if(tam < 0){
                flag = 1;//  VIOLA A CONDIÇÃO 2
            }
            else{
                pilha = realloc(pilha,((tam+1)*sizeof(char)));
            }
        }
    }
    escrita();
    return 0;
}
void escrita(){
    if((tam == 0)&&(flag == 0)){
        printf("\tExpressao valida\n");
        return;
    }
    printf("\tExpressao invalida\n");
    return;
}
