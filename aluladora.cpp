#include <stdio.h>

int op=1;

void opcao(){
    
 
   while(op != 0){
       
       printf("\nDigite uma op��o\n");
       printf("1- Adi��o\n");
       printf("2- Subtra��o\n");
       printf("3- Mutiplica��o\n");
       printf("4- Divis�o\n");
       scanf("%d",&op);
       
       if(op <=0){
           printf("opcao invalida!");
        }else{
            switch(op){
                case 1:{
                    int a,b, resultado;
                    printf("Digite o primeiro numero:\n");
                    scanf("%d",&a);
                    printf("Digite o segundo numero:\n");
                    scanf("%d",&b);
                    resultado= a+b;
                    printf("\n Resultado:%d",resultado);
                    break;
                    
                    case 2:{
                    int a,b, resultado;
                    printf("Digite o primeiro numero:\n");
                    scanf("%d",&a);
                    printf("Digite o segundo numero:\n");
                    scanf("%d",&b);
                    resultado= a-b;
                    printf("\n Resultado:%d",resultado);
                    break;
                    
                    case 3:{
                    int a,b, resultado;
                    printf("Digite o primeiro numero:\n");
                    scanf("%d",&a);
                    printf("Digite o segundo numero:\n");
                    scanf("%d",&b);
                    resultado= a*b;
                    printf("\n Resultado:%d",resultado);
                    break;
                    case 4:{
                    float a,b, resultado;
                    printf("Digite o primeiro numero:\n");
                    scanf("%f",&a);
                    printf("Digite o segundo numero:\n");
                    scanf("%f",&b);
                    resultado= a/b;
                    printf("\n Resultado:%f",resultado);
                    break; 
                    }
            
                    }
                    }
                }
            }
        }
   }
}

int main(){
     opcao();
     
     return 0;
