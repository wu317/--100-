/*
��*�������ĸC��ͼ��
*/

 
/*
#include "stdio.h"
int main()
{
    printf("�� * �������ĸ C!\n");
    printf(" ****\n");
    printf(" *\n");
    printf(" * \n");
    printf(" ****\n");
}
*/
#include <stdio.h>

int main() {
    // �����ַ�ͼ��
    const char *c_pattern[] = {
        " ****",
        " *",
        " *",
        " ****"
    };

    // ����ַ�ͼ��
    printf("�� * �������ĸ C!\n");
    for (int i = 0; i < sizeof(c_pattern) / sizeof(c_pattern[0]); i++) {
        printf("%s\n", c_pattern[i]);
    }

    return 0;
}
