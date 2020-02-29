/ Michael Said
// Liam May
// COP 3402
// Spring 2020

#include <stdio.h>
#include <string.h>
#include <stdbool.h> // for booleans
#include <ctype.h> // for isalpha/isdigit
#include <stdlib.h> // for malloc

#define MAX_IDENT_LENGTH 11
#define MAX_NUM_LENGTH 5
#define MAX_CODE_LENGTH 1000

int main(int argc, char **argv)
{
  FILE *fpin, *fpout;
  fpin = fopen(argv[1], "r");
  fpout = fopen(argv[2], "w");
  char code[MAX_CODE_LENGTH] = {'\0'};
  int i = 0;

  if (fpin == NULL)
  {
    printf("Err: %s could not be opened\n", argv[1]);
    return 0;
  }
  if (fpout == NULL)
  {
    printf("Err: %s could not be opened\n", argv[2]);
  }

  while(!feof(fpin))
  {
    code[i++] = fgetc(fpin);
  }
  code[i - 1] = '\0';
  fprintf(fpout,"Input:\n%s\n", code);

  fclose(fpin);
  fclose(fpout);
  return 0;
}
