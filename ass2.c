#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  char *file = malloc(80);
  for (int i = 0; i < 9; i++)
  {
    if ((argv[2][i] == 't') || (argv[2][i] == 'x') || (argv[2][i] == 'e') || (argv[2][i] == '.'))
    {
    file[i] = argv[2][i];
    }
  }
  printf("%s\n", file);




  FILE *input = fopen(file, "r");  // read
  if (input)   // file opened OK
  {
    char titel[100];
    char WahlA[100];
    char WahlB[100];
    char Anzeigetext[100];
    int zeilebuchstaben = 0;

    fseek(input , 0 , SEEK_SET);
    fgets(titel,100,input);
    printf ("%s", titel);
    for (int y = 0; y <= 100; y++)
    {
      if (titel[y] == '\n')
      {
        zeilebuchstaben = y + 1;
        break;
      }
    }
    fseek(input , zeilebuchstaben , SEEK_SET);
    fgets(WahlA,100,input);
    printf ("%s", WahlA);
    for (int y = 0; y <= 100; y++)
    {
      if (WahlA[y] == '\n')
      {
        zeilebuchstaben = zeilebuchstaben + y + 1;
        break;
      }
    }
    fseek(input , zeilebuchstaben , SEEK_SET);
    fgets(WahlB,100,input);
    printf ("%s", WahlB);
    for (int y = 0; y <= 100; y++)
    {
      if (WahlB[y] == '\n')
      {
        zeilebuchstaben = zeilebuchstaben + y + 1;
        break;
      }
    }
    fseek(input , zeilebuchstaben , SEEK_SET);
    fgets(Anzeigetext,100,input);
    printf ("%s", Anzeigetext);
    }
  fclose(input);
  free(file);
  return 0;
}