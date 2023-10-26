
#include "game.h"

void choice()
{
  int password=0;
printf("请输入密码>:******\n");
scanf("%d",&password);
  if(123456==password)
{
  printf("欢迎玩家!\n");
}
else
{
  printf("别玩了!\n");
}
}

void menu ()
{
  printf("***********************\n");
  printf("*****1.paly 0.exit*****\n");
  printf("***********************\n");
}
 
 void game ()
 {
  char ret =0;
  char arr [ROW][COL]={0};
  // 初始化棋盘
  initbrand(arr,ROW,COL);
  //打印棋盘
  display(arr,ROW,COL);
   //下棋
   while (1)
   {
    // 玩家下棋
    player(arr,ROW,COL);
    display(arr,ROW,COL);
    ret=whowin(arr,ROW,COL);
    if(ret!='C')
    {
     break;
    }
    
    //电脑下棋
   computermove(arr,ROW,COL);
   display(arr,ROW,COL);
   ret=whowin(arr,ROW,COL);
   if(ret!='C')
    {
     break;
    }
   }
   if(ret=='*')
   {
    printf("玩家赢\n");
   }
   else if(ret=='#')
   {
    printf("电脑赢\n");
   }
   else
   {
    printf("平局\n");
   }

 }  
void test ()
{
  int input =0;
  srand((unsigned int)time(NULL));
  do
  {
    choice();
    menu();
    printf("请选择>:");
    scanf("%d",&input);
    switch(input)
    {
     case 1:
     game();//进入游戏
     break;
     case 0:
     printf("退出游戏\n");
     break;
     default :
     printf("请重新选择\n");
     break;
    }
  } while (input);
}
int main()
{
  test();
  return 0;
}