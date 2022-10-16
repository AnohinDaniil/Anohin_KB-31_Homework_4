#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char ** argv)
{ 
  setlocale(LC_ALL, "Rus");
  if (argc == 1)
  {
    printf ("Рекомендация по использованию команды, необходимый ввод:\n'./Task6 ИмяПеременной ЗначениеПеременной'\n");
    exit (1);
  }
  int var = setenv (argv[1], argv[2], 0); // overwrite = 0, поэтому значение существ. переменной не меняем
  if (var == -1)
  {
    printf ("'%s' Ошибка, в памяти среды недостаточно места!\n", argv[1]);
    exit (0);
  }
  printf ("Установленное значение переменной (setenv): '%s = %s' \n", argv[1], argv[2]);
  char *var1 = getenv (argv[1]);
  printf ("Полученное значение переменной (getenv): '%s = %s' \n", argv[1], var1);
  exit (0);
}
