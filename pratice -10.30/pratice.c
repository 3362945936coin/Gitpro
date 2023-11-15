// #include <stdio.h>
// int main()
// {
//    int x,n;
//    scanf("%d %d",&x,&n);
//    int s=0;
//    for(int i=0;i<n;i++)
//     {
//      if((x!=6)&&(x!=7)) //只要星期不等于6和7
//      s += 250; //总长度增加250
//      if(x==7) //当x等于7的时候
//      x=1; // x归位为1
//      else //其他情况下（x不等于7的时候）
//      x++; //x自加1
//     }
//     printf("%d",s);
//     return 0;
// }
// int gcd(int a,int c){//最大公约数
// 	if(a%c==0) return c;
// 	return gcd(c,a%c);
// }
// #include <stdio.h>
// int main()
// {
//   int a,b,c;
//   scanf("%d%d%d",&a,&b,&c);
//   int ans1,ans2,ans3;
//   if(a>b)
//   {
//     int tem=a;
//     a=b;
//     b=tem;
//   }
//   if(a>c)
//   {
//     int tem=a;
//     a=c;
//     c=tem;
//   }

//   if(b>c)
//   {
//     int tem=b;
//     b=c;
//     c=tem;
//   }
//    int r=a%c;

//   printf("%d/%d",a/gcd(a,c),c/gcd(a,c));
//     return 0;
// }

// #include <stdio.h>//数直角三角形
// int main()
// {
//  int n;
//  scanf("%d",&n);
//  int i=0;
//  int j=0;
//  int count =0;
//  for(i=1;i<=n;i++)
//  {
//   for(j=i;j<=n;j++)
//   {
//   count++;
//   printf("%02d",count);
//    }
//    printf("\n");
//  }

//    return 0;

// }
// #include <stdio.h>//有多少个1
// int main()
// {
//  int a=0;
//  int count=0;
//  scanf("%d",&a);
//  int i=0;
//  for(i=0;i<32;i++)
//  {
//   if(1==((a>>i)&1))
//   {
//     count++;
//   }
//  }
// printf("%d",count);
//   return 0;
// }

// struct  stu
// {
//   char name[20];
// };

// #include <stdio.h>
// int main()
// {

//   struct  stu s1={"程序设计"};
//   struct stu*pc=&s1;
//   printf("%s",pc->name);
//   return 0;
// }

// #include <stdio.h>//高精度阶乘求和
// int main()
// {
//    int n;
//    int sum=0;
//    int i=0;
//    int h=1;
//    for(i=1;i<=n;i++)
//    {
//     h=h*i;
//     sum=sum+h;
//    }
// printf("%d",sum);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
// int arr[100];
// int i=0;
// int n;
// int count=1;//长度
// int max=0;//存储最长连号的个数
// scanf("%d\n",&n);
// for(i=0;i<n;i++)
// {
//   scanf("%d",&arr[i]);
// }
// for(i=1;i<=n;i++)
// {
//   if(arr[i]==arr[i-1]+1)
//   {
//   count++;//说明连号
//   }
//   else
//   {
//   count=1;//清零
//   }
//   if(count>max)
//     max=count;

// }
// printf("%d",max);

//   return 0;
// }
// #include <math.h>
//  int prime (int i)     //判断是否为素数的函数
// {
// 	int x = sqrt(i);
// 	for(int j = 2; j <= x; j++)
// 		if(i % j == 0)//
// 			return 0;
// 	return 1;
// }

// #include <stdio.h>
// int main()
// {
//   int L;
//   scanf("%d",&L);
//   int i=0;int sum=0;
//   int count=0;
//   for(i=2;;i++)
//   {
//   if(prime(i))//为真
//   {
//     sum+=i;
//     if(sum<=L)
//     {
//       count++;
//       printf("%d\n",i);
//     }
//     else
//     {
//       break;
//     }

//   }

//   }
//      printf("%d",count);

//   return 0;
// }

// #include <stdio.h>//级数求和！！和要高精度
// int main()
// {
//   int k,n;
//   scanf("%d",&k);
//   double sum=0;
//   int i=0;
//   int count=0;
//   for(n=1;;n++)
//   {
//     sum=sum+1.0/n;
//     if(sum>k)
//      break;
//   }
//   printf("%d",n);
//     return 0;
// }

// #include <stdio.h>//金币
// int main()
// {
//    int k;int i=0;
//    int  sum=0;
//    int coin =1;
//    scanf("%d",&k);
//    for(i=1;i<=k;i++)
//    {
//     sum=sum+coin*coin;
//     coin++;
//     k=k-i;
//    }
//    sum+=coin*k;//再加上无法持续完的金币
//    printf("%d",sum);

//     return 0;
// }

// int fib (int n)//P1720//栈溢出废了
// {
//     if(n==1)
//     return 1;
//     if(n==2)
//     return 1;
//     else
//     return fib(n-1)+fib(n-2);
// }

// #include <stdio.h>
// int main()
// {
// 	int n,s=0;
// 	scanf("%d",&n);
// 	while(n!=0)
// 	{
// 		s=s*10+n%10;
// 		n=n/10;
// 	}
// 	printf("%d\n",s);
//     return 0;
// }

// #include <math.h>
// int prime (int i)     //判断是否为素数的函数
// {
// 	int x = sqrt(i);
// 	for(int j = 2; j <= x; j++)
// 		if(i % j == 0)//
// 			return 0;
// 	return 1;
// }

// int my_strlen(char *str)
// {
//   char* start=str;
//   char* end=str;
//   while(*end !='\0')
//   {
//     end++;
//   }
// return end-start;
// }

// #include <stdio.h>
// int main()
// {
// char arr[]="bit";
// int len =my_strlen(arr);
// printf("%d",len);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {

// int arr[5];
// int *vp;
// for(vp=&arr[5];vp>&arr[0];)
// {
//     *--vp=0;
// }
// for(int i=0;i<5;i++)
// {
// printf("%d ",*vp);
// }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// int n;
// scanf("%d\n",&n);
//  int a[n];
//  int i=0;int j=0;
//  int t;
//  for(i=0;i<n;i++)
//  scanf("%d",&a[i]);

// for(i=0;i<n-1;i++)//冒泡排序
// {
//     for(j=0;j<n-1-i;j++){
//     if(a[j]>a[j+1])
//     {
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//     }

//     }
// }
// // for(i=0;i<n;i++)
// // printf("%d ",a[i]);
// printf("%d",a[n-1]-a[0]);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//    char arr[21];
//    int count=0;
//    scanf("%s",&arr);
//    int len=strlen(arr);
// for(int i=0;i<len;i++)
// {
//     if(arr[i]>'0'&&arr[i<='9'])
//     count++;
//     else
//     break;
// }
// if(count==11&&arr[0]=='1'&&len==11)
// printf("yes");
// else
// printf("no");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
// int n=1,t=1;
// while(t<32000)
// {
// t=t*(++n);

// }
// t/=n;
// n--;
// printf("n=%d,t=%d",n,t);
// return 0;
// }

//   #include <stdio.h>
//   int main()
//   {
//     int n;int t=1;int i;
//     int sum=0;
//     for(i=1;;i++)
//     {
//         t=t*i;
//         sum=t;
//         ++n;
       
//         if(sum>32000)
//         {
//             printf("%d %d",n,sum);
//             break;
//         }
//     }


// #include<stdio.h>
// int main()
// {
//     int m,guess,i;
//     int n,f=0;//
//     scanf("%d%d",&m,&n);
//     for(i=1;i<=n;i++)
//     {
//         scanf("%d",&guess);
//         if(guess<0){
//             break;}//负数结束
//         if(guess>m)
//             printf("Too big\n");
//         if(guess>0&&guess<m)
//             printf("Too small\n");
//         if(guess==m)
//         {
//             f=1;//猜中数字f就为1
//             if(i==1){
//                 printf("Bingo!");
//                 break;}
//             else if(i==2||i==3){
//                 printf("Lucky You!");
//                 break;}
//             else{
//                 printf("Good Guess!");
//                 break;}
//         }
//     }
//     if(f == 0)
//         printf("Game Over");
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int person;int sc[10000];double ave;
//   scanf("%d",&person);
//   for(int i=0;i<person;i++)
//   {
//    scanf("%d",&sc[i]);//分数
//   }
//   for(int i=0;i<person-1;i++)//冒泡排序
//   {
//     for(int j=0;j<person-1-i;j++)
//     {
//      if(sc[j]>sc[j+1])
//      {
//   int t=sc[j];
//   sc[j]=sc[j+1];
//   sc[j+1]=t;
//      }  
//     }
//   }
 
// double count=0;double sum=0;
// for(int i=1;i<person-1;i++)
// {
//     sum=sum+sc[i];
//    count++;
// }
// printf("%.2f",sum/count);
//     return 0;
// }

#include <stdio.h>
int main()
{
  int n;
  int count=0;
  scanf("%d",&n);
  int arr[n];
//   int arr2[n]={0};
  for(int i=0;i<n;i++)//输入数组元素
  {
	scanf("%d",&arr[i]);
  }
 // 比较小鱼可爱程度
  int j=0;
  for(int i=0;i<n;i++)
  {
  for(j=i;j>=0;j--)//倒序依次查找
  {
	if(arr[j]<arr[i])//说明有
	count++;
  }
  printf("%d ",count);
  count =0;
  }

	return 0;
}