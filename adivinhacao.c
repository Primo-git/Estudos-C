#include <stdio.h>

int main() {
    printf("************************************\n");
    printf("* Bem-vindo ao Jogo de Adivinhação *\n");
    printf("************************************\n");


int numerosecreto;
numerosecreto = 42;
int chute;
int acertou;

printf("Qual é o seu chute?\n");
scanf("%d", &chute);
printf("Seu chute foi %d\n", chute);

acertou = chute == numerosecreto;

if(acertou) {
    printf("Parabéns! Você acertou!");
} else {
    if(chute > numerosecreto) {
        printf("Seu chute foi maior do que o número secreto!\n");
    }
    if(chute < numerosecreto) {
        printf("Seu chute foi menor do que o número secreto!\n");
    }
    
}

return 0;

}