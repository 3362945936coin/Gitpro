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
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//  char arr[]="CS GO!";
//    memset(arr,'*',2);
//    printf("%s",arr);
//     return 0;
// }
// void swap(int*pa,int*pb)//交换
//   {
//     int temp =0;
//   temp=*pa;
//   *pa=*pb;
//   *pb=temp;
//   }

// #include <stdio.h>
// int main()
// {
//   int a=10;
//   int b=20;
// swap(&a,&b);
// printf("%d\n%d\n",a,b);


//     return 0;
// }

//     int prame(int x)//100-n的素数的和。
//     {
//       int i=0;
//       for (i=2;i<x;i++)
//       {
//         if(x%i==0)
//         return 0;
//       }
//    return 1;
//     }
// #include <stdio.h>

// int main()
// {
// int m=0;
// int n=0;
// int i;
// int Sn=0;
// scanf("%d %d",&m,&n);
// if(m>n)
// {
//    int c=0;
//    c=m;
//    m=n;
//    n=c;
// }
// for (i=m;i<=n;i++)//范围
// {
    
//     if(prame(i)==1)//是素数，就加入Sn
//    {
//      Sn+=i;
 
//    }
// }
//   printf("%d\n",Sn);
//     return 0;
// }

// int prame_with(int x)//判断素数
// {
//   if(x%2!=0)
//   {
//     return 1;
//   }
//   else if(x==2)
//   {
//     return 1;
//   }
//   else
// {
//   return 0;
// }
// };
// #include <stdio.h>
// int main()
// {
//  int a;
//  scanf("%d",&a);
//  if(prame_with(a)==1)
//  {
//   printf("T");
//  }
// else
// {
//   printf("F");
// }
//   return 0;
// }

// #include <stdio.h>//前N项和最大项
// int main()
// {
//  int a,m,n,sum;
//  scanf("%d",&m);
//  sum=0;
//  if(m<200000)
//  {
//   for(n=0;sum<=m;n++)
//  {
//    sum=sum+n;//累加
//  }
 
//  }
// printf("%d",n-2);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int m,n,i,j,f;
//     int count =0;
//     scanf("%d %d",&m,&n);//
//     for(i=m;i<=n;i++)//范围
//     {
        
//         for(j=2;j<i;j++)//判断素数
//         {
//             if(i%j==0)//不是素数
//             {
//                 break;
//             }
//         }
//         if(i==j)//是素数
//       {  
//         count++;
//       } 
//     }
//      printf("%d",count);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//  int i, a,n,sum,add;
//  scanf("%d %d",&a,&n);
//  sum =0;
//  add=0;
// for(i=1;i<=n;i++)//累加N次
// {
//  add=add*10+a;//累加
//  sum+=add;
// }
// printf("%d",sum);
//   return 0;

// }
/*
   程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，
   如果x>y则将x与y的值进行交换， 然后再用x与z进行比较，如果
   x>z则将x与z的值进行交换，这样能使x最小。
*/
// #include<stdio.h>
// int main(){
// 	int x, y, z, t;
// 	scanf("%d%d%d",&x,&y,&z);
// 	if(x>y){
// 		t = x;
// 		x = y;
// 		y = t;
// 	} 
// 	if(x > z){
// 		t = x;
// 		x = z;
// 		z = t;
// 	}
// 	if(y > z){
// 		t = y;
// 		y = z;
// 		z = t;
// 	}
// 	printf("%d %d %d\n",x,y,z);
// }
// #include <stdio.h>
// int main()
// {
//  int n,x1,x2,x3,sum;
//  sum =0;
//  scanf("%d",&n);
// for(x1=1;x1<=n;x1+=2)//直接代表奇数项
// {
//    x2=x1+1; 
//    x3=x1+2;
//    sum=sum+x1*x2*x3;
// }
//  printf("%d",sum);
// 	return 0;
// }


// int add(int n)//求和
// {
//     return n*(n+1);
// }
// #include <stdio.h>
// int main()
// {
//     int n,i,sum=0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)//奇数项
//     {
//         sum=sum+add(i);
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int n,i,count;
//     while (scanf("%d",&n)!=EOF)
//     {
//       count=0;
//     for(i=100;i<=n;i++)
//     {
      
//       if(i%2==0&&i%3==0&&i%7==0)
//       count++;

//     }
//      printf("%d\n",count);
//     }
//        return 0;
//     }

   // #include <stdio.h>//完全平方数
   // #include <math.h>
   // int main()
   // {
   //    int n,i,x,y,count;
   // count =0;
   //    scanf("%d",&n);
   //    for(i=1;i<=n;i++)
   //    {
   //     x=sqrt((float)100+i);
   //     y=sqrt((float)i+100+168);
   //     if(100+i==x*x&&i+100+168==y*y)
   //     {
   //       count++;
   //     }
   //    }
   //     printf("%d",count);
   //    return 0;
   // }
// int Small(int x,int y)//最小公倍数
// {
//    int r;
//  while(x%y)
//    {
//       r=x%y;
//       x=y;
//       y=r;
//    }
//    return y;
// }
// #include <stdio.h>
// int main()
// {
//    int a,b,r,k,X;
//    scanf("%d,%d",&a,&b);
//      k=a*b;
//   if(a<0||b<0)
//   {
//    printf("Input error!\n");
//   }
//   else
//   {
//     X =Small(a,b);
//    printf("LCM=%d\n",k/X);
//   }
//    //a*b除他们的最大公约数即为最小公倍数
//    return 0;
// }