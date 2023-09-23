//#include <stdio.h>
//
//#define MAX 100
//
//int main()
//{
    //int arr[MAX]={15};
  //  printf("%d\n",MAX);

//    return 0;
//}
//enum wink
//{
//    YELLOW,
 //   BULE,
  //  RED,
//};


// #include <string.h>
// int main ()
// {
//     printf("%c\n",'\x61');
//     char arr1[]="abc";
//     char arr2[]={'a','b','b',};
//     printf("%d\n",strlen (arr1));
//     printf("%d\n",strlen (arr2));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int input =0;
//    printf("加入比特\n");
//    printf("你要好好学习吗? (1/0)>:");
//    scanf("%d",&input );
//    if(input == 1)
//    printf("好的offer!\n");
//    else
//    printf("回家种地!\n");

//    return 0;
//  }

#include <stdio.h>
int main ()
{
  int line =0;
  printf("加入比特\n");

  while(line<20000)
  {
    printf(" 敲一行代码!%d\n",line);
    line++;
  }
  if(line>=20000)
  printf("好的offer!\n");

  return 0;
}