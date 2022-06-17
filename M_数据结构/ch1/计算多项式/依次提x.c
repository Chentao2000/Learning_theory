#include <stdio.h>
double f(int n, int a[], double x)
{
    int i;
    double p = a[n]; 
    for (i=n; i>0; i--)
        p = a[i-1] + x*p; //从最里层开始算，每次更新p的值
    printf("%lf\n", p); 
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    f(5, arr, 2);
    return 0;
}
