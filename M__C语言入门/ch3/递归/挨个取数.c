//接受一个整型值（无符号），按照顺序打印它的每一位，例如输入1234,则输出1 2 3 4 
#include <stdio.h>
int Print(int n) //例如输入1234
{
    if(n>9)    //如果大于一位数
    {
        Print(n/10); // n/10即除10取整 -> 123_4,12_3,1_2,_1 -> 1 2 3 4
    }
    printf("%d ", n%10); 
}
int main()
{
    unsigned int num = 0;
    scanf("%d", &num);
    Print(num);
    return 0;
}
