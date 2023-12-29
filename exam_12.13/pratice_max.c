// #include <stdio.h>
// int main()
// {
//     int m,n;int i=0;
//     scanf("%d%d",&m,&n);
//     int b[36];int a[6][6];
//     for(int  i = 0; i < (m*n); i++)
//     {
//     scanf("%d",&b[i]);
//     }
//     for(int j=0;j<m;j++)
//     {
      
//         for(int k=0;k<n;k++)
//         {
//             a[j][k]=b[i];
//             if(i<(m*n))
//             i++;
//         }
//     }  
   
//     printf("Before:\n");
// for(int j=0;j<m;j++)
//     {
      
//         for(int k=0;k<n;k++)
//         {
//            printf("%4d",a[j][k]);
//         }
//         printf("\n");
//     }  

   
//      printf("After:\n");
// for(int j=0;j<n;j++)
//     {
      
//         for(int k=0;k<m;k++)
//         {
//            printf("%4d",a[k][j]);
//         }
//         printf("\n");
//     }  
//     return 0;
// }


// #include <stdio.h>
// int main()
// {

// int n;
// scanf("%d",&n);
// int a[n][n];
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&a[i][j]);
//     }
// }
// for(int i=0 ; i<n; i++)
// {
//  int t=a[i][i];
//  a[i][i]=a[i][n-1-i];
//  a[i][n-1-i]=t;//规律
// }
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         printf("%d",a[i][j]);
//         if(j<n-1)
//         printf(" ");
//     }
//     printf("\n");
// }
    // return 0;
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


// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char a[101][11] = { 0 }, b[11] = {0};/////观赏性十足，漂亮的间距。、。、。、自己都爱了
// 	int n = 0, k = 0,i = 0,j = 0;
// 	scanf("%d %d", &n, &k);
// 	for (i = 0;i < n;i++) {
// 		scanf("%s", &a[i]);
// 	}
// 	for (i = 0;i < k;i++) {
// 		for (j = 0;j < n - i - 1;j++) {
// 			if (strcmp(a[j], a[j + 1]) > 0) {
// 				strcpy(b, a[j]);
// 				strcpy(a[j], a[j + 1]);
// 				strcpy(a[j + 1], b);
// 			}
			
// 		}
// 	}
// 	for (i = 0;i < n;i++) 
//     {
// 		printf("%s\n", a[i]);
// 	}
// 	return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define N 5
//  int cmp_float(const void*e1,const void*e2)
// {
//     //比较两个浮点数的数
//     return (int)(*(float*)e2-*(float*)e1);
// }
// void test1()
// {
//      float arr [N]; float sum = 0.0; float ave = 0.0;
// 	 for(int i=0;i<N;i++)
// 	{
// 	 scanf("%f",&arr[i]);
// 	}
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     qsort(arr,sz,sizeof(arr[0]),cmp_float);
//     for(int i=0;i<sz;i++)//求平均值
// 	{
//      sum = sum + arr[i];
// 	}
// 	ave = sum / 5.0;
    
//     printf("%.3g ",arr[0]);
//     printf("%.3g ",arr[4]);
// 	printf("%.3g ",ave);
// }
// int main()
// {
//   test1();
// 	return 0;
// }


// #include <stdio.h>
// int main()
// {
// int a[7];
// for(int i=0;i<7;i++)
// {
// 	scanf("%d",&a[i]);
// }


// for(int i=0;i<7-1;i++)
// {
// 	for(int j=i+1;j<7+1;j++)
// 	{
// 		if(a[j]>a[i])
// 		{
// 			int t=a[j];
// 			a[j]=a[i];
// 			a[i]=t;
			
// 		}
	
// 	}
// 	for(int k=0;k<7;k++)
// 	{
// 		printf("%d ",a[k]);
// 	}
// 	printf("\n");
// }



// 	return 0;
// }


// #include <string.h>
// #include <stdio.h>
// void reverse_string(char*arr)
// {
//  char tem=arr[0];
//  int len =strlen(arr);
//  arr[0]=arr[len-1];
//  arr[len-1]='\0';
//  if(strlen(arr+1)>=2)
//   reverse_string(arr+1);
//  arr[len-1]=tem;
// }


// int main()
// {
//     char arr[20];
//     for(int i=0;i<1;i++)
//     scanf("%s",&arr[i]);
//     reverse_string(arr);
//     printf("%s",arr);

//     return 0;
// }
// int run (int year)//闰年的一个判断
// {
// 	return (year%400==0||(year%4==0&&year%100!=0));
// }


// #include  <stdio.h>
// int main()
// {

//  	int year ,month, day1;
// 	int day=0;;
//  	scanf("%d%d%d",&year,&month,&day1);
// 	int nowdays=0;
	
//    switch(month)
//    {
// 	case 12:
// 	day =day + 31;

// 	case 11:
// 	day =day + 30;

// 	case 10 :
// 	day = day + 31;

// 	case 9 :
// 	day =day + 30 ;

// 	case 8:
// 	day = day + 31;

// 	case 7:
// 	day = day + 31;

// 	case 6 :
// 	day = day + 30;

// 	case 5:
// 	day =day +31;

// 	case 4:
//     day =day + 30;

// 	case 3:
// 	day = day + 31;

//      case 2 :
//  	day = day + 28;

// 	case 1 :
// 	day =day +day1;
	
//    }
//    if(run (year))
//    {
// 	day++;
//    }
// printf("%d",day);
// 	return 0;
// }

 

//  #include <stdio.h>
// 	int main()
// {
// 	int n;
// 	float sum = 0.0, a=2, b=1;   
// 	scanf("%d",&n);
// 	for(int i=1;i<=n;i++)//两个斐波那契数列
// 	{
// 		sum = sum + b/a;
// 		a = a + b;
// 		b = a - b;
// 	}
// 	printf("%.5f", sum);

// 	return 0;
// // }
// void bulle_sort(double arr[],int sz)
// {
// 	int i=0;
// 	for( i=0 ; i< 5-1; i++)
// 	{
// 		int j=0;
// 		for(j = 0; j<5-1-i ; j++)
// 		{
// 			if (arr[j] > arr[j+1])
// 			{
// 				double t = arr[j];
// 				arr[j] = arr[j+1];
// 				arr[j+1] = t;
// 			}
// 		}
// 	}
// }


// #include <stdio.h>
// #define N 5
// int main()
// {
//     double arr[N];double sum=0.0;
// 	double ave =0.0;
// 	int sz = 5;
// 	for(int i=0;i<5;i++)
// 	{
// 		scanf("%lf",&arr[i]);
// 	}
//    bulle_sort(arr,sz);
   
// for(int i=0;i<5;i++)
// 	{
		
// 		sum = sum + arr[i];
// 	}
//    ave = sum / 5.0;
//    printf("%.3g %.3g %.3g",arr[4],arr[0],ave);
// 	return 0;
// }

