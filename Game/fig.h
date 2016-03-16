#ifndef _FIG_H_
#define _FIg_H_

#include "my.h"

figure I;
I.dim = 4;
I.fig[0][1] = 1;
I.fig[1][1] = 1;
I.fig[2][1] = 1;
I.fig[3][1] = 1;
I.color = 1;

figure O;
O.dim = 2;
O.fig[0][0]= 1;
O.fig[1][1]= 1;
O.fig[0][1]= 1;
O.fig[1][0]= 1;
O.color = 2;

/*figure J;
figure L;
figure S;
figure Z;
figure T;
*/
#endif
