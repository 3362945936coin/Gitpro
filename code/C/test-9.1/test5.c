// #include <stdio.h>
// #define MAX 10
// int main ()
// {
//     int arr[MAX]={15};
//     printf("%d\n",MAX);

//     return 0;
// }


// int MAX (int x, int y)
//    {
//     if(x>y)
//    return x;
//    else
//    return y;
//    }
//    #include <stdio.h>
//    int main()
//    {
//      int c=0;
//      int  a=1;
//      int b=2;
//      c=MAX(a,b);
//      printf("max=%d\n",c);

//     return 0; 
//    }

#include <stdio.h>
#include "max.h"
int main()
{
  int a=10;
   int b=20;
   int c=MAX(a,b);
   printf("%d\n",c);
    return 0;
}