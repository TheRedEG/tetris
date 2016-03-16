#include "main.h"

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
/*void	display_pause()
{
  char c;
  init_pair(2, COLOR_RED, COLOR_BLACK);
  attron(COLOR_PAIR(2));
  mvprintw(2,10,"%s","#####  ##  #   # ####  ####");
  mvprintw(3,10,"%s","#   # #  # #   # #     #");
  mvprintw(4,10,"%s","####  #### #   #  ##   ##");
  mvprintw(5,10,"%s","#     #  # #   #    #  #");
  mvprintw(6,10,"%s","#     #  #  # #  ####  ####");
  attroff(COLOR_PAIR(2));
  while (c != ' ')
    {
      c = getch();
      } 
      }*/

int	main(int ac, char **av)
{
  char c;
  if (ac == 2)
    {
      display_help();
    }
  else
    {
      initscr();
      display_main();
      while (c != 'q')
	{
	  c = getch();
	}
      endwin();
    }
}
