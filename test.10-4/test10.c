// #include <stdio.h>//两点距离！
// #include <math.h>
// int main()
// {
//   float  x1,y1,x2,y2,a;
//  scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
//  float t1=x1-x2;
//  float t2=y1-y2;
//  a=sqrtf(t1*t1+t2*t2);
//  printf("%.2f",a);
//     return 0;
//  }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   float a,b,c;
//   float d,x1,x2;
//   scanf("%f %f %f",&a,&b,&c);
//   d=b*b-4*a*c;
//   if(d>0.0&&a!=0)
//   {
//   x1=(-b+sqrtf(d))/(2*a);
//   x2=(-b-sqrtf(d))/(2*a);
//   printf("%.2f %.2f",x1,x2);}
//   else
//   {
//     printf("无解");
//   }
//     return 0;
// }
// 
// #include <stdio.h>
// int main()
// {
//   int day=0;
//   scanf("%d",&day);
//  switch(day)
//  {
//  case 1:
//  printf("Monday");
//  break;
//  case 2:
//  printf("Tuesday");
//  break;
//  case 3:
// printf("Wednesday");
//  break;
// case 4:
// printf("Thursday");
//  break;
// case 5:
// printf("Friday");
//  break;
// case 6:
// printf("Saturday");
//  break;
// case 7:
// printf("Sunday");
//  break;
//  }
//     return 0;
// }
// }
// #include <stdio.h>//排序问题
// int main()
// {
//    int a,b,c,max;
//    scanf("%d %d %d",&a,&b,&c);
//    if(a<b)
//    {
//      max=a;
//      a=b;
//      b=max;
//    }
//   if(a<c)
//   {
//    max=a;
//    a=c;
//    c=max;
//   }
//   if(b<c)
//   {
//    max=b;
//    b=c;
//    c=max;
//   }
// printf("%d %d %d",a,b,c);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//  int  a,b ;
//  scanf("%d",&a);
// b=abs(a);
// printf("%d",b);
//   return 0;
// }
// #include <stdio.h>
// int main()
// {
//   int a,b,max;
//   scanf("%d %d",&a,&b);
//   if(a>b)
//   {
//   max=a;
//   printf("%d",max);
//   }
//   else
//   {
//     max=b;
//     printf("%d",max);
//   }


//   return 0;

// }
// #include <stdio.h>//中间值
// int main()
// {
//   int a,b,c,mid;
//   scanf("%d %d %d",&a,&b,&c);
//   if(a>b)//交换
//   {
//    mid=a;
//    a=b;
//    b=mid;
//   }
//   if(a>c)
//   {
//     mid =a;
//     a=c;
//     c=mid;
//   }
//   if(b>c)
//   {
//     mid=b;
//     b=c;
//     c=mid;
//   } 
// printf("%d",b);
//   return 0;
// }

