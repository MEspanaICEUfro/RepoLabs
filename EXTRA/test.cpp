#include <stdio.h>

int main()
{
  int i = 247593;
  char str[];

  sprintf(str, "%d", i);
    printf("%s", str);
  // Now str contains the integer as characters
} 