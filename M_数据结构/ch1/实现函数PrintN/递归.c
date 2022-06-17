#include <stdio.h>
void PrintN(int N)
{
    if(N) //如果N不为0
    {
        PrintN(N-1);  //100-1, 99-1, 98-1 ...
        printf("%d\n", N); //100, 99, 98 ...
    }
}
int main()
{
    PrintN(100);
    return 0;
}
