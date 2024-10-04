#include<stdio.h>
int main()
{
   int m,n,a,b;
   printf("请输入两个整数：(m,n)\n");
   scanf("%d,%d",&m,&n);
   if(scanf("%d,%d",&m,&n)!=2)
   {
    printf("输入错误，请重新输入两个整数，用逗号分隔。\n");
    return 1;
   }
else if(m>n)
{   do{
    b=n;
    n=m%n;
    m=b;
    a=n;
}while(a!=0);

   printf("最大公因数为；%d\n",b);
}
else if(m==n)
{
    printf("最大公因数为：%d\n",m);

}

else{
    do{
    b=m;
    n=n%m;
    n=b;
    a=m;
}while(a!=0);

   printf("最大公因数为；%d\n",b);

}
  return 0;
}
   
