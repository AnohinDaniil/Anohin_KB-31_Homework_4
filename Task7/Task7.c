#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char ** argv)
{
  setlocale(LC_ALL, "Rus");
  if (argc == 1)
  {
    printf ("Удаляем все окружение!\n");
    clearenv();
    printf ("-------------------------------------------------------------\n");
    system("printenv");
    printf ("-------------------------------------------------------------\n");
    exit (1);
  }
  char *var1 = getenv (argv[1]);
  printf ("Удаляем переменную из окружения:'%s = %s' \n", argv[1], var1);
  printf ("-------------------------------------------------------------\n");
  int var = unsetenv (argv[1]);
 	if (var == -1)
  {
  	printf ("'%s' Ошибка, в памяти среды недостаточно места!\n", argv[1]);
 		exit (0);
 	}
  system("printenv");
  printf ("-------------------------------------------------------------\n");
  printf ("'Перемення %s успешно удалена!' \n", argv[1]);
  var1 = getenv (argv[1]);
  printf ("Проверяем удаление (getenv): '%s = %s' \n", argv[1], var1);
  exit (0);
}