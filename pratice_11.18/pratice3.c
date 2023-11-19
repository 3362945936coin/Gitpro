
// #include <stdio.h>
// int main()
// {
//    int m,n,k,r;int x,y;
//    scanf("%d %d",&m,&n);
//   x=m;y=n;
//    while(m%n)
//    {
//       int t=m;
//       m=n;
//       n=t%m;
//    }//此时n为最大公约数
//  m=x/n*y;
//    printf("%d %d",n,m);//m*n除他们的最大公约数即为最小公倍数
//    return 0;
// }

// int prame(int x)//
//     {
//       int i=0;
//       for (i=2;i<x;i++)
//       {
//         if(x%i==0&&x/i!=1)
//         return 0;
//       }
//    return 1;
//     }
// #include <stdio.h>
// int main()
// { int m=0;
// int count=0;
// int j=0;
// int n=0;
// int Sn=0;
// scanf("%d%d",&m,&n);
// for (j=m;j<=n;j++)
// {
     
//     if(prame(j)==1)//是素数，就加入Sn
//    {
//     count++;
//      Sn+=j;
//    }
// }
//   printf("%d和%d之间有%d个素数,这些素数的和是%d",m,n,count,Sn);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//  int a[1000];int i,j;int cnt=0;int t;
//  for( i=0;;i++)
//  {
//     scanf("%d",&a[i]);
//     cnt++;
//     if(a[i]<0)
//     break;
//  }
// for(i=0;i<cnt-1-1;i++)//冒泡排序
// {
//     for(j=0;j<cnt-1-1-i;j++){
//     if(a[j]>a[j+1])
//     {
//         t=a[j];
//         a[j]=a[j+1];
//         a[j+1]=t;
//     }
    
//     }
// }
// printf("max=%d,min=%d",a[cnt-2],a[0]);

//     return 0;
// }

//  int prame(int x,int y)
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
//  int a,b,c,d;
//  char w;
//  int m,n,s;
//  int sum=0;
//  int k=0;
// scanf("%d/%d%c%d/%d",&a,&b,&w,&c,&d);
// s=b*d;//分母通分
// m=a*d;//新分子1
// n=c*b;//新分子2
// if(w=='+')
// {
// sum=m+n;
// }
 
// k=prame(sum,s);
// printf("%d/%d+%d/%d=%d/%d",a,b,c,d,sum/k,s/k);
//     return 0;
// }



// #include<stdio.h>
// #include<math.h>
// int main()
// {
// 	int n,z,i,j,k;
// 	scanf("%d",&n);
// 	//n=24;
// 	for( i=2;i<=n;i++)
// 	{
// 		int flag=0,p=0;
// 		for( j=2;j<=sqrt(i);j++)
// 		{                       
// 		    if(i%j==0)	
// 		    {flag=1;break;}
// 		}  
// 		if(flag==0)
// 		{
// 			z=n-i;
// 			for(k=2;k<=sqrt(z);k++)
// 			{
// 				if(z%k==0)
// 				{p=1;break;}
// 			}
// 		}
// 		if(flag==0&&p==0&&i<z)
//         printf(" %d + %d\n",i,z);
// 	}
	
// 	return 0;
// } 

// #include <stdio.h>
// int main()
// {
//  int n;int a,b;int sum1=0;int sum2=0;
//  //a为1  b为2;
//  //初始高度
//  int min=1;
//  scanf("%d\n%d%d",&n,&a,&b);
//  for(int i=1;i<=a;i++)
//  {
// 	sum1=i;
//  }
//  while(b)
//  {
//   sum2=sum2+2;//总长度
//    b--;
//  }
//  if(sum1<sum2)
// {
// 	min=n-1;
	
// }
// else if(sum1=sum2)
// {
	
// 	min=min+1;;
// }
// else
// {
// 	min=n-2;
// }
// printf("%d",min);
//  return 0;
// }


// #include <stdio.h>
// int main()
// {
//   int x1,y1,x2,y2;
//   int b,n;
//   scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
//   scanf("%d",&n);
//   while(n)
//   {
// 	scanf("%d",&b);
// 	n--;
// 	switch(b)
// 	 {
//   	 case 1:
//   	 y1++;
//   	 break;
//   	 case 2:
//   	 y1--;
//   	 break;
//   	 case 3:
//    	x1--;
//   	 break;
//   	 case 4:
//    	x1++;
// 	break;

//  	}
//   }
//  if(x1==x2&&y1==y2)
//  printf("Yes");
// else
// printf("No");
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int weight =0;int f=0;
//   scanf("%d",&weight);
// for(int i=2;i<=weight;i+=2)
// {
   
//    for(int j=2;j<=weight;j+=2)
//    {
// 	if(i+j==weight)
// 	f=1;
//    }
// }
// if(f==1)
// printf("YES, you can divide the watermelon into two even parts.");
// else
// {
// 	printf("NO, you can't divide the watermelon into two even parts.");
// }
// 	return 0;
// }



#include<stdio.h>
 
int main()
{
    int a,b,c,d;
    int w1,d1,w2,d2;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%d%d%d%d",&w1,&d1,&w2,&d2);
     
    int ans=(w2-w1-1)*4;
    for(int i=d1; i<=7; i++)
    {
        if(i==a||i==b||i==c||i==d) ans++;
    }
    for(int i=1 ; i<=d2; i++)
    {
        if(i==a||i==b||i==c||i==d) ans++;
    }
     
    printf("%d",ans);
    return 0;
}