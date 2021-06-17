#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <math.h>
#include<string.h>
#include <ctype.h>
#include<stdlib.h>
int lerstring(char *texto){
    int i,a=1,invalido=0,valido=0;
    int len=strlen(texto);
    if (len<=50){
        for(i=0;i<len;i+=1){
            if (texto[i]>='a' && texto[i]<='z'){
                //printf("Letra minuscula\n");
            }else if(texto[i]>='A' && texto[i]<='Z'){
                //printf("Letra maiscula\n");
            }
            else if (texto[i]==' '){
                //printf("Espaço\n");
            }
            else {
                invalido=1;
                //continue;
                }
        }
    }else {
        printf("Tamanho invalido.\nDigite novamente:\n");
        }

    if (invalido==0){
        valido=1;
    }


    return valido;
    }

char tamanhostring(char *texto){
    int tamanho=strlen(texto);
    printf("A string lida é %s, e seu tamanho é %d\n",texto,tamanho);


}

int verificanumero(char *entrada){
    int opcaoint;
    int i,valido=1,invalido=0;
    int len=strlen(entrada);
            for (i=0;i<len;i+=1){
                if (entrada[i]>='0' && entrada[i]<='9'){
                    valido=1;
                }else invalido=1;
            }
            if (invalido==1){
            }
            else if(valido==1 && invalido==0){
                opcaoint=atoi(entrada);
            }

    return opcaoint;
}

int menorF(int qtd,int numeros[qtd]){
    int menor;
    int contador3=0;
    menor = numeros[0];
    for (contador3=0;contador3<(qtd);contador3+=1){
        if (menor>numeros[contador3])
            menor=numeros[contador3];

    }
    return menor;
}

int maiorF(int qtd,int numeros[qtd]){
    int maior;
    int contador4;
    maior = numeros[0];
    for (contador4=0;contador4<(qtd);contador4+=1){
        if (maior<numeros[contador4])maior=numeros[contador4];
        }
    return maior;
}

int somaF(int qtd,int numeros[qtd]){
    int contador6;
    int soma=0;
    for (contador6=0;contador6<qtd;contador6+=1)soma+=numeros[contador6];
    return soma;
}

int produtoF(int qtd, int numeros[qtd]){
    int produto=1;
    int contador7;
    for (contador7=0;contador7<qtd;contador7+=1)produto*=numeros[contador7];
    return produto;
}

double mediaF(int qtd, int numeros[qtd]){
    double media=0,somapmedia=0;
    int contador9=0;
    for (contador9=0;contador9<qtd;contador9+=1)somapmedia+=numeros[contador9];
    media=(somapmedia)/qtd;
    return media;
}

double acimamediaF(int qtd, int numeros[qtd]){
    double acimadamedia=0;
    int contador10;
    double media,somapmedia=0;

    for (contador10=0;contador10<qtd;contador10+=1)somapmedia+=numeros[contador10];
    media=somapmedia/qtd;
    for (contador10=0;contador10<qtd;contador10+=1){
        if (numeros[contador10]>media){
            acimadamedia+=1;
            printf("[%d] está acima da media.\n",numeros[contador10]);
        }
    }
    return acimadamedia;
}

int crescenteF(int qtd, int numeros[qtd]){
    int a,contador12,aux;

    for (contador12 = 1; contador12 < qtd; contador12+=1) {
        for (a = 0; a < qtd - 1; a+=1) {
                if (numeros[a] > numeros[a + 1]) {
                    aux = numeros[a];
                    numeros[a] = numeros[a + 1];
                    numeros[a + 1] = aux;
                }
            }
    }
    printf("\nElementos do vetor em ordem crescente:\n");
    return numeros;
}

int decrescenteF(int qtd, int numeros[qtd]){
    int b,j,temp;

    for (b = 1; b < qtd; b++) {
        for (j = 0; j < b; j++) {
            if (numeros[b] > numeros[j]) {
                temp = numeros[b];
                numeros[b] = numeros[j];
                numeros[j] = temp;
            }
        }
    }
    printf("\nElementos do vetor em ordem decrescente:\n");
    return numeros;
}

int multiplicadorF(int qtd,int numeros[qtd]){
    int multiplicador,contador8;
    printf("Digite o valor para multiplicar todos os numeros da lista:\n");
    printf("O valor deve ser difente de 0.\n");
    while(1){
        fflush(stdin);
        scanf("%d",&multiplicador);
        if (multiplicador==0){
            printf("Não é possivel realizar a operação com o valor 0.\nDigite novamente:.\n");
            continue;
        }
        else{
            for (contador8=0;contador8<=qtd-1;contador8+=1){
                numeros[contador8]=multiplicador*numeros[contador8];
            }
            break;
        }
        }
    return numeros;
}

float mediaponderadaF(int qtd, int numeros[qtd]){
    int contador11;
    float pesos,somaPesos,entradamp,mediaponderada;
    for (contador11 = 0;contador11 < qtd;contador11+=1){
        printf("Escolha o peso que o %d° número terá:",contador11+1);
        fflush(stdin);
        scanf("%f",&pesos);
        somaPesos += pesos;
        entradamp += numeros[contador11] * pesos;
        }
        mediaponderada=entradamp/somaPesos;
        return mediaponderada;
}

int nesimoF(int qtd, int numeros[qtd]){
    int posicao;
    printf("Digite o n-ésimo numero da lista deseja retornar:");
    while(1){
        fflush(stdin);
        scanf("%d",&posicao);
        if (posicao>qtd || posicao<1){
            printf("Posição inexistente na lista.\nDigite novamente:\n");
            continue;
        }
        else{
            break;
    }
    }
    return posicao;
}

int funcaop2(int qtd,int numeros[qtd]){
int contador1=0;
int restodivisao;
int verifopcao2=0;
printf("Os números informados devem estar entre -100 e 500, não sendo possível informar o número 0 nem os múltiplos de 8.\n");
printf("Digite os numeros conforme a quantidade que voce informou:\n");
    for (contador1=0;contador1<qtd;contador1+=1){
        scanf("%d",&numeros[contador1]);

        restodivisao=(numeros[contador1]%8);
        if (numeros[contador1]<-100 || numeros[contador1]>500 || numeros[contador1]==0 || restodivisao==0){
                printf("Numero digitado fora das normas predefinidas.\nContinue a Digitação com numeros validos:\n");
                contador1-=1;
                continue;
        }
}
verifopcao2=1;
return verifopcao2;
}

int criptografiaF(char *texto){
    char alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char criptografia[]="1234567890!@#$%¨&*()-+<>/,12345";
    int i,j,len,valor=0,k;
    len=strlen(texto);
    for (k=0;k<len;k++)texto[k] = toupper(texto[k]);
    printf("Digite um valor entre 1 e 5\n");
    while(1){
        scanf("%d",&valor);
        if (valor>5 || valor<1){
                printf("Somente numeros de 1 a 5:\n")
                ;continue;
        }
        else break;
    }
    for (i=0;i<len;i++){
        for (j=0;j<31;j++){
            if (texto[i]==alfabeto[j]){
                //printf("Achou o %c na posicao %d\n",alfabeto[j],i);
                //printf("Trocar o %c por %c\n\n",alfabeto[j],criptografia[j+(valor-1)]);
                texto[i]=criptografia[j+(valor-1)];
            }
        }
    }
    return valor;
}

void descriptografiaF(char *texto,int valor){
    char criptografia[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alfabeto[]="1234567890!@#$%¨&*()-+<>/,1234";
    //char criptografia[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,j,len;
    j=valor-1;
    len=strlen(texto);
    for (i=0;i<len;i++){
        for (j=(valor-1);j<31;j++){
            if (texto[i]==alfabeto[j]){
                printf("Achou o %c na posicao %d\n",alfabeto[j],i);
                printf("Trocar o %c por %c\n\n",alfabeto[j],criptografia[j-(valor-1)]);
                texto[i]=criptografia[j-(valor-1)];
            }
        }
    }
}









int main()
{
setlocale(LC_ALL,"");
int menor,maior,soma=0,produto=1,multiplicador,temp,aux;
double media,acimadamedia=0,mediaponderada,somapmedia,entradamp=0,divisormp=0;
//Como na linguagem nao existem booleanos, simulei alguns verificadores para o funcionamento do codigo.
int verifopcao1,verifopcao2,opcao,verificacriptografia;
//CONTADORES:
int qtd=15,contador1=0,posicao,contador3=0,contador4=0,contador6=0,contador8=0,contador7=0,contador8_2=0,contador9=0,contador10=0,contador11=0,contador12=0,a=0,b=0,j=0;
//VETOR Principal e auxiliares:
int numeros[qtd],novosnumeros[qtd];
float pesos=0,somaPesos;
//novas variaveis
char texto[500],txt,verificaqtd[10],verificaoopcao[10];
int restodivisao,verifica14=0,validador14=0,valor=0,verificadescripto;


//Laço while que roda todo o programa.
while (opcao!=18)
{
    system("pause");
    printf("======MENU======\n");
    printf("1. Informar a quantidade de números a tratar\n");
    printf("2. Digitar os números\n");
    printf("3. Informar o menor número\n");
    printf("4. Informar o maior número\n");
    printf("5. Retornar o n-ésimo número da lista\n");
    printf("6. Calcular a soma dos números\n");
    printf("7. Calcular o produto dos números\n");
    printf("8. Multiplicar todos os números por um valor\n");
    printf("9. Calcular a média aritmética dos números\n");
    printf("10. Informar quantos números estão acima da média aritmética\n");
    printf("11. Calcular a média ponderada dos números\n");
    printf("12. Ordenar os números em ordem crescente\n");
    printf("13. Ordenar os números em ordem decrescente\n");
    printf("14. Ler string\n");
    printf("15. Mostrar string lida e o seu tamanho\n");
    printf("16. Criptografar a string\n");
    printf("17. Descriptografar a string\n");
    printf("18. Terminar a execução\n");
    printf("\nESCOLHA UMA OPÇÃO:");
    fflush(stdin);
    scanf("%[^\n]s", verificaoopcao);
    opcao=verificanumero(verificaoopcao);





    if (opcao==1)
    {
        printf("A quantidade de numeros deve estar entre 5 e 15.\n");
        printf("Informe a quantidade de numeros:\n");
        int i,valido=1,invalido=0;
        int len=strlen(verificaqtd);
        while (1){
                fflush(stdin);
                scanf("%[^\n]s", verificaqtd);
                for (i=0;i<len;i+=1){
                  if (verificaqtd[i]>='0' && verificaqtd[i]<='9'){
                    valido=1;
                  }else invalido=1;
                }
                if (invalido==1){
                        printf("Só é possivel digitar numeros\nDigite novamente:\n");
                        continue;
                }
                else if(valido==1 && invalido==0){
                  //printf("Valido\n");
                  qtd = atoi(verificaqtd);
                }

            if (qtd>15 || qtd<5)
            {
                printf("Quantidade invalida.\nDigite novamente:\n");
                continue;
            }else{
                printf("Quantidade armazenada na memoria com sucesso.\nVoltando para o MENU.\n");
                verifopcao1=1;
                verifopcao2=0;
                //Toda vez a opcao 1 for selecionado, o veriicador da opçao 2 é zerado, pois uma nova lista foi feita e tem que ser preenchida.

                break;
        }
        }
    }
    else if (opcao==2)
    {
        if (verifopcao1==1){
            verifopcao2=funcaop2(qtd,numeros);
            printf("Numeros armazenados com sucesso.\nVoltando para o MENU.\n");
        }
        else if  (verifopcao1 !=1)printf("Não é possivel executar a opção 2 sem antes executar a 1.\nVoltando para o MENU.\n");
        }
    else if (opcao==3)
    {
      if (verifopcao2==1){
        menor=menorF(qtd,numeros);
        printf("O menor numero da lista é %d.\nVoltando para o MENU.\n",menor);

      }else printf("Não é possivel executar a opção 3 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
    }
    else if (opcao==4)
    {
      if (verifopcao2==1){
            maior=maiorF(qtd,numeros);
            printf("O maior numero da lista é %d.\nVoltando para o MENU.\n",maior);
      }else printf("Não é possivel executar a opção 4 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
      }
    else if (opcao==5)
    {
      if (verifopcao2==1){
        posicao=nesimoF(qtd,numeros);
        printf("A posiçâo %d da lista equivale a %d.\nVoltando para o MENU.\n",posicao,numeros[posicao-1]);
      }else printf("Não é possivel executar a opção 5 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
    }
  else if (opcao==6)
  {
    if (verifopcao2==1){
        soma=somaF(qtd,numeros);
        printf("A soma de todos os numeros da lista é igual a %d.\nVoltando para o MENU.\n",soma);
    }else printf("Não é possivel executar a opção 6 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");

  }
  else if (opcao==7)
    {
    if (verifopcao2==1){
        produto=produtoF(qtd,numeros);
        printf("O produto de todos os numeros da lista é igual a %d.\nVoltando para o MENU.\n",produto);
    }else printf("Não é possivel executar a opção 7 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
  }
  else if (opcao==8)
    {
      if (verifopcao2==1){
          numeros[qtd]=multiplicadorF(qtd,numeros);
          printf("O números dessa lista após a multiplicação sao:");

          for (contador8_2=0;contador8_2<=qtd-1;contador8_2+=1){
            printf("[%d]",numeros[contador8_2]);

          }printf(".\nVoltando para o MENU.\n");
    }else printf("Não é possivel executar a opção 8 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
    }
  else if (opcao==9)
  {
    if (verifopcao2==1){
        media=mediaF(qtd,numeros);
        printf("A media aritmética dos numeros da lista é igual a %.2f.\nVoltando para o MENU.\n",media);
    }else printf("Não é possivel executar a opção 9 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
  }
  if (opcao==10)
  {
    if (verifopcao2==1){
        acimadamedia=acimamediaF(qtd,numeros);
        printf("Ao todo, existe %.0f numero(s) dessa lista acima da media.\nVoltando para o MENU.\n",acimadamedia);
    }else printf("Não é possivel executar a opção 10 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
  }
  else if (opcao==11)
  {
    if (verifopcao2==1){
            mediaponderada=mediaponderadaF(qtd,numeros);
            printf("Média ponderada: %.2lf\n",mediaponderada);
            printf("Retornando ao MENU.\n");
    }else printf("Não é possivel executar a opção 11 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
  }

  //Utilizei o algoritmo Bubble sort para ordenar(crescente e decrescente), pois ele é bastante eficiente para vetores de poucas arrays.
  else if (opcao==12)
  {
      if (verifopcao2==1){
            numeros[qtd]=crescenteF(qtd,numeros);
            for (a = 0; a < qtd; a+=1) {
                printf("[%d]", numeros[a]);
            }
            printf("\nVoltando para o MENU.\n");
      }else printf("Não é possivel executar a opção 12 sem antes executar a 1 e a 2 respectivamentes.\nVoltando para o MENU.\n");
  }
  else if (opcao==13){
    if (verifopcao2==1){
            numeros[qtd]=decrescenteF(qtd,numeros);
            for (b = 0; b < qtd; b+=1) {
                printf("[%d]", numeros[b]);
            }
            printf("\nVoltando para o MENU.\n");
    }
  }
  else if (opcao==14){
    texto[0]=='\0';
    printf("Digite a string a ser lida.\nSó é possível digitar letras maiusculas, minusculas e espaço.\n");
    while (1){
        fflush(stdin);
        scanf("%[^\n]s", texto);
        validador14 = lerstring(texto);
        if (validador14==1){
            printf("String armazenada com sucesso\nVoltando para o MENU.\n");
            break;
        }else {
            printf("A string possui caracteres invalidados,digite novamente:\n");
            continue;
        }

    }

    verifica14=1;
    verificacriptografia=1;
    verificadescripto==0;
  }
  else if(opcao==15){
    if (verifica14==1){
        tamanhostring(texto);
    }else printf("Não é possivel executar a opção 15, sem antes executar a 14.\nVoltando para o MENU.\n");
  }
  else if(opcao==16){
    if (verifica14==1 && verificacriptografia==1){
        valor=criptografiaF(texto);
        printf("A nova string criptografada é [%s]\nVoltando para o MENU.",texto);
        verificacriptografia=0;
        verificadescripto=0;
    }else if (verifica14==0)printf("Não é possivel executar a opção 16, sem antes executar a 14.\nVoltando para o MENU.\n");
    else if (verificacriptografia==0)printf("Só é possivel executar a opção 16 uma vez, a não ser que seja informada uma nova string.\nVoltando para o MENU.\n");
  }
  else if(opcao==17){
    if (verificadescripto==0){
        descriptografiaF(texto,valor);
        printf("A nova string descriptografada é [%s]\nVoltando para o MENU.",texto);
        verificadescripto=1;
    }else if(verificadescripto==1)printf("Só é possivel executar a opção 17 uma vez, a não ser que seja informada uma nova string e que seja depois criptografada.\nVoltando para o MENU.\n");
    else printf("Só é possivel executar a opção 17 depois da 16.\nVoltando para o MENU.");
  }
  else if (opcao>18 || opcao<1){
    printf("Opção inexistente.\nVoltando para o MENU.\n");
    continue;
  }



}
printf("Execução finalizada.\n");

return 0;
}
