#include "display.h"

void	main()
{
  WINDOW *title;

  initscr();
  title = subwin(stdscr, 10, 10, LINES / 2, COLS / 2);
  wborder(title, '|','|','-','-','/','/',' ','/');
  wrefresh(title);
  getch();
  endwin();

  free(title);
}
