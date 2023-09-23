// #include <stdio.h>

// int main()
// {
//     int arr[10]={0};
//     int sz =0;
//     printf("%d\n",sizeof(arr));
//     sz = sizeof(arr)/sizeof(arr[0]);
//     printf("%d\n",sz);

//     return 0;

// }

// #include <stdio.h>

// void test()
// {
//     int a =1;
//     a++;
//     printf("a= %d\n",a);
    
// }

// int main()
// {
//     int i =0;
//     while(i<10)
//     {
//         test();
//         i++;
//     }
//     return 0;

// }

// #include <stdio.h>
 
//  int main ()
//  {
//     char ch ='w';
//     char*pc=&ch;
//     *pc='c';
//     printf("%c\n",ch);

//     return 0;

//  }

#include <stdio.h>

int main ()
{
   char arr1[]="abcdef";
   char arr2[]= {'a','b','c','\0'};
   printf("%s\n",arr1);
   printf("%s\n",arr2);

   return 0;
}