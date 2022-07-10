// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // n-输入的数，m-重排后的数
    int n, m;
    // 请在此添加代码，输入一个小于1000的正整数，重排出最大的数存入m中
    /********** Begin *********/
    // 这道题其实就是取n位数的值
    int hun = 0 ;//百位数
    int ten = 0 ;//十位数
    int num = 0 ;//个位数
    cin >> n ;
    if (n<10){
        cout << 0 << 0 << n ;
        cout << 0 << n << 0 ;
        cout << n << 0 << 0 ;
    }
    else if ( 10<=n && n<100)
    {
        //取十位数
        ten = n /10;
        num = n % 10;
        if(ten >= num){
        cout << 0 << num << ten ;
        cout << num << ten << 0 ;
        cout << ten << num << 0 ;
        }
        else{
        cout << 0 <<  ten<<  num;
        cout << ten <<  num << 0 ;
        cout << num <<  ten<< 0 ;
        }

    else if ( 100<= n && n<1000)
    {
        //取十位数
        hun = n /100 ;
        ten = n / 10%10;
        num = n % 100;
        if(ten>= num && hun >= ten ){
        cout << hun << num << ten ;
        cout << num << ten << hun ;
        cout << ten << num << hun ;
        }
        else if (ten<= num && hun >= num ){
        cout << hun <<  ten<<  num;
        cout << ten <<  num << hun ;
        cout << num <<  ten<< hun ;
        }
        else if(ten<= num && hun <= ten ) {
        cout << hun <<  ten<<  num;
        cout << ten <<  num << hun ;
        cout << num <<  ten<< hun ;
        }
        
    }

    
    
    /********** End **********/
    // 输出重排后的数
    cout << m << endl;
    return 0;
}
