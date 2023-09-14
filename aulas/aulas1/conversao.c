#include <stdio.h>
int main(){
  char caracter = 127;
  int inteiro = caracter; // conversao implicita
  float flutuante = inteiro; // conversao implicita com ressalva nas casas decimais
  double duplo = flutuante; // conversao implicita
  
  printf("o caracter %d convertido em inteiro %d\n", caracter, inteiro);
  printf("o inteiro %d convertido em flutuante %f\n", inteiro, flutuante);
  printf("p flutuante %f convertido em duplo %f\n", flutuante, duplo);

  duplo = 270.1234567890;
  flutuante = (float)duplo; //conversao explicita
  inteiro =(int) flutuante; //conversao explicita
  caracter = (char)inteiro; //conversao explicita

  printf("o duplo %f convertido em flutante %f\n", duplo,flutuante);
  printf("o flutuante %f convertido em inteiro %d\n",flutuante, inteiro);
  printf("o inteiro %d convertido em caracter %d\n", inteiro, caracter);


  return 0;
}