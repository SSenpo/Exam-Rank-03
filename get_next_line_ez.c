#include <stdlib.h>
#include <unistd.h>

char  *gnl(int fd)
{
  char  *s = malloc(100000), *c = s;
  while (read(fd, c, 1) > 0 && *c++ != '\n')
  return (c > s ?(*c = 0, s) : (free(s), NULL));
}
