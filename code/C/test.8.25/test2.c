// #include <stdio.h>//简便

// int main()
// {
//     int a;
//     int b;
//     scanf("%d%d",&a,&b);
//     printf("%d+%d=%d\n",a,b,a+b);

//    return 0;
// }

// #include <stdio.h>

// int Add(int x,int y)
// {
//     int z=x+y;
//     return z;
// }

// int main()
// {
//     int num1 = 10;
//     int num2 = 20;
//     int sum =0;
//     int a= 200;
//     int b=300;
//     sum =Add(num1,num2);
//     sum =Add(a,b);
//        sum =Add(2,3);
//     printf("sum =%d\n",sum);

//     return 0;
// }

// #include <stdio.h>// 找最大值。
// int main ()
// {
//     int a=100;
//     int b =200;
//     int c=0;
//     c=a>b? a:b;
//     printf("%d\n",c);
     
//      return 0;

// } 
  


// #include <stdio.h>//函数式加法。
// int Add (int x,int y)
//   {
//     int z=x+y;


//     return z;

//   }



// int main ()
// {
//    int a;
//    int b;
//    int c=0;
    
// printf("请输入两个数\n");
//   scanf("%d%d",&a,&b);
//     c=Add(a,b);
//     printf("%d\n",c);

//     return 0;

// }

// #


// #include <stdio.h>
// #include <string.h>
// struct Book
// {
//     char name[41];
//     short price;
// };

// int main ()
// {
// struct Book a1={"C语言程序设计",100};
// strcpy(a1.name,"C++");
// // struct Book *pb=&a1;
// printf("书名:%s\n",a1.name);
// printf(" 价格:%d\n",a1.price);
// // a1.price=10000;
// // printf("修改后的价钱%d\n",a1.price);·

// return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a =1;
//     while(a<=100)
//     {
//         if(a==20)
//         break;
//         printf("%d\n",a);
//         a++;
//     }

//     return 0;

// }

#include <stdio.h>

int main ()
{
    int ch =0;
    //EOF是文件结束标志
    while((ch =getchar()) !=EOF)
    {
        printf("%c\n",ch);

    }
   
return 0;
}
