#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*int main()
{
    char a[] = { "WWWDE", }
    printf("%d\n", a);
    return 0;
}*/





/*/int main()
{
    int a = 10;
    printf("%d\n", a);

    return 0;
}/*int main()
{
    printf("%c\n",'a');//单引号和双引的区别

    return 0;
}*/





/*int main()
{
    int a = 0, b = 1, c = 2, d = 3, i = 1;
    i = ++a && b-- && c++ && d++;//a++有滞后反应先赋值后自加减，++a这个值为1，--b这个值为1，b为0，

    printf("%d\n,%d\n,%d\n,%d\n,%d\n", a,b,c,d,i);
    

    return 0;
}*/




/*int main()
{
    int a = 0, b = 1, c = 2, d = 3, i = 1;
    i = a++ && b-- && c++ && d++;//a++有滞后反应先赋值后自加减，++a这个值为1，--b这个值为1，b为0，

    printf("%d\n,%d\n,%d\n,%d\n,%d\n", a, b, c, d, i);//当a++为0此时a为1已经结束运算其他值不变

    return 0;
}*/


  /*int main()
  {
      int a = 0, b = 1, c = 2, d = 3, i = 0;
      i = a++ || --b || c++ || d++;
      printf("%d\n,%d\n,%d\n,%d\n,%d\n", a, b, c, d, i);

    return 0;
  }*/




/*int main()
{
    char a = 3;             //3是整型，赋值给字符型要进行整型提升  00000000 00000000 00000000 00000011   给字符型变量a后会进行二进制截断，只有00000011
    char b = 127;             //127同理00000000 00000000 00000000 01111111给字符型变量b后会进行二进制截断，只有01111111
   char c = a + b;                  //a+b的时候又会进行整型提升00000000 00000000 00000000 00000011加	00000000 00000000 00000000 01111111等于	00000000 00000000 00000000 10000010
    printf("%d\n", c);             //给字符型变量c后会进行二进制截断，只有10000010打印输出的由于是整型，所以又要进行整型提升，补最前面的符号位，
    return 0;                                  //	11111111 11111111 11111111 10000010  这是补码，打印的是原码
}   */                                //	11111111 11111111 11111111 10000001	 反码
                                       //	10000000 00000000 00000000 01111110	 原码，转换为十进制就是-12
/*简单来说：
char a, b, c;
a = b + c;
b和c的值先被提升为普通整型，然后再执行加法运算
加法运算完成后，结果将被截断，然后再存储与a中

举例：
#include <stdio.h>

int main()
{
    char c = 1;
    printf("%u\n", sizeof(c));	//输出1
    printf("%u\n", sizeof(+c));		//输出4	这里的+c进行了运算，就会进行整型提升，而整型提升被sizeof读取到了就会变成int的长度
    printf("%u\n", sizeof(!c));	//输出1
}
*/