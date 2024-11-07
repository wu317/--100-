#include <stdio.h>
int main()
{
    double lirun = 0;
    double ticheng = 0;
    int i = 0;
    printf("请输入利润:\n");
    scanf("%lf",&lirun);
    i = (int)(lirun/100000);
    if((i%100000) != 0)
        i++;
    switch(i)
    {
        case 1:
            ticheng = 0.1*lirun;
            break;
        case 2:
            ticheng = 0.1*100000+0.075*(lirun-100000);
            break;
        case 3:
            ticheng = 0.1*100000+0.075*100000+0.05*(lirun-200000);
            break;
        case 4:
            ticheng = 0.1*100000+0.075*100000+0.05*(lirun-200000);
            break;
        case 5:
            ticheng = 0.1*100000+0.075*100000+0.05*200000+0.03*(lirun - 400000);
            break;
        case 6:  
            ticheng = 0.1*100000+0.075*100000+0.05*200000+0.03*(lirun - 400000);
            break;
        case 7:  
            ticheng = 0.1*100000+0.075*100000+0.05*200000+0.03*200000-0.01*(lirun - 600000);
            break;   
        default:
            printf("输入错误，请重新输入\n");
        
    }
    printf("当输入的利润为:%lf时,提成为:%lf\n",lirun,ticheng);

    return 0;
}