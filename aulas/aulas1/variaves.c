#include <stdio.h>

int main() {
  // int x
  int x =0;
  int y = 10;
  int z = 10;
  int x1 = -1;
  int x2 = x1;

  y = 50;
  y = -5;

  char caracter; // char 1 byte  -128 a 127 'a', '1' ','
  
  unsigned char caracter_sem_sinal; // 0 a 255
  
  int i,j;
  
  short int inteiro_curto; // 2 bytes -32768 a 32767
  
  int inteiro; // 4 bytes -2147483648 a 2147483647

  long int inteiro_longo; // 8 bytes -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807

  unsigned short int inteiro_curto_sem_sinal; // 0 a 65535

  unsigned long int inteiro_longo_sem_sinal; // 0 a 18.446.744.073.709.551.615

  unsigned int inteiro_sem_sinal; // 0 a 4.294.967.295
  
  float ponto_flutuante; // 4 bytes 0.123456f

  double duplo;// 8 bytes 0.1234567890123456

  long double duplo_longo; // 16 bytes

  void nada; // 1 byte 
  
  return 0;