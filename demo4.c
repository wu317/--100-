//��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

/*
    1���������ꡢ�¡��ա�
    2���ж�����Ƿ�Ϊ���꣬��������꣬��2����29�죬����2����28�졣
    3�������·ݣ��жϸ����ж����졣
    4�����·ݵ�������ӣ��ټ�����������ڣ��õ���������Ǹ���ĵڼ��졣
    5����������
*/

#include <stdio.h>

int main()
{
    int year, month, day, sum = 0;
    int biaozhiwei = 0; //�����־λ
    printf("�����������գ�");
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
            default:printf("��������");break;
    }
    sum = sum + day;
    printf("%d��%d��%d���Ǹ���ĵ�%d��\n",year,month,day,sum);
    return 0;
}

