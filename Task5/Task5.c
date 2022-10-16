#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char ** argv)
{
  setlocale(LC_ALL, "Rus");
  if (argc == 1){
    printf ("Рекомендация по использованию команды. Для вывода значения переменной необходимый ввод:\n'./Task5 ИмяПеременной' \n");
    exit (1);
  }
  char * var = getenv (argv[1]);
  if (var == NULL)
  {
    printf ("'%s' - не найдено\n", argv[1]);
    exit (0);
  }
  printf ("'%s = %s' - успешно найдено\n", argv[1], var);
  exit (0);
}

