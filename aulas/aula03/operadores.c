#include <stdio.h>
int main(){
  int valor = 10;
  valor = 20;
 
  //operadores aritmeticos
  int soma = 10 + 2;
  int subtracao = 10 - 2;
  int multiplicacao = 10 * 2;
  int divisao = 10 / 2;
  int resto = 10 % 2;

  //operadores de incremento e decremento
  int pre_incremento = ++soma; //soma + 1
  int pre_decremeto = --soma; //soma -1
  int pos_incremento = soma++; //armazena soma + 1
  int pos_decremento = soma--; //armazena soma - 1

  //operadores relacionais
  int menor_que = 0 < 1;
  int menor_igual = 0 <= 1;
  int maior_que = 0 > 1;
  int maior_igual = 0 >= 1;
  int igual = 0 == 1;
  int diferente = 0 != 1;
  
  //operadores logicos
  int e = 0 < 1 && 1 < 10;
  int ou = 0 < 1 || 1 > 10;
  int nao = !0;
  
  
  
  return 0;
}