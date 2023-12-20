// #include <stdio.h>
// int main()
// {   
// //     int t ;
// //     int a, b, n;
// //     int ret =0;
// //     int a[1001];
// //    scanf("%d",&t);
// //     for(int i=0 ;i < t ; i++)
// //     {
// //         scanf("%d%d%d",&a,&b,&n);
// //     }
     


//     return 0;
// }
// void bulle_sort(int a[],int n)
// {
//     for(int i = 0 ; i<n-1 ; i++)
//     {

//         for(int j = 0; j< n - 1 - i ; j++)
//         {
//             if(a[j+1]<a[j])
//             {
//                 int t = a[j+1];
//                 a[j+1] = a[j];
//                 a[j] = t;
//             }
//         }
//     }
// }



// #include <stdio.h>
//  int a[100001];
// int main()
// {
//   int n; 
//  int ret =0;int cnt =0;
//  int k,ks;
//   int flag =0;//摆不摆
//   scanf("%d",&n);
//   for(int i = 0; i< n ; i++)
//   {
//     scanf("%d",&a[i]);
//   }

// int j=1;
//   if(flag == 0)//摆
//   {
//     for(int i = 0 ;i < n-1; i++)
//     {
        
//             k= a[i]%j;
//             ks = a[i+1]%j; 
//             if(k == ks && j<a[n-1]){
//             ret++;
//            j++;
            
//             }    
        
//     }
//     if(ret>0)
//    printf("YES\n");
//     else
//      printf("NO\n");

//   }
//    else//不摆
//    {
//     for(int i = 0 ;i < n-1; i++)
//     {
//             if(a[i]==a[i+1])
//             cnt++;
//     }
//      if(cnt==n-1)
//      printf("YES\n");
//      else
//      printf("NO\n");

//    }
//     return 0;
// }
#include <stdio.h>
#include <math.h>
const int N =1e9+7,t=1e+10;
long long arr[t],brr[t];
int main()
{
int n,m;
int q,l,r;
scanf("%d%d",&n,&m);
brr[0] = arr[0] = m;
for(int i = 1; i <= n ; i++)
{
   brr[i]= brr[i - 1] * 4 % N;
   arr[i]= brr[i] + arr[i - 1];
   arr[i]=arr[i] % N;
}
scanf("%d",&q);
while(q--)
{
    scanf("%d%d",&r,&l);
    printf("%d"((arr[r]-arr[l])+N)%N);
    printf("\n");
}

    return 0;
}