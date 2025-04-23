#include <stdio.h>

int main(){

    int i = 1, escolhanumero, escolhajogador;
    int movimentocavalo = 1;

    // menu escolha numero de casas a se mover
    printf("*** DESAFIO XADREZ ***\n");
    printf("Escolha o Numero de casas a se Mover\n");
    scanf("%d", &escolhanumero);

    // menu escolha da peça a se mover
    printf("*** DESAFIO XADREZ ***\n");
    printf("Escolha a peça para movimento\n");
    printf("1. TORRE\n");
    printf("2. BISPO\n");
    printf("3. RAINHA\n");
    printf("4. CAVALO\n");
    scanf("%d", &escolhajogador);


switch (escolhajogador)
 {
  case 1:
    // mover torre 5 casas para a direita
    for ( i = 1; i <= escolhanumero; i++){
        printf("Torre moveu-se para Direita!\n");
    }
    break;

  case 2:
     // mover bispo 5 casas cima e à direita
     while (i <= escolhanumero){
        printf("Bispo moveu-se para cima e à direita!\n");
        i++;
     }
    break;

  case 3:
      // mover rainha 8 casas para esquerda
      for ( i = 1; i <= escolhanumero; i++){
        printf("Rainha moveu-se para Esquerda!\n");
    }
    break;
  
  case 4:
      //mover cavalo
      while (movimentocavalo--)
      {
        for (int i = 0; i < 2; i++){
          printf("Cavalo se moveu para Baixo!\n");
        }
        printf("Cavalo se moveu para Esquerda!\n");
      }
      break;
     default:
       printf("*** Opçao inválida! ***\n");

}
    
   
    
    
    

   
    return 0;
}