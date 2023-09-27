// #include <stdio.h>

// int main ()
// {   
//     int day =0;
//     scanf("%d",&day);
//     switch(day)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//         printf("工作日\n");
//         break;
//         case 6:
//         case 7:
//         printf("休息日\n");
//         break;




//     }





//     return 0;
// }

// #include <stdio.h>//小飞机for循环高级玩法！！！

// int main ()
// {
//     for (int i=0;i<2;i++)
//     printf("     **\n");
//     for (int i=2;i>=2&&i<4;i++)
//     printf("************\n");
//     for (int i =4;i>=4&&i<6;i++)
//     printf("    *  *\n");
    
    

//     return 0;
// }
#include <stdio.h>
int main ()
{   
  
  int i =1;
  while(i<=100)
  {
    if (i==50)
    break;
    printf("%d\n",i);
    i++;
  }

 

  return 0;
}