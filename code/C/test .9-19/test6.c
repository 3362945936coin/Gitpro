// 
// #include<stdio.h>//写法二，
// int main()
// {
// 	char s = 0;
// 	int i = 0, k = 0;
// 	scanf("%d%c%d", &i,&s,&k);
// 	switch (k)
// 	{
// 	case 1:
// 	case 3:
// 	case 5:
// 	case 7:
// 	case 9:
// 	case 11:
// 		printf("31\n");
// 		break;
// 	case 4:
// 	case 6:
// 	case 8:
// 	case 10:
// 	case 12:
// 		printf("30\n");
// 		break; 
// 	case 2:
// 		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
// 		{
// 			printf("29\n");
// 		}
// 		else
// 		{
// 			printf("28\n");
// 		}
// 		break;
// 	}
// 	return 0;
// }
 
 #include <stdio.h>//直角三角形判定
 int main ()
 {
 int a,b,c,d,e,f;
 scanf("%d,%d,%d",&a,&b,&c);
 if(a+b>c&&a+c>b&&b+c>a)//在三角形中，如果任意两边的平方和等于第三边平方和，那一定是∟三角形。即逆定理。并且满足任意两边之和，，，
{
  ;
}
if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) 
{
  printf("%d,%d,%d:Y",a,b,c);
}
else
{
  printf("%d,%d,%d:N",a,b,c);
}
  return 0;
 }