
// #include <stdio.h>
// int main()
// {
// 	int s, v, t, temp;
// 	int hour, minute;
	
// 	scanf("%d %d", &s, &v);
	 
// 	if (s % v == 0)        //向上取整 
// 	{
// 		t = s / v + 10;
// 	}
	
// 	else
// 	{
// 		t = s / v + 11;
// 	}	
	
// 	if (t <= 480)          
// 	{
// 		temp = 8 * 60 - t;
// 		hour = temp / 60;
// 		minute = temp % 60;
// 	}
	
// 	else
// 	{
// 		temp = t - 8 * 60;
// 		hour = 24 - temp / 60 - 1; 
// 		minute = 60 - temp % 60;
// 	}
 
// 	printf("%02d:%02d", hour, minute);
	
// 	return 0;
// }
// #include <stdio.h>
//  void mao (int arr[],int sz)
//  {
// 	int i=0;
// 	for(i=0;i<sz-1;i++)
// 	{
// 		int flag=1;//假设一趟排序已经有序
// 		int j=0;
// 		for(j=0;j<sz-1-i;j++)
// 		{
// 			if(arr[j]>arr[j+1])
// 			{
// 				int temp =arr[j];
// 				arr[j]=arr[j+1];
// 				arr[j+1]=temp;
// 				flag=0;//表示一趟排序不完全有序
// 			}
// 			if(flag==1)
// 			{
// 				break;
// 			}
// 		}
// 	}
//  }
 
// #include <stdio.h>//冒泡排序！！！！！
// int main()
// {
//   int arr[]={0,1,2,3,4,5,6,7,8,9};
//   int sz=sizeof(arr)/sizeof(arr[0]);//元素个数
//   int i=0;
//   mao(arr,sz);
//   for(i=0;i<sz;i++)
// {
// 	printf("%d ",arr[i]);
// }
// 	return 0;
// }

// #include <stdio.h>//平均成绩！！1
// int main()
// {
//    double arr[10];
//    int i=0; double sum=arr[0];
//    double Avg;
//    double n;
//    printf("\n");
//    scanf("%lf",&n);
//    for(i=0;i<n;i++)
//    {
// 	scanf("%lf",&arr[i]);
//    sum=sum+arr[i];
//    }
//   Avg=sum/n;
//  printf("Avg=%.2f",Avg);
// 	return 0;
// }

// #include <stdio.h>//矩阵求和
// #define N 8
// int main()
// {
// int a[N][N];
// int n;int i =0;
// scanf("%d\n",&n);
// int sum=0;int r=0;
// for(i=0;i<n;i++)//循环输入 矩阵
// {
//   for(r=0;r<n;r++)
//    scanf("%d",&a[i][r]);
// }
// int j=0;int z=0;
// for(j=0;j<n;j++)
// {
//   sum=sum+a[j][0];//代表第一列矩阵数求和   
// }
// int b=0;
// for(b=0;b<n-1;b++)
// {
//    sum=sum+a[0][b+1];//第一行和不包括第一项
// }
// int c=0;
// for(c=0;c<n-1;c++)
// {
//    sum=sum+a[n-1][c+1];//第四行后三数
// }
// int d=0;
// for(d=0;d<n-2;d++)
// {
//    sum=sum+a[d+1][n-1];
// }
// printf("%d",sum);
// return 0;
// }
// #include <stdio.h>
// int main()
// {
//  int m,t,s;
//  int old=0;
//  scanf("%d %d %d",&m,&t,&s);
// old=s/t;//S时间下吃的苹果数量
// if(t==0)//V代表被0整数，不存在



// {
//    printf("%d",m);
   
// }
//  if(s%t==0)// 吃的完
// {
//    printf("%d",m-old);
   
// }
//  else //(s%t!=0)//吃不完，剩下了半个残缺
// {
//  printf("%d",m-old-1);
// }
//    return 0;
// }


// #include <stdio.h>
// int main()
// {
// int day=0;
// int i=0;
// int a,b;//分别代表上课时间和妈妈带补习班时间
// int answer;
// for(i=1;i<=7;i++)//循环输入七次
// {
// scanf("%d%d",&a,&b);
// if(a+b>8&&a+b>day)//代表最难受的一天
// {
//   day=a+b;
//   answer=i;
// }
// }
// if(day<8)
// {
//    printf("0");
// }
// else
// {
// printf("%d\n",answer);
// }
//  return 0;
// }




// struct stu
// {
// char name [20];
// int score1;
// int score2;
// int score3;
// }a[1001];

// #include <stdio.h>

// int main()
// {

//    int n;int ch;
//    scanf("%d",&n);
  
//     for(int j=0;j<n;j++)
//     {
//         scanf("%s%d%d%d",&a[j].name,&a[j].score1,&a[j].score2,&a[j].score3);
//         getchar();
        
//     }
//     int max=0;int t=0;
//    for(int j=0;j<n;j++)
//    {
//     ch=a[j].score1+a[j].score2+a[j].score3;
//     if( max<ch){
//     max=ch;
//      ch=0;
//      t =j;
//     }
//    }
   

//     printf("%s %d %d %d",a[t].name,a[t].score1,a[t].score2,a[t].score3);

//     return 0;
// }

// void print2(int(*p)[5],int x,int y)
// {
//     int i=0;
//     for(i=0;i<x;i++)
//     {
//         int j=0;
//         for(j=0;j<y;j++)
//         {
//             printf("%d",*(*(p+i)+j));
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main()
// {
 
//   int a[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//   print2(a,3,5);


//     return 0;
// }

// void print (char*str)
// {
//     printf("%s\n",str);
// }


// #include <stdio.h>
// int main()
// {

//     void (*p)(char*)=print;
//     (*p)("CS GO!");//*为函数地址，后面为传参类型
//     return 0;
// }


// #include <stdio.h>
// int add (int x,int y)
// {
//     return x+y;
// }


// void cell (int(*pf)(int x,int y))
// {
//     int x,y;
//     scanf("%d%d",&x,&y);
//     printf("%d",pf(x,y));
// }

// #include <stdio.h>
// int main()
// {
//     int x,y;
//     int n;
//     do
//   {  scanf("%d",&n);
    
// switch(n)
// {
// case 1:
// cell(add);
// break;
// case 0:
// break;


// }
// }while(n);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main()
// {
//    int m,n;int c,d;
//    int cnt =0;
//    char a[81];
//    char b[81];
//    gets(a);
//    gets(b);
//    m = strlen(a);
//    n = strlen(b);
//    if(m>n){
// 	for(int i = 0; i < m; i++)
// 	{
// 		 if(a[i] == b[i])
// 		 {
// 			cnt++;
// 		 }
// 		 else
// 		 {
// 			printf("%d",abs(a[i]-b[i]));
// 			break;
// 		 }
// 	}
//    }
//    if(m<n)
//    {
// 			for(int i = 0; i < n; i++)
// 	{
// 		 if(a[i] == b[i])
// 		 {
// 			cnt++;
// 		 }
// 		 else
// 		 {
// 			printf("%d",abs(a[i]-b[i]));
// 			break;
// 		 }
// 	}

//    }
//    if(n==m)
//     printf("0");
      
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
// int n,m;int a[101];int i;
// while(scanf("%d%d",&n,&m)!=EOF)
// {
// 	if(n==0 &&n==0)
// 	break;
// for( i =0 ; i<n ; i++)
// {
// 	scanf("%d",&a[i]);
// }
// for( i =n-1; i>=0 ;i--)
// {
// 	if(a[i]>m)
// 	a[i+1]=a[i];
// 	else
// 	break;
// }
// a[i+1]=m;
// for(int i =0 ;i < n+1; i++)
// {
// printf("%d",a[i]);
// if(i<n)
// printf(" ");
// }
// printf("\n");
// }
// 	return 0; 
// }

	#include <stdio.h>
	int main()
	{

   int n ,k,a,b;
   scanf("%d%d%d%d",&n,&k,&a,&b);
   int t1 =0;
   int t2= 0;
    t1=(n-1)*a;//步行
    t2= (k-1)*b+(n-1)*b;
   if(t1==t2)
   printf("0");
   if(t1>t2)
   printf("1");
   if(t1<t2)
   printf("2");

		return 0;

	}