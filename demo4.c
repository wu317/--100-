//题目：输入某年某月某日，判断这一天是这一年的第几天？

/*
    1、先输入年、月、日。
    2、判断年份是否为闰年，如果是闰年，则2月有29天，否则2月有28天。
    3、根据月份，判断该月有多少天。
    4、将月份的天数相加，再加上输入的日期，得到该年该日是该年的第几天。
    5、输出结果。
*/

#include <stdio.h>

int main()
{
    int year, month, day, sum = 0;
    int biaozhiwei = 0; //闰年标志位
    printf("请输入年月日：");
    scanf("%d%d%d",&year,&month,&day);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        biaozhiwei = 1;
    

    switch(month)
    {

        case 1:sum = 0;break;
        case 2:sum = 31;break;     
        case 3:
            if(biaozhiwei == 0)
                sum = 59;
            else
                sum = 60;
            break;
        case 4:
            if(biaozhiwei == 0)
                sum = 90;
            else
                sum = 91;
            break;
        case 5:
            if(biaozhiwei == 0)
                sum = 120;
            else
                sum = 121;
            break;
        case 6:
            if(biaozhiwei == 0)
                sum = 151;
            else
                sum = 152;
            break;
            default:printf("输入有误！");break;
    }
    sum = sum + day;
    printf("%d年%d月%d日是该年的第%d天\n",year,month,day,sum);
    return 0;
}

