#include <stdio.h>
void PrintN(int N)
{
    if(N) //如果N不为0
    {
        PrintN(N-1);
        printf("%d\n", N);
    }
}
int main()
{
    PrintN(100);
    return 0;
}
