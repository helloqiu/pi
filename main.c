#include <stdio.h>
#include <stdlib.h>

float funpi(float e);

int main()
{
    float e;
    printf("please enter the e : \n");
    scanf("%f" , &e);
    printf("the pi is %f\n" , funpi(e));
    return 0;
}
float funpi(float e){
    float result = 0.f;
    int symbol = 1;
    int addnum = 1;
    while (1.f / (float)addnum * 4.f >= e){
        result += symbol / (float)addnum;
        symbol = -symbol;
        addnum += 2;
    }
    return result * 4.f;
}
//这是对的
//几点建议：
//1.不要用 do while
//那是邪教
//while循环很简洁
//2.一次不要定义两个变量
//这也是邪教异端
//3.不要直接在函数声明的地方直接写函数
//那样很难看T_T
//4.尽量不要float double混合用
//除非你想每次都强制转换
//5.用浮点数一定要给常数变成浮点数，不然就会出你刚刚的问题
//6.学习debug技术吧T_T
