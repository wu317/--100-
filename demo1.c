#include <stdio.h>
int main()
{
    double lirun = 0;     
    double ticheng = 0;
    int i = 0;
    long int j = 0;
    printf("����������:\n");
    scanf("%lf",&lirun);
  
   //���²���Ϊ����ȡ��
    i = (int)(lirun/100000);
    j = (long int)lirun;          //ȡ�������������Ϊ����������Ϊ����Ϊ˫���ȸ����ͣ�������Ҫ��������ת��
    if((j % 100000) != 0)
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
        case 4:
            ticheng = 0.1*100000+0.075*100000+0.05*(lirun-200000);
            break;
        case 5:
        case 6:  
            ticheng = 0.1*100000+0.075*100000+0.05*200000+0.03*(lirun - 400000);
            break;
        case 7:  
        case 8:
        case 9:
        case 10:
            ticheng = 0.1*100000+0.075*100000+0.05*200000+0.03*200000-0.01*(lirun - 600000);
            break;   
        default:
            printf("�����������������\n");
        
    }
    printf("�����������Ϊ:%lfʱ,���Ϊ:%lf\n",lirun,ticheng);

    return 0;
}