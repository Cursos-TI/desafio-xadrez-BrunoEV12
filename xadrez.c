#include <stdio.h>

//recursividade torre
void torre(int numero){

if( numero <= 5){ //if para controla repetição da recursividade, na linha 10 o numero soma, quando passa o valor , o loop parar.

    printf("Torre se mova a Direita \n"); //Imprimir para usuario
    torre(numero + 1); //chama rescursividade somando mais 1 ao valor

}

}








//recusividade Bispo
void bispo(int numero){

    int bispo1movimentação = 1, bispo2movimentação;


if( numero <= 5){  //if para controla repetição da recursividade, na linha 46 o numero soma, quando passa o valor , o loop parar.

    while (bispo1movimentação < 2) //repetição while
    {
        printf("Bispo se mova a Cima, ");  //Imprimir para usuario

        for (bispo2movimentação = 1; bispo2movimentação < 2; bispo2movimentação++) //repetição for dentro do while
        {
            printf("Direita \n"); //Imprimir para usuario 
        }
        
        bispo1movimentação++; //inclemento while pra parar o loop


    }

    
    bispo(numero + 1); //chama rescursividade somando mais 1 ao valor

}

}









//recusividade Rainha
void rainha(int numero){

if( numero < 8){ //if para controla repetição da recursividade, na linha 66, o numero soma, quando passa o valor , o loop parar.

    printf("Rainha se mova a Esquerda \n");//Imprimir para usuario 
    rainha(numero + 1); //chama rescursividade somando mais 1 ao valor

}

}












int main(){






//Variaveis do Programa

//Variaveis de peças
int quantidadeBispo = 1, quantidadeRainha, movimento1Cavalo = 1, movimento2Cavalo, movimento3Cavalo; //varivael (Torre recebe valor 1), (Bispo recebe valor 1). 
int quantidadeTorre = 1;





//Mostra que a torre vai movimentar
printf("Movimento da Torre \n");
//linha diferencial para console 
printf("============================ \n");







//Logica de movimentação


torre(quantidadeTorre); //chama recursividade







//linha diferencial para console 
printf("============================ \n");
//Mostra que o bispo vai movimentar
printf("Movimento do Bispo \n");
//linha diferencial para console 
printf("============================ \n");









//Logica de movimentação

bispo(quantidadeBispo); //chama recursividade








//linha diferencial para console 
printf("============================ \n");
//Mostra que a torre vai movimentar
printf("Movimento da Rainha \n");
//linha diferencial para console 
printf("============================ \n");








//Logica de movimentação


rainha(quantidadeRainha);  //chama recursividade







//linha diferencial para console 
printf("============================ \n");
//Mostra que o Cavalo vai movimentar
printf("Movimento do Cavalo \n");
//linha diferencial para console 
printf("============================ \n");








//Logica de movimentação

while (movimento1Cavalo--) //repetição while
{
    for (movimento2Cavalo = 0, movimento3Cavalo = 2; movimento2Cavalo < movimento3Cavalo; movimento2Cavalo++) //repetição for com multiplas variaveis, dentro do while.
    {
        
        printf("cima \n");  //Imprimir para usuario.
    }
    
    printf("direita \n");  //Imprimir para usuario.


}




















    return 0 ;
}