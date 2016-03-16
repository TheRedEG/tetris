#include "display.h"

void	display_main()
{
  start_color();
  //
  display_logo();
  display_board();
  display_next();
  display_score();
  //
  //free(board);
  //free(next);
  //free(score);
  //free(bloc);
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
  mvprintw(5, 76,"%s","  Next bloc :");
  next = subwin(stdscr , 10 , 22 ,3 , 73);
  wborder(next, '|','|','-','-','+','+','+','+');
  wrefresh(next);
}

void	display_score()
{
  WINDOW *score;
  mvprintw(13,5,"%s","SCORE :");
  mvprintw(18,5,"%s","LEVEL :");
  mvprintw(50,1,"%s"," ");
  score = subwin(stdscr , 18, 32 ,9 ,3);
  wborder(score, '|','|','-','-','+','+','+','+');
  wrefresh(score);
}

void	display_logo()
{
  WINDOW *logo;
  logo = subwin(stdscr , 28, 30, 1, 38);
  init_pair(2, COLOR_YELLOW, COLOR_BLACK);
  attron(COLOR_PAIR(2));
  mvprintw(2,3,"%s","##### #### ##### ###  ### ####");
  mvprintw(3,3,"%s","  #   #      #   #  #  #  #");
  mvprintw(4,3,"%s","  #   ##     #   ###   #   ##");
  mvprintw(5,3,"%s","  #   #      #   # #   #     #");
  mvprintw(6,3,"%s","  #   ####   #   #  # ### ####");
  attroff(COLOR_PAIR(2));
  mvprintw(28, 4, "%s","Tetris Epitech | girole_t");
}

