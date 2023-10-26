#include "game.h"

void initbrand(char arr[ROW][COL],int row,int col)
{
 int i=0;
 int j=0;
 for(i=0;i<row;i++)//创建九宫格
 {
    for(j=0;j<col;j++)
    {
        arr[i][j]=' ';
    }
 }   
}

void display(char arr[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
       int j=0;
       for(j=0;j<col;j++)
       {
        printf(" %c ",arr[i][j]);
        if(j<col-1)
        printf("|");
       }
       printf("\n");
       //
        if(i<row-1)
        {
            for(j=0;j<col;j++)
        {
            printf("---");
            if(j<col-1)
            printf("|");
        }
       printf("\n");
        }
        
    }
}

void player(char arr[ROW][COL],int row,int col)
{
  int x=0;int y=0;
  printf("玩家走>:\n");
  while (1)
  {
  printf("请输入下的坐标?:");
 scanf("%d %d",&x,&y);//某行 某列
if(x>=1 && x<=row && y>=1 &&y<=col)//坐标合法性
{
    if(arr[x-1][y-1]==' ')
    {
        arr[x-1][y-1]='*';
        break;
    }
    else 
    {
     printf("该坐标被占用\n");
    }
}
else
{
   printf("输入不合法，请重输入!\n");
}
  }

}
void  computermove(char arr[ROW][COL],int row,int col)
{  
    int x=0;int y=0;
    printf("电脑走:>\n");
    while (1)
    {
    x=rand()%row;
    y=rand()%col;
    if(arr[x][y]==' ')
    {
        arr[x][y]='#';
        break;
    }
    
    }
}

int FULL(char arr[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]==' ')
            {
                return 0;//没满
            }
        }
    }
    return 1;// 满了
}

char  whowin(char arr[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
        //横三列
        if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][1]!=' ')
        {
            return arr[i][1];
        }
        //竖三列
        for(i=0;i<col;i++)
      {
        if(arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]&&arr[1][i]!=' ')
        {
            return arr[1][i];
        }
      }
    }
    //两条对角线
    if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[1][1]!=' ')
    return arr[1][1];
    if(arr[2][0]==arr[1][1]&&arr[1][1]==arr[0][2]&&arr[1][1]!=' ')
    return arr [1][1];
    if(1==FULL(arr,ROW,COL))
    {
        return 'Q';
    }
    else 
    {
        return 'C';
    }

  
}

