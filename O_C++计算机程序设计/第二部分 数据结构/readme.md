###  学习笔记
-----

### 教材给的示例代码
第二关 :

例如：下面的程序将一个整型数组中存放的10名同学的百分制成绩转换为5分制，并输出。
```cpp
#include <iostream>  
using namespace std;
// 分数转换函数的函数原型，其中：s-学生成绩数组名，len-学生成绩个数  
void convertScores(int s[], int len);
int main()  
{  
    // 定义学生成绩数组并初始化  
    int scores[10] = {85, 63, 72, 52, 95, 82, 77, 69, 88, 73};  
    convertScores(scores, 10);     // 调用分数转换函数convertScores  
    // 转换完成后输出分数数组中的分数  
    for(int i = 0; i < 10; i++)  
        cout << "scores["<<i<<"] = " << scores[i] << endl;  
    return 0;  
}
// 函数convertScores  
void convertScores(int s[], int len)  
{  
    // 逐个访问数组中的每个元素，并做转换  
    for (int i = 0; i < len; i++)  
        s[i] = s[i]/20;     // 修改 s[i] 实际上就是修改 main 函数中的 scores[i]，因为 s 和 scores 拥有相同的地址值  
}  

```
