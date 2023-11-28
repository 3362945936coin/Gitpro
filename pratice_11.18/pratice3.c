
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
// #include<math.h>
// int prime(int n){
//     for (int i=2;i<=(sqrt(n));i++)
//         if (n%i==0) return 0;
//         return 1;
// }

// #include<stdio.h>

// int main()
// {
// 	int n,z,i,j,k;
// 	scanf("%d",&n);
// 	for( i=4;i<=n;i+=2)
// 	{
// 		for( j=2;j<=sqrt(i);j++)                   
//          if (prime(j)&&prime(i-j))
//         printf("%d= %d + %d\n",i,j,i-j);
// 		}  
		
	
// 	return 0;
// } 



// #include<stdio.h>
// #include<math.h>
// int zhishu(int n)//
// {
//     int i,b=0;
//     for(i=2;i<=sqrt(n);i++)
//      if(n%i==0)
//      {
//          b++;
//          break;
//      }
//      return b;
// }
// int guess(int n)//
// {
//     int i;
//     for(i=2;i<=n/2;i++)
//       if(zhishu(i)==0)
//       {
//           if(zhishu(n-i)==0) return i;
//       }
//       return 0;
// }
//  int main()
// {
// 	int N,i;
// 	scanf("%d",&N);
// 	for(i=4;i<=N;i+=2)
// 	 if(guess(i)!=0) printf("%d=%d+%d\n",i,guess(i),i-guess(i));
// }

// #include<stdio.h>
// #include<math.h>
// int main(void)
// {
// 	int n,z,i,j,k;int flag,p;int a=0;int b;
// 	scanf("%d",&n);
	
// 	for( i=4;i<=n;i+=2)
// {
// 	   for(a=2;a<=i/2;a++)
// 	{
// 		flag=0;
// 		for( j=2;j<=a-1;j++)//  
// 		{                       //
// 		    if(a%j==0)	
// 		    {flag=1;break;}
// 		}  
// 		if(flag==0)
// 		{
// 			p=0;
// 			b=i-a;
// 			for(k=2;k<=b-1;k++)
// 			{
// 				if(b%k==0)
// 				{p=1;break;}
// 			}
// 			if(p==0){
			
//             printf("%d=%d+%d\n",i,a,b);
//              break;
// 			}
// 		}
	
// 	}
//  }
// 	return 0;
// } 
// int check_sys()
// {
//     int a=1;
//     return*(char*)&a;
// }

// #include <stdio.h>
// int main()
// {
// int ret=check_sys();
// if(ret==1)
// {
//     printf("小端");
// }
// else
// {
//     printf("大端");
// }
// 	return 0;
// }