#include <stdio.h>
#include <time.h>

clock_t start, stop; //clock_t是clock()函数返回的变量类型，start和stop是我定义的两个变量
double duration;     //记录被测函数运行时间， 以秒为单位

int main()
{
    //......
    start = clock();
    MyFunction(); //这里的MyFunction是我们自己定义的需要计算时间的函数
    stop = clock();
    duration = ((double) (stop - start)) / CLK_TCK;
    //......
    return 0;
}
