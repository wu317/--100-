/*
输入三个整数 x、y、z，请把这三个数由小到大输出。
*/

#include <stdio.h>

int main()
{
    int x, y, z;
    printf("请输入三个数：\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    if(x>z)
    {
        int temp = x;
        x = z;
        z = temp;
    }
    if(y>z)
    {
        int temp = y;
        y = z;
        z = temp;
    }
    printf("从小到大的输出结果为：%d %d %d\n",x,y,z);
    return 0;
}