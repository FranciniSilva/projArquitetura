#include <stdio.h>

int main(void){

  printf("Hello, world\n");

return 0;


}

void openfile() {
    FILE* fp = fopen("olamundo", "r");

    if (fp == NULL){
      fprintf(stderr, "Não foi possível abrir o arquivo.\n");
      exit(1);
    }

    fseek(fp, 0, SEEK_END);
    int length = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char linha;

    fgets(linha, legnth, fp);

    fclose(fp);
}
