/*
用*号输出字母C的图案
*/

 
/*
#include "stdio.h"
int main()
{
    printf("用 * 号输出字母 C!\n");
    printf(" ****\n");
    printf(" *\n");
    printf(" * \n");
    printf(" ****\n");
}
*/
#include <stdio.h>

int main() {
    // 定义字符图形
    const char *c_pattern[] = {
        " ****",
        " *",
        " *",
        " ****"
    };

    // 输出字符图形
    printf("用 * 号输出字母 C!\n");
    for (int i = 0; i < sizeof(c_pattern) / sizeof(c_pattern[0]); i++) {
        printf("%s\n", c_pattern[i]);
    }

    return 0;
}
