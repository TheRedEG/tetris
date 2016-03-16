#include "display.h"

void	display_main()
{
  initscr();
  start_color();
  init_pair(2, COLOR_GREEN, COLOR_BLACK);
  attron(COLOR_PAIR(2));
  //
  display_board();
  display_next();
  display_score();
  //
  getch();
  endwin();
  free(board);
  free(next);
  free(score);
}

void	display_board()
{
  WINDOW *board;
  board = subwin(stdscr, 28, 30, 1, 38);
  wborder(board, '|','|','-','-','+','+','+','+');
  wrefresh(board);
 
}

void	display_next()
{
  WINDOW *next;
  next = subwin(stdscr , 10 , 22 ,3 , 73);
  wborder(next, '|','|','-','-','+','+','+','+');
  wrefresh(next);
}

void	display_score()
{
  WINDOW *score;
  score = subwin(stdscr , 18, 32 ,9 ,3);
  wborder(score, '|','|','-','-','+','+','+','+');
  wrefresh(score);
}
