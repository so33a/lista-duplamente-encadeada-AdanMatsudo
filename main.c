#include <stdio.h>
#include <stdlib.h>
#include "ListaDupla.h"
#include "ListaDupla.c"


int main () { // professor, eu deletei algumas coisas que eram desnecessárias no código (como impressão inversa, retirada de elementos, etc
  ListaDupla l = inicializa();
  link aux, aux2;
  insereDepois(l, l->head, aux= novoNo(12, NULL, NULL));
  aux2 = novoNo(42, NULL, NULL);
  insereDepois(l,aux,aux2);
  aux = novoNo(21, NULL, NULL);
  insereDepois(l, aux2, aux);
  imprime(l);
  imprimeReverso(l);

  link menor = buscaMenor(l);

  printf("\nmenor elemento = %d\n\n", menor->item);

  ordenar(l); 
  imprime(l);

  return 0;
}
