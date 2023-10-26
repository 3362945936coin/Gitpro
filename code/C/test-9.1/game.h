#define ROW 3
#define COL 3
 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

  void initbrand(char arr[ROW][COL],int row,int col);
  void display (char arr[ROW][COL],int row,int col);
  void player(char arr[ROW][COL],int row,int col);
  void  computermove(char arr[ROW][COL],int row,int col);
  char  whowin(char arr[ROW][COL],int row,int col);

//玩家赢'*'
  // 电脑赢'#'
  // 平局 'Q'
  // 谁都没赢 继续'C


