#include <stdio.h>

int sumar(int a, int b) {
  return a + b;
}

int main() {
  int resultado = sumar(1, 4);
  printf("El resultado fue %i \n", resultado);
  return 0;
}
