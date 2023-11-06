
// #include <stdio.h>
// int main()
//   { 
//     int score;
//     char grade;
//     scanf("%d",&score);
//     if(score>100||score<0)
//       {
//        printf("成绩超出范围\n");
//     }
//     else{
//     switch(score/10)
//        {
//     case 10:
//     case 9: grade='A';break;
//     case 8: grade='B';break;
//     case 7: grade='C';break;
//     case 6: grade='D';break;
    
//     case 5:
//     case 4:
//     case 3:
//     case 2:
//     case 1:
//     case 0: grade='E';
//        }
//     printf("score=%d,grade=%c\n",score,grade);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int T ;
//   int a,b;
//   int c=0;
//   scanf("%d\n",&T);//组数
//   int sum=0;
//   while(scanf("%d %d%*c",&a,&b)!=EOF)
//   {
//    sum=(a-b);
//    c=fabs(sum);
//    printf("%d\n",c);
//   }
//     return 0;
// }
// #include <stdio.h>
// void choice(int a)
// {
//     int i=0;
//     do
//   {
//     a=a/10;
//     i++;
//   }
//   while (a!=0);
// printf("位数 = %d",i);
// }

// int main()
// {
//  int a;
//  scanf("%d",&a);
//  choice(a);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
//  int  prame1(int n)
// {
//   int money=0;
//   int sum=0;
// if(n<=1000&&n>0)
// {
//   money =4;
//   // printf("%d\n",money);
//   return money;
// }
// if(n>1000)//不加急
// {
//     //向上取整
//     sum=ceil(n/500.0);
//     money=3*sum;
//     // printf("%d\n",money);
//     return money;
// }
// }

// int prame2(int n)
// {
// int money=0;
//   int sum=0;
// if(n<=1000&&n>0)
// {
//   money =9;
//   // printf("%d\n",money);
//   return money;
// }
// if(n>1000)//加急 
// {
//     //向上取整
//     sum=ceil((n-1000)/500.0);
//     money=3*sum;
//     // printf("%d\n",money);
//     return money+5+4;
// }
// }
// int main()
// {
// int n;//外卖重量
// char ch;//加急字符
// int sum=0;
// scanf("%d %c",&n,&ch);
//    switch(ch)
//    {
//     case 'n':
//    sum= prame1(n);
//     break;

//     case 'y':
//    sum= prame2(n);
//     break;
//    }

// printf("%d",sum);

//     return 0;
// }


