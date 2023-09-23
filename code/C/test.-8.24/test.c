// #include <stdio.h>

// int main()
// {
//     const int AMOUNT=250;
//     int price=0; 
//     printf("请输入金额（元）：");
//     scanf("%d",&price);

//     int change =AMOUNT-price;

//     printf("找您%d元。\n",change);

//     return 0;
// }

// #include <stdio.h>

// int main ()
// {
//     char ch  = 'w';
//     char*pc=&ch;
//     printf("%d\n",sizeof(pc));
//     // *pc='a';//   
    
//     // printf("%d\n",ch);
//     return 0;
// }


#include <stdio.h>

int main()
{
   int input =0;
   printf("你会去敲代码吗？ (1/0):>");
   scanf("%d",&input);
   if (input ==1)
   {
    printf("坚持下去,会有个好offer\n");
   }
   else
   {
    printf("回家种地!\n");

   }

    return 0;
}