#include "main.h"

void init_colors();

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

void	init_ncurses()
{
  initscr();		//init curses
  noecho();		//disable echo
  keypad(stdscr, TRUE);	//allow arrow keys
  timeout(0);		//no blocking on getch
  curs_set(0);		//cursor invisible
  init_colors();	//init colors
}

void	start_pause()
{
  char c;
  attron(COLOR_PAIR(6));
  mvprintw(2,3,"%s","  #####  ##  #   # ####  ####    ");
  mvprintw(3,3,"%s","  #   # #  # #   # #     #       ");
  mvprintw(4,3,"%s","  ####  #### #   #  ##   ##      ");
  mvprintw(5,3,"%s","  #     #  # #   #    #  #       ");
  mvprintw(6,3,"%s","  #     #  #  # #  ####  ####    ");
  attroff(COLOR_PAIR(6));
  while (c != ' ')
    {
      c = getch();
      if (c == 'q')
	c = ' ';
    } 
  attron(COLOR_PAIR(3));
  mvprintw(2,3,"%s","##### #### ##### ###  ### ####");
  mvprintw(3,3,"%s","  #   #      #   #  #  #  #");
  mvprintw(4,3,"%s","  #   ##     #   ###   #   ##");
  mvprintw(5,3,"%s","  #   #      #   # #   #     #");
  mvprintw(6,3,"%s","  #   ####   #   #  # ### ####");
  attroff(COLOR_PAIR(3));
}  



void init_colors()
{
  start_color();
  init_pair(1, COLOR_CYAN, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);
  init_pair(4, COLOR_GREEN, COLOR_BLACK);
  init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
  init_pair(6, COLOR_RED, COLOR_BLACK);
}





int	main(int ac, char **av)
{
  int	c;
  int	a;
  int	end;

  if (ac == 2)
    {
      display_help();
    }
  else
    {
      init_ncurses();
      display_main();
      while (42)
	{
	  int c;
	  c = getch();
	  if (c == 'q')
	    {
	      break;
	    }
	  if (c == ' ')
	    {
	      start_pause();
	    }
	}
      endwin();
    }
}

