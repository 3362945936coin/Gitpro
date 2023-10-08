// #include <stdio.h>

// int main ()
// {   
//     int day =0;
//     scanf("%d",&day);
//     switch(day)
//     {
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//         printf("工作日\n");
//         break;
//         case 6:
//         case 7:
//         printf("休息日\n");
//         break;




//     }





//     return 0;
// }

// #include <stdio.h>//小飞机for循环高级玩法！！！

// int main ()
// {
//     for (int i=0;i<2;i++)
//     printf("     **\n");
//     for (int i=2;i>=2&&i<4;i++)
//     printf("************\n");
//     for (int i =4;i>=4&&i<6;i++)
//     printf("    *  *\n");
    
    

//     return 0;
// }
// #include <stdio.h>
// int main ()
// {
//     int a,b,c,e,f,g;
    
//     scanf("%d %d %d %d %d %d",&a,&b,&c,&e,&f,&g);
    
//    printf("%d,%d,%d,%d,%d,%d\n%d   %d   %d   %d   %d   %d",a,b,c,e,f,g,a,b,c,e,f,g);
// return0
// #
// #include <stdio.h>//取余 打印逆序数！
// int main()
// {
//     int a,b,c,d;
//     scanf("%d",&a);
//     b=a%10;
//     c=a/10%10;
//     d=a/100%10;
// printf("%d%d%d\n",b,c,d);


//     return 0;
// }
// #include <stdio.h>
// int main ()
// {
//   int a ;
//   scanf("%d",&a);
//   printf("%d\n",a);
//   printf("*00000%o*\n",a);
//   printf("*%o     *\n",a);


//     return 0;

// }
// #define PI 3.1415926
// #include <stdio.h>
// int main ()
// {

//     int r ,h;
//     scanf("%d %d",&r,&h);
//     printf("%.2f %.2f %.2f %.2f",2*PI*r,PI*r*r,2*PI*r*h,PI*r*r*h);
    
//     return 0;

// }
//计算机语言 计算剩下的钱取余%号！

// #include <stdio.h>//阶乘@
// int main ()
// {
  
//   int n=0 ;
//   int i=0;
//   int Sn;
//   scanf("%d",&n);
//   for(i=1;i<=n&&n>=1&&n<=20;i++)
//   {
//    i=i*n;
//    Sn=i+Sn;
//   }
//   printf("%d\n",Sn);
// return 0;
// }

// #include <stdio.h>//新
// int main()
// {
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int k=17;
//    int sz =sizeof(arr)/sizeof(arr[0]);//计算元素个数。
//    int left =0;//左下标。
//    int right = sz-1;//右下标。
//    while(left<=right)
//    {
//     int mid =(left+right)/2;
//      if(arr[mid]>k)
//      {
//       right =mid -1;
//      }
//      else if (arr[mid]<k)
//      {
//       left = mid+ 1;
    
//      }
//     else 
//     {
//       printf("找到了,下标是%d\n",mid);
//       break;
//     }
// if (left>right)
// {
//   printf("找不到\n");
// }

//    }

//   return 0;
// }
// #include <stdio.h>
// #include <string.h>
// // #include <windows.h>//头文件sleep
// int main()
// {
//   char arr1[]="welcome to China!!!!!";
//   char arr2[]="*********************";
//   int left =0;
//   //int right =sizeof(arr1)/sizeof(arr1[0])-2;
//   int right =strlen(arr1)-1;
//   while (left<=right)
//   {
//   arr2[left]=arr1[left];
//   arr2[right]=arr1[right];
  
//   printf("%s\n",arr2);
//   Sleep(1000);
  
//   left++;
//   right--;

//   }
   
//   return 0;

// }
