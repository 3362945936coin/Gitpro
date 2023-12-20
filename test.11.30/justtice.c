// #include <stdio.h>
// int main()
// {
//  int a[10001];
//  int sum,num;
//  int begin=0,end=0;//区间
//  int cnt =0;
//  scanf("%d%d",&sum,&num);
//  for(int i=0;i<=sum;i++)
// {
//     a[i]=1;//全部赋值 为一，代表有这么多个树
// }
// for(int k=0;k<num;k++){
//     scanf("%d%d",&begin,&end);
//  for(int j=begin;j<=end;j++)
//  {
//     a[j]=0;//代表我拿走了
//  }
// }

// for(int i=0;i<=sum;i++)
// {
//     if(a[i])
//     cnt++;
// }

// printf("%d",cnt);


//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// int n;//number
// scanf("%d",&n);
// int a[n][n];
// int sum[10001];
// int cnt=0;
// for(int i=0;i<n;i++)
// {
//   scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);//输入每个同学成绩，并求和存入；
//   sum[i]=a[i][0]+a[i][1]+a[i][2];
// }
// for(int i=0;i<n;i++)//做判断
// {
// for(int j=i+1;j<=n;j++)
// {
//   if(abs(a[i][0]-a[j][0])<=5 && abs(a[i][1]-a[j][1])<=5 && abs (a[i][2]-a[j][2])<=5 && abs (sum[i] - sum[j]) <= 10 )
//   cnt++;
// }
// }

// printf("%d",cnt);


//     return 0;
// }


// int count_bit_one(int n)//二进制中1的个数
// {
//   int count =0;
//   while(n)
//   {
//     n=n&(n-1);
//     count++;
//   }
//   return count;
// }



// int get_diff_bit(int m,int n)
// {
//   int tem=m^n;
//   return count_bit_one(tem);
// }

// #include <stdio.h>
// int main()
// {
//  int m,n;
//  scanf("%d%d",&m,&n);
//  int  count= get_diff_bit(m,n);
// printf("%d",count);


// }

 
  
// struct stu
// {
// char name [20];
// int score1;
// int score2;
// int score3;
// }a[1001];

// #include <stdio.h>
// #include <math.h>
// int main()
// {

//    int n;int sum [10001];
//    scanf("%d",&n);
  
//     for(int i=0;i<n;i++)
//     {
//         scanf("%s%d%d%d",&a[i].name,&a[i].score1,&a[i].score2,&a[i].score3);
//          sum[i] = a[i].score1+a[i].score2+a[i].score3;
//     }
    
   
// for(int i=0;i<n;i++)
// {
//   for(int j=i+1;j<=n;j++)
//   {
//     if(abs(a[i].score1-a[j].score1)<=5 && abs(a[i].score2-a[j].score2)<=5 && abs( a[i].score3-a[j].score3 )<=5 && abs (sum[i]-sum[j]) <= 10 ){
//         if(a[i].name > a[j].name)//判断字典序
//          printf("%s %s\n",a[j].name,a[i].name);//字典序小的在前面
//          else  printf("%s %s\n",a[i].name,a[j].name);
//     }
// }
// }


//     return 0;
// }

// #include <stdio.h>
// #define N 2000
// int n;
//  int add [N][N];
// void ring (int,int,int);//函数声明
// int main()
// {

// scanf("%d",&n);
// n=(1<<n);
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<n;j++)
//   {
//    add[i][j]=1;
//   }
// }
// //缩圈
// ring(0,0,n);
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<n;j++)
//   {
//     printf("%d ",add[i][j]);
//   }
//   printf("\n");
// }

//   return 0;
// }


// void ring(int x,int y,int d)
// {

//   if(d==1) return ;
//   for(int i=x;i<x+(d/2);i++)
//   {
//     for(int j=y;j<y+(d/2);j++)//左上方清零
    
//       add[i][j]=0;
    
//   }
//   //递归重复
//   ring(x+(d/2),y,d/2);
//   ring(x,y+(d/2),d/2);
//   ring(x+(d/2),y+(d/2),d/2);

// }


// #include <stdio.h>
// int main()
// {
//  int m,n;int cnt ;
//  scanf("%d",&n);
//  int ad[1001];//中奖号码
// int dd[10]={0};//1.2.3.。。几等奖
//  for(int i=1;i<=7;i++)
//  {
//   scanf("%d",&m);
//   ad[m]=1;
//  }

// for(int i=1;i<=n;i++)//个人购买彩票张数号码
// {
//   cnt=0;
//   for(int j=1;j<=7;j++)
//   {
//     scanf("%d",&m);
//     if(ad[m]==1)
//     cnt++;
//   }
//   dd[cnt]++;
  
// }

// for(int i=0;i<=6;i++)
// {
//   printf("%d ",dd[i]);
// }


//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//  double a;
//  int temp[2000001];
//  int n;int t;
//  scanf("%d",&n);
// for(int i=1;i<=n;i++)
// {
//   scanf("%lf%d",&a,&t);
//   for(int j=1;j<=t;j++)//开灯范围
//   {
//    if(temp[(int)(a*j)]==0)//如果灯关就开反之泽凡
//    temp[(int)(j*a)]=1;
//    else 
//     temp[(int)(j*a)]=0;
//   }
// }

// for(int i=1;;i++)
// {
//   if(temp[i]==1)
//   {
//     printf("%d",i);
//   break;
//   }
// }


//   return 0;
// }

// #include <stdio.h>//插火把
// int main()
// {
// int n,m,k;
// int x1,x2,y1,y3;
// int cnt=0;
// scanf("%d%d%d",&n,&m,&k);
//  int a[105][105]={0};

//  for(int i=1;i<=m;i++){
//   scanf("%d%d",&x1,&y1);
//   for(int j=x1-1;j<=x1+1;j++)//火把
//   {
//     for(int k=y1-1;k<=y1+1;k++)
//     {
//       a[j][k]=1;
//       a[x1-2][y1]=1,a[x1+2][y1]=1,a[x1][y1-2]=1,a[x1][y1+2]=1;
//     }
    
//   }
//  }

//  for(int i=1;i<=k;i++)//萤石
//  {
//  scanf("%d%d",&x1,&y1);
//  for(int j=x1-2;j<=x1+2;j++)
//   {
//     for(int k=y1-2;k<=y1+2;k++)
//     {
//       a[j][k]=1;
//     }
//   }
//  }
 

// for(int i=1;i<=n;i++)
// {
//   for(int j=1;j<=n;j++)
//   {
//    if(a[i][j]==0)
//     cnt++;
//   }
// }
// printf("%d",cnt);





//   return 0;
// }
// int run (int year)//闰年的一个判断
// {
// 		return (year%400==0||(year%4==0&&year%100!=0));
// }

// #include <stdio.h>
// int main()
// {
// int year =1777;
// int month =4;
// int day =30;
// int num;
//  scanf("%d",&num);
// for(int i=0;i<num;i++)
// {
// 	day++;//每经过一天
// 	if(month==12 && day==32)//大于本月天数
// 	{
// 		year++;
// 		day=1;
// 		month=1;
// 		continue;
// 	}
// 	if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&day==32)
// 	{
		
// 		month++;
// 		day=1;
// 		continue;
// 	}
// 	if((month==4||month==6||month==9||month==11)&&day==31)
// 	{
		
// 		month++;
// 		day=1;
// 		continue;
// 	}
// 	if(month==2&&run(year)&&day==30)
// 	{
		
// 		month++;
// 		day=1;
// 		continue;
// 	}
// 	if(month==2&&run(year)==0&&day==29)
// 	{
		
// 		month++;
// 		day=1;
// 		continue;
// 	}
// }


// printf("%d/%02d/%02d",year,month,day-1);

// 	return 0;
// }
/*高斯日记*/ 

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	int flag = 0, n0, n1, n, mi = 99999, girl = 0;
// 	scanf("%d%d%d",&n0,&n1,&n);
// 	for(int i = 1; i < n && i < n0 && (n-i) < n1; ++i)
// 	{
// 		if(n0 % i == 0 && n1 % (n-i) == 0){
// 			flag = 1;
// 			int mx = abs(n0/i - n1/(n-i));//人数差
// 			if(mx < mi)
// 			{
// 				mi = mx;
// 				girl = i;
// 			}
// 		}
// 	}
//     if(flag)
// 	printf("%d %d",girl,n-girl);
// else
// printf("No Solution");


// #include <stdio.h>
// int main()
// {
// double stu[3][6];
// double sum1,sum2, sum3=0.0;
// double ave1, ave2,ave3, ave4, ave5, ave6,ave7,ave8,ave9=0.0;
// double sum4=0.0;double sum5=0.0;double sum6=0.0;
// double sum7,sum8,sum9=0.0;
// for(int i=0 ; i<3 ; i++)
// {
// 	for(int j=0 ; j<6 ; j++)
// 	{
// 		scanf("%lf",&stu[i][j]);
// 	}
// }
// for(int i=0 ; i<3 ; i++)
// {
// 		sum4=sum4+stu[i][0];
// 		sum5=sum5+stu[i][1];
// 		sum6=sum6+stu[i][2];
// 		sum7=sum7+stu[i][3];
// 		sum8=sum8+stu[i][4];
// 		sum9=sum9+stu[i][5];
// }
// 	for(int j=0 ; j<6 ; j++)
// 	{
	
// 		sum1=sum1+stu[0][j];
// 		sum2=sum2+stu[1][j];
// 		sum3=sum3+stu[2][j];
		
// 	}


// ave1=sum1/6.0;
// ave2=sum2/6.0;
// ave3=sum3/6.0;

// ave4=sum4/3.0;
// ave5=sum5/3.0;
// ave6=sum6/3.0;
// ave7=sum7/3.0;
// ave8=sum8/3.0;
// ave9=sum9/3.0;
// printf("%.2f %.2f %.2f\n",ave1,ave2,ave3);
// printf("%.2f %.2f %.2f %.2f %.2f %.2f",ave4,ave5,ave6,ave7,ave8,ave9);

// 	return 0;
// }


#include <stdio.h>
int main()
{
	int n;int min=0;int m;
	scanf("%d%d",&n,&m);
 	int a[n][m];int arr2[50]={0};
	for(int i = 0 ; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
for(int i = 0 ; i < n; i++)
	{
		min=0;
		for(int j = 0; j < m; j++)//每行
		{
            
			if( a[i][j] < a[i][min]){
			min = j;
			arr2[i] = j;
						}
		}

	}
	printf("一维数组arr2:");
	
for(int i=0;i<n;i++)
{
	printf("%d ",arr2[i]);
}


	return 0;
}



