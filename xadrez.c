#include <stdio.h>

int main(){






//Variaveis do Programa

//Variaveis de peças
int torre = 1, bispo = 1, rainha; //varivael (Torre recebe valor 1), (Bispo recebe valor 1). 







//Mostra que a torre vai movimentar
printf("Movimento da Torre \n");
//linha diferencial para console 
printf("============================ \n");







//Logica de movimentação

while (torre <= 5) //estrutura de repetição.
{
    
    printf("Torre se mova a Direita \n");
    
    torre++; //Inclemento, valor soma 1(EX: se i = 1 ,i++ sera 2 e assim em diante)
      
}









//linha diferencial para console 
printf("============================ \n");
//Mostra que a torre vai movimentar
printf("Movimento do Bispo \n");
//linha diferencial para console 
printf("============================ \n");









//Logica de movimentação

do
{
    
    printf("Bispo se mova a Cima,Direita \n");

    bispo++; //Inclemento, valor soma 1(EX: se i = 1 ,i++ sera 2 e assim em diante)
    
  
} while (bispo <= 5);








//linha diferencial para console 
printf("============================ \n");
//Mostra que a torre vai movimentar
printf("Movimento da Rainha \n");
//linha diferencial para console 
printf("============================ \n");








//Logica de movimentação

for (rainha = 1; rainha <= 8; rainha++)
{
    
    
    printf("Rainha se mova a Esquerda \n");
    
}





















    return 0 ;
}