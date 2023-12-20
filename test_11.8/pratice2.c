// #include <stdio.h>
// int main()
// {
// int n;
//   scanf("%d",&n);
//     int arr[n][n];
//     arr[0][0]=0;
//  int i=0;
//  int j=0;
//  for(i=0;i<n;i++)
//  {
//     for(j=0;j<n;j++)
//     {
//      arr[0][0]++;
//         printf("%02d",arr[0][0]);

//     }
//     printf("\n");
//  }   
// printf("\n");

// int c=1;
// for(i=0;i<n;i++)
// {
// for(j=0;j<(n-i-1)*2;j++)
// printf(" ");
// for(j=1;j<=i+1;j++){
// printf("%02d",c);
// c++;
// }

// printf("\n");

// }
//     return 0;
// }


// #include<stdio.h>//很好的一道题
// #include<math.h>
// int prime(int n) {//判定素数 
// 	if(n==1)//特判1 
// 		return 0;
// 	if(n%2==0)//2的倍数就回家吧 
// 		return 0;
// 	else {//不然就暴力枚举 
// 		int i;
// 		for(i=2; i<=sqrt(n); i++) {
// 			if(n%i==0)
// 				return 0;
// 		}
// 		return 1;
// 	}
// }
// int hw(int n) {//判定回文，不懂请参考数字反转 
// 	int sum=0;
// 	int k=n;
// 	while(n!=0) {
// 		sum=sum*10+n%10;
// 		n/=10;
// 	}
// 	if(sum==k)//判断是否回文 
// 		return 1;
// 	else
// 		return 0;
// }
// int main() {
// 	int i,n,sum=0,m;
// 	scanf("%d %d",&n,&m);  //读入两个数 
// 	for(i=n; i<=m; i++) {
// 		if(i==9989900) //如果到了这个数，就break 
// 			break;
// 		if(hw(i)&&prime(i))//否则判断是否回文和素数 
// 			printf("%d\n",i);//输出每个回文质数 
// 	}
// 	return 0;//结束程序 
// }

// #include <stdio.h>
// int main()
// {
//   int n;
//   int count=0;
//   scanf("%d",&n);
//   int arr[n];

//   for(int i=0;i<n;i++)//输入数组元素
//   {
// 	scanf("%d",&arr[i]);
//   }
//  // 比较小鱼可爱程度
//   int j=0;
//   for(int i=0;i<n;i++)
//   {
//   for(j=i;j>=0;j--)//倒序依次查找
//   {
// 	if(arr[j]<arr[i])//说明有
// 	count++;
//   }
//   printf("%d ",count);
//   count =0;
//   }

// 	return 0;
// }


// #include <stdio.h>
// int main()
// {
// int a[101];int i=0;int count=0;
// for(int i=0;;i++)//元素输入
// {
// 	scanf("%d",&a[i]);
// 	if(a[i]==0){
//    break;
// 	}
// 	count++;
// }

// //倒序输出//
// for(int j=count;j>=1;j--)
// {
// 	printf("%d ",a[j-1]);
// }


// 	return 0;
// }


// #include <stdio.h>
// int main()
// {   
//   int n;int a[1001]={0};int i=0;
//   scanf("%d",&n);
//   while(n!=1)
//   {
//    a[i]=n;//顺序存元素很好
//    i++;
//    if(n%2==0)
//    n=n/2;
//    else
//    n=3*n+1;
//   }
//   a[i]=1;
// for(int j=i;j>=0;j--)
// {
// 	printf("%d",a[j]);
// 	if(j>0)
// 	printf(" ");
// }


// 	return 0;
// }


// #include <stdio.h>
// int main()
// {

// 	int n;int i=0 ;int j=0;
// 	scanf("%d",&n);//几行
//  int arr[n][n];
//  for(i=0;i<n;i++)
//  {
// 	for(j=0;j<n;j++)
// 	{
// 		scanf("%d",&arr[i][j]);
// 	}
//  }
// for(i=0;i<n;i++)
// {
// 	sum1=sum1+arr[0][i];//第一名总分
// 	sum2=
// }

// 	return 0;
// }


// #include <stdio.h>

// int main(void) {
//     int a, n, count = 1, sn = 0, tn = 0;

//     scanf("%d%d", &a, &n);
//     while (count <= n) {
        
// tn=tn*10+a
// ;
//         sn = sn + tn;
        
// tn++
// ;
//         count++;
//     }
//     printf("%d\n", sn);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int t;int num;
  
//   scanf("%d",&t);
//   for(int i=1;i<=t;i++)
//   {
//     scanf("%d",&num);
// switch(num)
// {
//  case 1:
//  printf("Benq\n");
//  break;
// case 2:
// printf("jiangly\n");
// break;
// case 3:
// printf("Radewoosh\n");
// break;
// case 4:
// printf("orzdevinwang\n");
// break;
// case 5:
// printf("cnnfls_csy\n");
// break;
// case 6:
// printf("tourist\n");
// break;
// case 7:
// printf("-0.5\n");
// break;
// case 8:
// printf("inaFSTream\n");
// break;
// case 9:
// printf("fantasy\n");
// break;
// case 10:
// printf("ecnerwala\n");
// break;
// default :
// ;
// break;
// }

//   }


//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//  int n;int a;int sum=0;
//  int count=0;
//  scanf("%d",&n);
//  while(n!=13)
//  {
// sum=sum+n%10;//每一位存进去
// n=n/10;
// if(n==0){ 
//     sum=(sum*3)+1;
//     printf("%d\n",sum);
//     n=sum;
//     sum=0;
//     count++;
// }
//  }
// printf("%d",count);
//     return 0;
// }
// #include <stdio.h>
// void print(int m)
// {
// for(int i=30;i>=0;i-=2)
// {
// //奇数位
//     printf("%d",(m>>i)&1);
// }
// printf("\n");


// for(int i=31;i>=1;i-=2)
// {
// //偶数位
//     printf("%d ",(m>>i)& 1);
// }
// printf("\n");
// }

// int main()
// {
// int m=0;
// scanf("%d",&m);
// print(m);
//     return 0;
// }

#include <string.h>
#include <stdio.h>
void reverse_string(char*arr)
{
 char tem=arr[0];
 int len =strlen(arr);
 arr[0]=arr[len-1];
 arr[len-1]='\0';
 if(strlen(arr+1)>=2)
  reverse_string(arr+1);
 arr[len-1]=tem;
}

#include <stdio.h>//逆序字符串
int main()
{
char arr[]="abcdefg";
reverse_string(arr);
printf("%s",arr);

    return 0;
}


// #include <math.h>
// double Pow(int n,int k)
// {
//   if(k<0)
//   return (1.0/Pow(n,-k));
//   else if(k==0)
//   return 1;
//   else
//   return n*Pow(n,k-1);
// }

// #include <stdio.h>//n的k次方
// int main()
// {
//  int n,k;
//  scanf("%d%d",&n,&k);
//  double ret =Pow(n,k);
//  printf("%lf",ret);

//     return 0;
// }
// #include <stdio.h>//结构体
//  struct  stu
// {
// char name[20];
// int age ;
// int NOIP;//成绩
// } s1[10001];

// int main()
// {
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//     scanf("%s%d%d",&s1[i].name,&s1[i].age,&s1[i].NOIP);
//     getchar();
//    }
   
//    for(int j=0;j<n;j++)
//    {
//  s1[j].age++;s1[j].NOIP=s1[j].NOIP/5*6;
//     if(s1[j].NOIP<=600){
//     printf("%s %d %d\n",s1[j].name,s1[j].age,s1[j].NOIP);
//     }
//     else{
//       s1[j].NOIP=600;
//     printf("%s %d %d\n",s1[j].name,s1[j].age,s1[j].NOIP);
//    }
//    }

//   return 0;
// }

#include <stdio.h>
struct  stu
{
char id[20];
int s1;//学业成绩
int s2;//成绩
int sum1;//综合分数
int sum2;
} a[10001];

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    scanf("%s%d%d",&a[i].id,&a[i].s1,&a[i].s2);
    getchar();
    a[i].sum1=a[i].s1*7+a[i].s2*3;
   a[i].sum2=a[i].s1+a[i].s2;
   }

for(int j=0;j<n;j++)
{
  if(a[j].sum1>=800 && a[j].sum2>140)
  printf("Excellent\n");
  else
  printf("Not excellent\n");
}

return 0;
}