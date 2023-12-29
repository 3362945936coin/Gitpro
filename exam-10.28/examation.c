
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









// #include <stdio.h>
// #include <math.h>
// int main()
// {
// int n;int t,i,j;
// double sum1=0.0,sum2[300],a[300];
// scanf("%d",&n);
// // if(n>2&&n<=300)
// for(int i=0;i<n;i++)
// {
//     scanf("%lf",&a[i]);
// }
// for(i=0;i<n-1;i++)//冒泡排序从小到大
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

// for(int i=1;i<n-1;i++)
// {
//    sum1=(sum1+a[i]);//平均值
// }
// sum1=sum1/(n-2);
// for(int i=1;i<n-1;i++)
// {
//    sum2[i]=fabs(a[i]-sum1);//存进去
// }

 
// for(i=1;i<=n-1;i++)//冒泡排序从大到小
// {
//     for(j=1;j<=n-1-i;j++){
//     if(sum2[j]<sum2[j+1])
//     {
//         t=sum2[j];
//         sum2[j]=sum2[j+1];
//         sum2[j+1]=t;
//     }
    
//     }
// }

// printf("%.2lf %.2lf",sum1,sum2[1]);


//    return 0;
// }


// #include <stdio.h>
// int main()
// {
// int n;int sum=0;int add=0;
// scanf("%d",&n);
// int a[1001];int b[1001];
// for(int i=0;i<n;i++)
// {
//     scanf("%d",&a[i]);
// }
// for(int i=0;i<n;i++)
// {
// b[i]=a[i]-5;
// }
// for(int i=0;i<n;i++)
// {
//     if(b[i]==0)
//     add=add+5;
//      if(b[i]!=0)
//     add=add-5;
//     if(add<0){
//     printf("NO");
//     break;
//     }
//     else{
//     printf("YES");
//     break;}
// }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {

// int n,x;int sum=0;int i,j,t;
// int b[10001];
// scanf("%d%d",&n,&x);
// int a[100001];
// for(int i=1;i<=n;i++)
// {
//     scanf("%d",&a[i]);
	
// }
// int o=1;
// int max=0;
// for(int i=1;i<=n;i++)
// {
//    sum=sum+a[i];
// while(sum>x)
// sum=sum-a[o++];
// if(sum>max)
// max=sum;
// }
// printf("%d",max);
//     return 0;
// }


// #include<stdio.h>

// int n,x;
// int a[1010];

// int main()
// {
// 	scanf("%d%d",&n,&x);
// 	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	
// 	int l=1,res=0,ans=0;
// 	for(int i=1;i<=n;i++)
// 	{
// 		res+=a[i];
// 		while(res>x) res-=a[l++];
// 		if(res>ans) ans=res;
// 	}
// 	printf("%d",ans);
	
// 	return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int hw(int n) {//判定回文，
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
// 	int i;
	
// 	for(i=10000;i<=99999;i++) {
// 		if(hw(i))//否则判断是否回文和素数 
// 			printf("%4d  ",i);//输出每个回文质数 
// 	}
// 	return 0;
// }



// #include <stdio.h>
// int find(int arr[], int n) {
//     int sum = n*(n + 1)/2; //1~n的所有数字的和
//     int ret = 0; //
//     for (int i =0; i<n - 1; i++) {
//         ret+=arr[i];
//     }
//     return sum - ret; //这就是缺失的数字
// }

// int main() {
//     int N;
//     scanf("%d", &N); 
//     int arr[N - 1];
//     for (int i = 0; i < N - 1; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int ch = find(arr, N);
//     printf("%d",ch);

//     return 0;
// }


// #include<stdio.h>
// int main() {
// 	int t;
// 	scanf("%d", &t);
// 	while (t--) {
// 		int n;
// 		scanf("%d", &n);
// 		int num = n;
// 		int flag = 1;
// 		while (num) {
// 			if (num % 10 != 4 || num % 10 != 7) {
// 				flag = 0;
// 				break;
// 			}
// 			num /= 10;
// 		}
// 		int ans = 0;
// 		if (flag != 0) {
// 			printf("YeS\n");
// 			ans = 1;
// 		}
// 		if (ans == 0) {
// 			int res = 0;
// 			int s[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
// 			for (int i = 0; i < 14; i++) {
// 				if (n % s[i] == 0) {
// 					printf("YeS\n");
// 					res = 1;
// 					break;
// 				}
// 			}
// 			if (res == 0) {
// 				printf("No\n");
// 			}
// 		}
// 	}
// 	return 0;
// }






// #include <stdio.h>
// int main()
// {
// int t;int num;
//  int i=3;int cnt=0;
// scanf("%d",&t);
// for(int i=0;i<t;i++)
// {
// 	scanf("%d",&num);
  
	
// 	for(int i=3;;i+=2){
//        if(num%i==0){
// 	   cnt++;
// 	   }
// 	   if(num%i!=0&&num%(i+=2)!=0) cnt=0;
	     
	
// 		 if(cnt>0){
// 		printf("YES");
// 				break;}
// 		else{
// 		printf("NO");
// 			break;}
// 	}

// }


// 	return 0;
// }

// int prime(int x,int asci)
// {
// 	int c;int cnt=0;
// 	while(x)
// 	{
// 		c=x%10;
// 		if(c+48==asci)
// 		cnt++;
// 		x/=10;
// 	}
// 	return cnt;
// }

// #include <stdio.h>
// int main()
// {
// char ch;
// int asci=0;
// int n;
// int cnt=0;int mx=0;int mx_1=0;int mx_2=0;
// if(scanf("%c\n",&ch)!=' '||'\n');
// scanf("%d",&n);
// asci=(int)(ch);
// for (int  i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
// 			int c=i*j;
// 			// printf("%d*%d=%d", j, i, i * j);
// 			mx_1=mx_1+prime(j,asci);
// 		    mx_2=mx_2+prime(i,asci);
// 			mx=mx+prime(c,asci);
//         }
//         // printf("\n");
//     }
// printf("%d",mx_1+mx_2+mx);
// 	return 0;
// }


// #include <stdio.h>// 贪心算法
// int main()
// {

// int n,m;
// int sum=0;
// int cnt=0;
// int a,b;
// int add [n];
// int adw [n];
// scanf("%d%d",&n,&m);
// for(int i=0;i<n;i++)
// {
// 	scanf("%d%d",&a,&b);
// 	sum=sum+a;
// 	add[i]=b;
// 	adw[i]=a;
// }
// for(int i=0;i<n;i++)
// {
	
//  if(sum<=m)
// {
// 	printf("%d",cnt);
// }
// if(sum>m)//需要压缩,直到不满足
// {
//  add[i]=adw[i];
//  sum=sum+;
//  cnt++;
//  continue;
// }
// }

// 	return 0;
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


int main()
{
    char arr[20];
    for(int i=0;i<1;i++)
    scanf("%s",&arr[i]);
    reverse_string(arr);
    printf("%s",arr);

    return 0;
}


// #include <stdio.h>
// int main()
// {
//    int a[11];int t ;int i ,j ;
//    for(int i = 0 ; i< 10 ; i++)
//    {
//     scanf("%d",&a[i]);
//    }
//   for(i=0;i<5-1;i++)//低到高
//   {
//       for(j=0;j<5-1-i;j++)
//       {
//           if(a[j] > a[j+1])
//           {
//               t = a[j];
//               a[j] = a[j+1];
//               a[j+1] = t;
//           }
//       }
//   }
//     for(i=5;i<10-1;i++)//高到低
//      { 
//         for(j=5;j<10-1-i+5;j++)//
//         {
//           if(a[j] < a[j+1])
//           {
//               t = a[j];
//               a[j] = a[j+1];
//               a[j+1] = t;
//           }
//          }
//      }    
// for(int i =0 ; i< 10 ;i++)
// {
//     printf("%4d",a[i]);
// }
// return 0 ;



// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int cmp_int(const void*e1,const void*e2)//低到高
// {
//     //比较两个整形的数
//     return *(int*)e1-*(int*)e2;
// }
// int cmp_int2(const void*e1,const void*e2)//高到低
// {
//     //比较两个整形的数
//     return *(int*)e2-*(int*)e1;
// }

//     void test1()
// {
//      int a[5] ;
//      int b[5] ;
//      for(int i= 0; i <5;i++)
//      {
//         scanf("%d",&a[i]);
//      }
//      for(int i= 0; i <5;i++)
//      {
//         scanf("%d",&b[i]);
//      }
//     int sz = sizeof(b) / sizeof(b[0]);
//      int sv = sizeof(a) / sizeof(a[0]);
//     qsort(a,sv,sizeof(a[0]),cmp_int);
//     qsort(b,sz,sizeof(b[0]),cmp_int2);
//      for(int i=0;i<sv;i++)
//     {
//     printf("%4d",a[i]);
//     }
//     for(int i=0;i<sz;i++)
//     {
//     printf("%4d",b[i]);
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     test1();
//     // test2();
//     //  test3();
//     return 0;
// }


// struct stu
// {
//     char ID[11];
// char name [20];
// int score1;
// int score2;
// int score3;
// }a[1001];

// #include <stdio.h>
// #include  <string.h>
// int main()
// {

//    int ch;
   
  
//     for(int j=0;j<5;j++)
//     {
//         scanf("%s%s%d%d%d",&a[j].ID,&a[j].name,&a[j].score1,&a[j].score2,&a[j].score3);
//         getchar();
        
//     }
//     int max=0;int t;
//    for(int j=0;j<5;j++)
//    {
//     ch=a[j].score1+a[j].score2+a[j].score3;
//     if( max<ch){
//     max=ch;
//      ch=0;
//      t =j;
//     }
//    }
//  strcpy (a[t].name,"xueba");
//      ch=a[t].score1+a[t].score2+a[t].score3;

//     printf("%s %s %d %d %d %d",a[t].ID,a[t].name,a[t].score1,a[t].score2,a[t].score3,ch);

//     return 0;
// }
// int cnt =0;
// int fib (int n)
// {
//     cnt++;
//   if(n<=2)
//   return 1;
//   else 
//  return fib(n-1)+fib(n-2);


// }

// #include <stdio.h>
// int main()
// {
//     int n ;
//    scanf("%d",&n);
// int result = 0;
// result =fib(n);
// printf("%d",cnt);

     
//      return 0;
// }



// #include <stdio.h>
// #include <string.h>
//   char arr[100];
// int main()
// {
//     int n ; int cnt =0;int ret =0;
//     scanf("%d",&n);
//     getchar();
//     // char arr[100];
//     gets(arr);
//     int sz = strlen(arr);
//     cnt=0;ret=0;
//     if(sz<=n){
//    for(int i = 0; arr[i]!='\0'; i++)
//    {
        
//          if(arr[i]==' '){
//             ret++;
         
//          }
         
//    }
//     }
    
// printf("%d %d",sz,sz-ret);//字符串结尾处



//     return 0 ;
// }


// #include <stdio.h>
// int main()
// {
// printf("BDBCA\n");
//     return 0 ;
// }