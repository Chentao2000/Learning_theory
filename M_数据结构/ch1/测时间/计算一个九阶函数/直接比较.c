#include <stdio.h>
#include <time.h>
#include <math.h>
clock_t start, stop;
double duration;
#define MAXN 10   //多项式最大项数，即多项式阶数+1(九阶从0开始，有10个项数)
double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i=1;i<=n;i++)
        p += (a[i] * pow(x, i));
    return p;
}
double f2(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i=n;i>0;i--)
        p = a[i-1] + x*p;
    return p;
}
int main()
{
    int i;
    double a[MAXN];//存储多项式的系数
    for(i=0;i<MAXN;i++) 
        a[i] = (double)i; 
    
    start = clock();
    f1(MAXN-1, a, 1.1);
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
    printf("ticks1 = %f\n", (double)(stop - start));
    printf("duration1 = %6.2e\n", duration); //%6.2e意思是整个输出中包含2位小数，并且做四舍五入
    
    start = clock();
    f2(MAXN-1, a, 1.1);
    stop = clock();
    duration = ((double)(stop - start))/CLK_TCK;
    printf("ticks2 = %f\n", (double)(stop - start));
    printf("duration2 = %6.2e\n", duration);
    
    return 0;
}
