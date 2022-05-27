//写一个函数可以判断一个数是不是素数
 #include <stdio.h>
 #include <math.h>
 int is_prime(int n)
 {
    int j = 0;
    for(j=2; j<=sqrt(n); j++)
    {
        if(n%j==0)
            return 0;
        else
            return 1;
    }
 }
 int main()
 {
    int i = 1;
    if(is_prime(i) == 1)
        printf("%d是素数\n", i);
    else
        printf("%d不是素数\n", i);
    return 0;
 }
