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

//   int j=0;
//   for(int i=0;i<n;i++)
//   {
//   for(j=i;j>=0;j--)//倒序依次查找
//   {
// 	if(arr[j]>arr[i])//说明有
// 	count++;
//   }

//   }
// printf("%d ",count);
// 	return 0;
// }
// double size (double v)
// {
//     return (int)(v+0.4);
// }

// #include <stdio.h>
// #define PI  3.1415926
// int main()
// {
//   double r ;
//   scanf("%lf",&r);
//   double V;
//   V= 4/3.0*PI*r*r*r;
//   int v= size (V);
// printf("%d",v);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int x, n; int aw[10000]; int count=0; int i = 0;int c =0;
//     int flag =0;
//    scanf("%d%d",&x,&n);
//      int sum =n;
//     for(int i=0; ; i++)
//     {
//       sum=sum*n;
//       if(sum==x ){
//       flag=1;
//         break;
//       }
//       if(sum > x){
//       flag =0;
//       break;
//       }
//     }
//     while(x)
//     {
//         c= x % n;
//         aw[i] = c;
//         i++;
//         count++;
//         x/=n;
//     }
    
//   for(int i =count-1 ;i>=0 ; i-- )
//   {
//     printf("%d",aw[i]);
//   }
//   printf("\n");
//   if(flag==1)
//   printf("yes\n");
//   else
//   printf("no\n");
//     return 0;
// }

// int find (char a[], char b[],int n)
// {

// 	for (int i = 0; i < n; i++)
// 	{
// 		int j,k = i;
// 		for (j = 0; j < 7; j++)
// 		{
// 			//子串一直比较到结尾如果都符合就返回比较第一次的值
// 			if (a[k++] == b[j])
// 			{
// 				continue;
// 			}else{
// 				break;
// 			}
// 		}
// 		if (j == 7) //说明有这个了
//         return 1;
// 	}
//    return 0; //没有
	
// }

// #include <stdio.h>
// int main()
// {
// int n;
// scanf("%d",&n);
// char a [n];
// char b []={"kongxye"};
// char c []={"yq"};
// for(int i = 0 ; i<n ; i++)
// {
//     if(scanf("%c",&a[i])>'a' && scanf("%c",&a[i]) < 'z')
//     scanf("%c",&a[i]);
// }
 
//    if(find(a,b,n) && find(a,c,n))
//    {
//     printf("O.O");
//    }
//    if(find(a,b,n) && find(a,c,n)==0)
//    {
//     printf("o.O");
//    }if(find(a,b,n)==0 && find(a,c,n))
//    {
//     printf("O.o");
//    }if(find(a,b,n)==0 && find(a,c,n)==0)
//    {
//     printf("o.o");
//    }


//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[81]={0};
//     gets(str);//获取字符串
//     for(int i=0;i<81;i++){
//         if(str[i]>='A'&&str[i]<='Z'){
//             str[i]+=25-2*(str[i]-65);
//         }
//     }
//       printf("%s",str);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char ch [100];
// char t ;
// int n;
// gets(ch);
// int m =strlen(ch); 
// scanf("%d",&n);
// for(int i = 0 ; i<n ;i++)
// {

//    for(int j =0; j< m-1 ;j++)
//    {
//        char t =ch[j];
//        ch[j]=ch[j+1];
//        ch[j+1]=t;
//    }
// }
// for(int i =0; i < m ;i++)
// {
//    printf("%c",ch[i]);
// }
//    return 0;
// }


// #include <stdio.h>
// int a[52];int b [52];
// int main()
// {

//     int n ,m;
//     int cnt  = 1;
//    scanf("%d%d",&n,&m);
//    for(int i = 0 ;i < n ;i++)
//    {
//     scanf("%d",&a[i]);
//    }
//   for(int i = 0; i < n ; i++)
//   {
//   for(int j =0 ; j<n ;j++)
//   {
//      if(a[i]==a[j])
//      b[i]=cnt++;
//   } 
//   }
// for(int i =0 ; i< n ; i++)
// {

//     for(int j = i+1 ; j<n ;j++)
//     {
//         if(a[i]<a[j])
//         {
//             int t = a[i];
//             a[i] = a[j];
//             a[j] = t;
//         }
//     }
// }
// printf("%d",b[0]);

//     return 0;
// }




// #include <stdio.h>//蛇形矩阵
// int main()
// {
//   int n;int k=0;
//   int a[100][100];
// scanf("%d",&n);
// int start =0; int end =n-1;
// while(k<n*n)
// {
//  for(int i=start;i<=end;i++)//左到右
//  a[start][i]=++k;
//  for(int i=start+1;i<=end;i++)//从上到下
//  a[i][end]=++k;
//  for(int i=end-1;i>=start;i--)//从右到左
//  a[end][i]=++k;
//  for(int i=end -1;i>=start+1;i--)//从下到上
//  a[i][start]=++k;
// start++;end--;
// }


// //将矩阵转置
 
// for(int i=0;i<n;i++)
// {
//   for(int j=n-1;j>=0;j--)
//   {
//     printf("%3d",a[j][i]);
//   }
//   printf("\n");
// }

//   return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	int n,a[100][100];
// 	scanf("%d",&n);
// 	int i,j;
// 	int m=1;
// 	for(int k=0;k<n;k++)
// 	{
// 		for(i=0;i<n;i++)
// 		{
// 			j=k-i;
// 			if(j>=0)
// 			{
// 				a[i][j]=m;
// 				m++;
// 			}
// 		}
// 	}
// 	for(i=0;i<n;i++)
// 	{
// 		for(j=0;j<n-i;j++)
// 		{
// 			if(i+j==n-1)//就换行
// 				printf("%d\n",a[j][i]);
// 			else
// 				printf("%d ",a[j][i]);
// 		}
// 	}
//     return 0 ;
// }