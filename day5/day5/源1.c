#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*int main()
{
    int fen=0;
    printf("输入你的分数\n",fen);
    scanf("%d", &fen);         //scanf函数如果有\n将会i输入两次参数才有用
    if (fen>= 90)
        printf("A\n");
         printf("B\n");
    else if (fen >= 70 &&  fen<80)
          printf("C\n");            //注意;的使用以及中英文的括号
    else if (fen>= 60 && fen<70)
        printf("D\n");                //不写成90=<fen<=100的形式是因为会从左到右判断逻辑如果为假则自动结束从而跳过该判断。
    else
     printf("不及格\n");
    return 0;
}*/


/*int main()
{
    int age;
    printf("你的年龄\n");
    scanf("%d",&age);
    if (age < 18)
        printf("青少年\n");
    else if (age >= 18 && age < 22)
        printf("青年\n");
    else if (age >= 22 && age < 50)
       printf("壮年\n");
    else
       printf("老年\n");

    return 0;
}*/