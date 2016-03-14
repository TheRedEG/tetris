#include "main.h"

int	main(int ac, char **av)
{
  if (ac == 2)
    {
      display_help();
    }
}

void	display_help()
{   
  int	file;
  int	rd;
  int	a;
  char  buf[a+1];

  a=10;
  file = open("help",O_RDONLY);
  while((rd = read(file, buf, a)) > 0)
    {
      if (rd != 0)
	{
	  buf[rd]=0;
	  printf("%s",buf);
	}
    }
}
