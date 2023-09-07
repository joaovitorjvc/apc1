#include <stdio.h>

int main(){
  float VALOR_PRODUTO = 100.0f;
  float ICMS = VALOR_PRODUTO * 0.17;
  float COFINS = VALOR_PRODUTO * 0.076f;
  float PIS = VALOR_PRODUTO * 0.0165f;
  float PRECO_FINAL = (1 + ICMS + COFINS + PIS) * VALOR_PRODUTO;

  printf("o preco final do produto com os impostos é %f\n",PRECO_FINAL);
  printf("o preco do ICMS é %f\n", ICMS);
  printf("o preco do ICMS é %f\n", COFINS);
  printf("o preco do ICMS é %f\n", PIS); 
  return 0;
}

