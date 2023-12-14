#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

 
 
 
 
 // contatabilzar a saida e entrada de produtos , se adicionar o peço ao produto ; 





  int main () {
 	
 	setlocale(LC_ALL, "portuguese");
 	
 	// variavel para  selecionar uma opção do menu
 	int opcao ; 
 	float valor ;
	 //***********

  float valorTotal = 0  ; // valor das mercadorias em estoque 	  
  int  entrada ; //  contabilizar a quantidade de entrada do produto 
  int  saida ; // contabilizar saidas de produto
  int  quantidadeTotal = 0 ; // qauntidade de material no estoque 
   
 	setlocale(LC_ALL," portuguese");
 	
 	
    printf(" ******************* menu de estoque *************************"); 
 	printf ("\n **************selecione uma opção *************************\n");
 	
 	printf(" \n opção : 1 - adicionar quantidade de material ao estoque \n ");
 	printf(" \n opção : 2 - retirar produto do estoque  \n");
 	printf(" \n opção : 3 -  visualisar valor total do materiais  em estoque \n " );
 	printf(" \n opção : 4 - visualizar a quantidade de materiais total do estoque \n ");
 	printf(" \n opção : 5 - sair do progama \n \n");
 	
 	
 	do{
	 setlocale(LC_ALL," portuguese");
	 
	 printf ( " digite um  pra finalizar o progama,  ou  informe o uma opcao :\n  ");
      scanf("%d", &opcao);
 	 switch ( opcao ) {
 	 	
 	 	case 1 :  // case para quantificar a entrada de material 
 	 	 
 	 	 printf( " digite a quantidade de produto a ser adicionada ao estoque :\n ");
 	 	  scanf ( "%d",&entrada);
 	 	  printf( "\n adicionar o valor da carga:\n ");
 	 	  scanf( "%f",&valor);
 	 	  
 	 	
 	 	quantidadeTotal += entrada; // somando o estoque total 
 	 	 valorTotal += valor ; // somando o valor de entrada ao total de materiais  
 	 	
            break;
	      printf("deseja continua ?");
 	 	
 	   case 2 : 
 	   
 	   printf( " digite a quantidade de produdos a ser retirada dos estoque \n : ");
 	     scanf(" %d",&saida);
 	    printf ( " \n adicionar a volor da saida em materias ");
 	    scanf ( "%f",&valor);
 	    
 	     valorTotal -= valor; // adicionando os valores retirados em produto do total
 	     
 	    quantidadeTotal -= saida; // subtraindo o estoque total 
 	    
 	    break;
 	     printf("deseja continua ?");
 	     
	  case 3 : 
	  
	     printf( " O valor total em materias em estoque é : %f \n ", valorTotal);
	      
	      break;
	      printf("deseja continua ?");
	   case 4 :
	   
	   printf ( " A quantidade total de materias em estoque é : % d \n  ", quantidadeTotal);
	     
	      break;
	      printf("deseja continua ?");
	  	
 	 	
 	 	
	  }
 	
 }  while ( opcao != 5);
 	
 return 0;
}





