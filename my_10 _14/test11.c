// int fbi(int n)//斐波那契数列从第三项开始等于前两项之和
// {
//     if(n==1||n==2)
//     {
//         return 1;
//     }
//     else//第三项起
//     {
//         return fbi(n-1)+fbi(n-2);//递归
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//   int n,i,d,sum;
//   scanf("%d",&n);
//   sum=0;d=0;
//   if(n>=1&&n<=10)
// for(i=1;i<=n;i++)
// {
//     d=fbi(i);
//     sum=sum+d;
// }
//  printf("%d\n",sum);
//     return 0;
// }
// int my_strlen(char*str)//函数不创建临时参数，递归思想
// {
//     if(*str!=0)
//    return 1+my_strlen(str+1);
//    else
//    return 0;
// }
// #include <stdio.h>
// int main()
// {
//  char arr[]="bit";
//  int len =my_strlen(arr);
//  printf("%d",len);
//     return 0;
// }
// 
// #include <stdio.h>//ASCII码排序@
// int main()
// {
//    char x1,x2,x3,change;//%*c意为空字符 用于过滤回车
//   while (scanf("%c%c%c%*c",&x1,&x2,&x3)!=EOF)
//   {
//     if(x1>x2)//排序
//     {
     
//         change=x1;
//         x1=x2;
//         x2=change;
//     } 
//   if(x1>x3)//皆为升序
//   {
   
//     change=x1;
//     x1=x3;
//     x3=change;
//   }
//    if(x2>x3)
//    {
    
//      change=x2;
//      x2=x3;
//      x3=change;
//    }
//   printf("%c %c %c\n",x1,x2,x3);
//   }

//     return 0;
// }
// int FBI(int n)//递归
// {

// if(n==3)
// return 1;
// else if()


// return FBI (n-1)+FBI(n-2);



// }

// #include <stdio.h>//分数数列求和
// int main()
// {
//     float n,i,sum;
//     scanf("%f",&n);
// for (i = 3; i < =2*n+1; i++)//分母循环n次
// {
//     FBI(i);
// }






//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//  float a=2,b=3,c;//分子前两项
// float d=3,h=0;//分母
// int n;
// scanf("%d",&n);
// for (int i=1;i<=n;i++)
// {
//     h=h+a/d;//累加
//     c=a+b;//第三项
//     a=b;b=c;//分子规律前两项之和，并迭代，
//     d=d+2;//分母规律
// }
// printf("%.2f",h);



//     return 0;
// }


// #include<stdio.h>//ASCII排序
// int main()
// {
//  char x;
//  while(scanf("%c%*c\n",&x)!=EOF)
//   {    
//    if(x>='A'&&x<='Z')
//    {  x=x+32;
//       printf("%c\n",x);
//    }
//  else if(x>='a'&&x<='z')
//  {    x=x-32;
//       printf("%c\n",x);
//       }
//  else if(x>='0'&&x<='9')
//   {
//     printf("%c\n",x);
//   }
//  else
//   {
//     printf("other\n");
//   }
//   }
//   return 0;
// }
// 

// #include <stdio.h>//因子和
// int main() {
// 	int n,sum;
// 	scanf("%d", &n);//输入需要拆分的整数
// 	for (int i = 2; i < n; i++)//循环除数
// 	 {
// 		while(n != i)// 当N与除数相等，代表彻底分解完成
// 		{ 
// 			if(n % i == 0)//能整除就是因子
// 			 { 
// 				// printf("%d+", i); 
// 				n = n / i; //被整除后的整数
// 				sum =sum+i;
// 			}
// 			 else {
// 				   break;
//                   }
// 		}
		
// 	}
	
// 	//  printf("%d\n", n); 
// 	printf("%d",sum);//输出和
// 	return 0;
// }
// #include <stdio.h>
// int main()
// {
//   int a,b,c;
//   int answer=0;
//   int count =0;
//   scanf("%d %d %d",&a,&b,&c);//输入该数除以3，4，7的余数
//   for(int i=1;i<=100;i++)//1到100的数
//   {
//    if(i%3==a&&i%4==b&&i%7==c)
//    {
// 	printf("%d;",i);
// 	count =1;//计数器
//    }
//   else
//   {
// 	count =0;
//   }
//   answer+=count;
//   }
//   if(answer==0)
//   {
// 	printf("no solution");
//   }  
// 	return 0;
// }

// #include <stdio.h>//同构数算法
// int main()
// {
//   int n,i,ge,bai;
//   int count=0;
//   scanf("%d",&n);
//   if(n>0&&n<1000)
//   for(i=1;i<=n;i++) //1到N之间的同构数
// {
//   ge=(i*i)%10;//个位
//   bai=(i*i)%100;
//   if(ge==i||bai==i)
//   {
    
//     count++;
//   }
// }

// printf("%d",count);
// 	return 0;
// }


// #include <stdio.h>
// int main()
// { 
//   int n, i,j;
//   scanf("%d",&n);
//   for(i=0;i<n;i++)//循环行数
//   {
//     for(j=0;j<=i;j++)
//     printf("%d",i);
//      printf("\n");
//   }
//   return 0;
// }
//  #include <stdio.h>//枚举法
// int main()
// {
//   int a,b;//大马和小马个数
//   int c;//马驹
//   int m,n;//大马，小马驮的块数
//   int count ;//记录方案个数
// while(scanf("%d %d",&m,&n)!=EOF)
// {
//   count =0;//！！！
// for(a=0;a<=100;a++)//大马范围
// {
//   for(b=0;b<=100;b++)//小马范围
//   {
//     c=(100-m*a-b*n)*2;//马驹个数
//     if(a+b+c==100)
//     {
//       count++;//一种方案
//     }
//   }
// }//跳出循环
//    if(count==0)
//   {
//    printf("no solution\n");
//    }
//    else
//   {
//     printf("%d\n",count);
//   }
// }
//   return 0;
// }
// #include <stdio.h>//猴子吃桃问题
// int main()
// {
//   int n,i;
// int sum =1;//第一天摘的若干的桃子
//   scanf("%d",&n);
//   for(;n>1;n--)//第一天到第n天。
//   {
//    sum=(sum+1)*2;//
//   }
//   printf("%d",sum);
//   return 0;
// }


// double computesum(int n)
// {
//   int  i,j ;
//   double sum =0.0;
// for(i=1;i<=n;i++)
// {
//   double a=2*i-1;
//   double b=2*i;
//   sum=sum+a/b;
// }  
// return sum;
// }
// #include <stdio.h>
// int main()
// {
//  double sum=0;
//  int n;
//  scanf("%d",&n);
// sum=computesum(n);
//  printf("%.4f",sum);
//   return 0;
// }


// #include <stdio.h>//数列求和
// int main()
// {
//   int n,i,sum=0;
//   int j,count;
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//     count=0;
//     for(j=1;j<=i;j++)
//     {
//       count=count+j;//代表
//     }
//     sum=sum+count;
    
//   }
//   printf("%d\n",sum);
//   return 0;
// }

//  #include <stdio.h>//自由落体
//  int main()
// {
//     int n,s,i,h;
//     scanf("%d",&n);
//     h=n;//下落高度
//     s=n;//
//     n=n/2;//第一次反弹高度
      
//     for(i=2;i<=10;i++)//从第二次开始落地
//    {
   
//     s=s+2*n;
//     n=n/2;
//    }    
// printf("%d",s);
//     return 0;
// }


// #include<stdio.h>//递归
// int main()
// {
//     int a[100],b[100],i,n;
//     scanf("%d",&n);
//     a[0]=1;//
//     b[0]=0;//粒子数
//     for(i=1;i<=n;i++)
//     {
//       a[i]=b[i-1];//
//       b[i]=3*a[i-1]+2*b[i-1];
//     }
//     printf("%d %d\n",a[n],b[n]);
//     return 0;
// }


// #include<stdio.h>
// #include <math.h>
// int  main() {
//   double sum,t,f,n;
//    int k;
//   scanf("%lf",&n);
//   sum=0; f=1; k=1;
// do
//  { 
//   t=f/(k*(k+1)+n); 
//   sum+=t;//前n项
//    k++;//代表奇数负，偶数正
//   f*=(-1);
//   }
//   while ( fabs(t)>=0.0001 );
// printf("%.4f\n",sum);
// }




// int judice(int year,int month,int day)
// { 
//   int sum=0;
//  switch (month)
//     {
//     case 12:
//        sum+=30;
      
//     case 11:
//         sum+=31;
//     case 10:
//         sum+=30;
//     case 9:
//         sum+=31;
//     case 8:
//         sum+=31;
//     case 7:
//         sum+=30;
//     case 6:
//         sum+=31;
//     case 5:
//         sum+=30;
//     case 4:
//         sum+=31;
//     case 3:
//        sum+=31;
//   // 依次类推
//     case 2://不停，当输入二月会加上个月天数再到1中
//        if((year%4==0&&year%100!=0)||(year%400==0)){
//             sum+=29;
//         }else
//         {
//             sum+=28;
//         }
//     case 1:
//         sum +=day;
//         break;
//     }
//     return sum;
// }
// #include <stdio.h>
// int main()
// {
// int year,month,day;
// int cs;
// scanf("%d %d %d",&year,&month,&day);
//  cs=judice(year,month,day);
//  printf("%d",cs);
//   return 0;
// }





// int swa(int n)
// {
//     int i=0;
//     int sum =0;
//      for(i=1;i<n;i++)//包含1本身
//    {
//     if(n%i==0)
//     {
//         sum=sum+i;//是因子就进去求和
//     }
//    }
//    return sum;
// }
// #include <stdio.h>//完数！！！
// int main()
// {
// int num,justice ;
// scanf("%d",&num);
// justice=swa(num);
// // printf("%d",justice);
// if(num==justice)
// {
//     printf("T");
// }
// else
// {
//     printf("F");
// }
//     return 0;
// }




// int  prame (int i)
// {
//   if(i%10+i/10%10+i/100%10==17)//个位，十位，百位和等于17
//   {
//     return i;//符合
//   } 
//   else
//   return 0;
//     }
// #include <stdio.h>
// int main()
// {
// int i=0;
// int rest=0;
// int count=0;//计数器
// for(i=100;i<1000;i++)
// {
//     rest=prame(i);
//     if(rest!=0)
//     {
//         count++;
//     }
// }
// printf("%d",count);
// return 0;
// }
// #include <stdio.h>//打印等腰三角形！！
// void prame (int n,char ch)
// {
//     int a,b=1,c;
//  while(n>0&&n<10)
//   {
//   for(a=n-1;a>0;a--)
//   {
//     printf(" ");//域宽
//   }
//   for(c=b;c>0;c--)
//   {
//     printf("%c",ch);
//   }
//   printf("\n");
//   n--;
//   b=b+2;
//   }
// }  

// // #include <stdio.h>
// int main()
// {
//    char ch;int n,p;
//   scanf("%d %c",&n,&ch);
//   prame(n,ch);
  
//     return 0;
// }
int fx1(int m,int n)//最大公约数
{   

    int r;int a,b;
    
    while(m%n)
    {
    r=m%n;  
    m=n;
    n=r;
    }
   return n;
}

 int fx2(int m,int n)//最小公倍数
 {
    int r;int a,b;
    int k=0;//辗转相除法
    k=m*n;
    
   while(a%b)
    {
    r=a%b;  
    a=b;
    b=r;
   
    } 
     return k/b;
    }

#include <stdio.h>
int main()
{
  int m,n,k,count;
  int c;
  scanf("%d %d %d",&m,&n,&count);
    if(count==1)
    {
    c=fx1(m,n);
    printf("%d",c);
    }
    else if(count==2)
    { 
    c=fx2(m,n);
    printf("%d",c);
    }    
    return 0;
}