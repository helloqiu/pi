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
//���ǶԵ�
//���㽨�飺
//1.��Ҫ�� do while
//����а��
//whileѭ���ܼ��
//2.һ�β�Ҫ������������
//��Ҳ��а�����
//3.��Ҫֱ���ں��������ĵط�ֱ��д����
//�������ѿ�T_T
//4.������Ҫfloat double�����
//��������ÿ�ζ�ǿ��ת��
//5.�ø�����һ��Ҫ��������ɸ���������Ȼ�ͻ����ոյ�����
//6.ѧϰdebug������T_T
