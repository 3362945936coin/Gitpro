// 
// #include<stdio.h>//某年某月！
// int main()
// {
// 	char s = 0;
// 	int i = 0, k = 0;
// 	scanf("%d%c%d", &i,&s,&k);
// 	switch (k)
// 	{
// 	case 1:
// 	case 3:
// 	case 5:
// 	case 7:
// 	case 9:
// 	case 11:
// 		printf("31\n");
// 		break;
// 	case 4:
// 	case 6:
// 	case 8:
// 	case 10:
// 	case 12:
// 		printf("30\n");
// 		break; 
// 	case 2:
// 		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
// 		{
// 			printf("29\n");
// 		}
// 		else
// 		{
// 			printf("28\n");
// 		}
// 		break;
// 	}
// 	return 0;
// }
 
//  #include <stdio.h>//判断等腰三角形@
//  int main ()
//  {
//  int a,b,c,d,e,f;
//  scanf("%d,%d,%d",&a,&b,&c);
//  if(a+b>c&&a+c>b&&b+c>a)//两边之和大于第三边
// {
//   ;
// }
// if(a==a||b==b||c==c)//任意两边相等！ 
// {
//   printf("%d,%d,%d:Y",a,b,c);
// }
// else
// {
//   printf("%d,%d,%d:N",a,b,c);
// }
//   return 0;
//  }

// #include <stdio.h>//时间格式转换！
// int main()
// {
// int a,b,turn;
// scanf("%d:%d",&a,&b);
// if(a==0)//晚上零点转成12
// {
// turn=12;
// printf("%d:%02d AM",turn,b);
// }
// else if(a>0&&a<=11)//早上输出
// {
//     turn=a;
//     printf("%d:%02d AM",turn,b);
// }
// else if(a==12)//上下午分界点
// {
//     turn=a;
//     printf("%d:%02d PM",turn,b);
// }
// else if(a>12&&a<=23)//下午转成0--12
// {
//     turn=a-12;
//     printf("%d:%02d PM",turn,b);
// }
//     return 0;
// }
// #include <stdio.h>//字符处理，涉及数值范围。
// int main()
// {
//   char a;
//   scanf("%c\n%c\n%c\n%c",&a);
//   if
//     return 0;
// }
#include <stdio.h>
