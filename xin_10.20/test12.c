
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

#include <stdio.h>
#define N 8
int main()
{
int a[N][N];
int n;int i =0;
scanf("%d\n",&n);
int sum=0;int r=0;
for(i=0;i<n;i++)//循环输入 矩阵
{
  for(r=0;r<n;r++)
   scanf("%d",&a[i][r]);
}
int j=0;int z=0;
for(j=0;j<n;j++)
{
  sum=sum+a[j][0];//代表第一列矩阵数求和   
}
int b=0;
for(b=0;b<n-1;b++)
{
   sum=sum+a[0][b+1];//第一行和不包括第一项
}
int c=0;
for(c=0;c<n-1;c++)
{
   sum=sum+a[n-1][c+1];//第四行后三数
}
int d=0;
for(d=0;d<n-2;d++)
{
   sum=sum+a[d+1][n-1];
}
printf("%d",sum);
return 0;
}