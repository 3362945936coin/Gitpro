// #include <stdio.h>//两点距离！
// #include <math.h>
// int main()
// {
//   float  x1,y1,x2,y2,a;
//  scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
//  float t1=x1-x2;
//  float t2=y1-y2;
//  a=sqrtf(t1*t1+t2*t2);
//  printf("%.2f",a);
//     return 0;
//  }
#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c;
  float d,x1,x2;
  scanf("%f %f %f",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>0.0&&a!=0)
  {
  x1=(-b+sqrtf(d))/(2*a);
  x2=(-b-sqrtf(d))/(2*a);
  printf("%.2f %.2f",x1,x2);}
  else
  {
    printf("无解");
  }
    return 0;
}
