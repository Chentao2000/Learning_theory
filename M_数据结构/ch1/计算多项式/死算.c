#include <stdio.h>
#include <math.h>   //调用了pow
double f(int n, int a[], double x)
{
    int i;
    double p = a[0];
    for(i=1; i<=n; i++)
    {
        p+=(a[i] * pow(x, i));  //pow(x, i)也就是x的i次方
    }
    printf("%lf\n", p);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    f(10, arr, 2.0);
    return 0;
}
