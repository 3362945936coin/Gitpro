#include <stdio.h>//上学迟到问题
#include <math.h>
int main()
{
   double s,v,t;//速度和路程；
   int  hour,minute,temp;
   int time =10;//分钟
   int sum;
   int add=480;
   scanf("%lf%lf",&s,&v);
  int time2=(int)ceil(s/v);//走的时间
  t=(add-sum);
sum=time+time2;//总共需要的时间
if (t <= 480)          
	{
		temp = 8 * 60 - t;
		hour = temp / 60;
		minute = temp % 60;
	}
	
	else
	{
		temp = t - 8 * 60;
		hour = 24 - temp / 60 - 1; 
		minute = 60 - temp % 60;
	}
printf("%02d:%02d",hour,minute);
   return 0;
}


// #include <stdio.h>
// int main()
// {
// 	int s, v, t, temp;
// 	int hour, minute;
	
// 	scanf("%d %d", &s, &v);
	 
// 	if (s % v == 0)        //向上取整 
// 	{
// 		t = s / v + 10;
// 	}
	
// 	else
// 	{
// 		t = s / v + 11;
// 	}	
	
// 	if (t <= 480)          
// 	{
// 		temp = 8 * 60 - t;
// 		hour = temp / 60;
// 		minute = temp % 60;
// 	}
	
// 	else
// 	{
// 		temp = t - 8 * 60;
// 		hour = 24 - temp / 60 - 1; 
// 		minute = 60 - temp % 60;
// 	}
 
// 	printf("%02d:%02d", hour, minute);
	
// 	return 0;
// }