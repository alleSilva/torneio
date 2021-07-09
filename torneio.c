#include <stdio.h>
#include <stdlib.h>

int vencedor(int index1, int index2, int gols1, int gols2 ) {
  if (gols1 > gols2) {
    return index1;
    }
    return 0;
}

int main(void) {
  int vencedor(int index1, int index2, int gols1, int gols2);
  char rodada1[16][30];
  char rodada2[8][30];
  char rodada3[4][30];
  char final[2][30];
  char enter;

  for (int i = 0; i < 16; i++) {
    printf("\nDigite o nome do time %d :\n", i+1);
    scanf("%30[^\n]", rodada1[i]);
    scanf("%c", &enter);
    if ((i+1)% 4 == 0) system("clear");
  }

  for (int i = 0; i < 8; i++) {
    printf("\nPartida %d :\n", i+1);
    printf("%s x %s\n", rodada1[2*i], rodada1[2*i+1]);
    
  }
  
  return 0;
}