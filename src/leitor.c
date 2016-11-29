#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*void limpa_linha(char *linha) {
    char *tmp = linha;
    while (lsspace(*linha)) linha++;
    memmove();
}*/

int main(void) {
    FILE* fp = fopen("olamundo", "rt");

    if (fp == NULL){
      fprintf(stderr, "Não foi possível abrir o arquivo.\n");
      exit(1);
    }

    fseek(fp, 0, SEEK_END);
    int length = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char linha[length];
    int i = 0;
    while (fgets(linha, length, fp)) {
      fprintf(stdout, "%5d: %s",i++,linha);
    }

    fclose(fp);
}
