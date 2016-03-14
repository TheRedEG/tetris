#ifndef _MY_H_
#define _MY_H_

#include <ncurses.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <time.h>

#define	NF_X		1
#define NF_Y		0
#define DELAY_TIME	1.0
#define FIELD_W		10
#define FIELD_H		20
#define MAINWIN_H	22
#define MAINWIN_W	22
#define MAINWIN_X	15
#define MAINWIN_Y	0
#define AUXWIN_W	13
#define AUXWIN_H	8
#define SCORE_LINE	5

typedef struct Figure figure;

struct Figure
{
  int	dim;
  int	fig[4][4];
  int	color;
};



#endif
