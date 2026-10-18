
#include <stdio.h>
#include <string.h>
#include <windows.h>
// #include <stdlib.h> // 使用弹出窗口时，要加上此头调用 system命令
// int main(void)
// {
//     int a, b;
//     a = 100;
//     b = 200;
//     printf("请输入一个数字：");
//     scanf("%d", &a);

//     printf("a=%d\n", a);
//     printf("b=%d\n", b);
//     system("pause"); // 使用弹出窗口时，要加上此行命令，防止闪退。

//     return 0;
// }
void print_arr(int arr[], int len)
{
    int len2 = sizeof(arr) / sizeof(arr[0]);
    printf("%d", len2);

    for (int i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int main()
{
    // int a = 0;
    // int b = 0;
    // float f = 0.0f;
    // int r = scanf("%d %d %f\n", &a, &b, &f);
    // printf("a=%d b=%d f=%f", a, b, f);
    // printf("r=%d", r);
    // int a;
    // int b;
    // // while (scanf("%d      %d", &a, &b) != 1)
    // // {
    // //     printf("a=%d b=%d", a, b);
    // // }
    // scanf("             %d %d\n", &a, &b);
    // printf("a=%d b=%d", a, b);
    // return 0;
    // ===== 重点：scanf 返回值 =====
    // int a = 0;
    // int b = 0;
    // int ret = 0;

    // while ((ret = scanf("%d %d", &a, &b)) != EOF)
    // {
    //     printf("scanf返回值 ret = %d\n", ret);
    //     printf("a = %d, b = %d\n", a, b);
    // }

    // printf("遇到EOF，scanf返回 EOF\n");
    // return 0;
    // char a = 'A';

    // printf("%d", a);
    // printf("c");
    // return 0;
    // int a;
    // int b;
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     int x = a + b;
    //     printf("%d", x);
    // }
    // int a;
    // int b;
    // a = 10;
    // b = a--;
    // printf("%d\n", a);
    // printf("%d\n", b);
    // int num = 10;
    // int n = num << 1; // 这个是左移运算符，int是4个字节。32个比特位，当左移到最高位时候，使得最高位位1（负数），其运行结果不负责
    // printf("%d", n);
    // int a = 11;
    // int b = 1;
    // int c = a & b; // 按位与 将a和b转化为二进制数 对应位上只要有一个0 则结果位0 其余为1
    // int d = a | b;
    // int e = a ^ b;
    // int f = ~b;
    // printf("%d\n%d\n%d\n%d\n", c, d, e, f);
    // int a = 4, b = 5, c = 6, d;
    // d = b > 3 && 2 || 8 < (a, b, c);
    // printf("%d", d);
    // int a;
    // scanf("%d", &a);
    // if (a % 2 == 1)//条件判断语句
    //     ;

    // {
    //     printf("%d是奇数\n", a); // 如果遇到if语句后加分号 后面的 { ... } 只是一个普通代码块，已经不属于 if 了，所以一定会执行。
    //     printf("%d是奇数\n", a);
    // int a;
    // float b;
    // b = 9.36;
    // a = 9;
    // printf("%d\n", a);
    // printf("%d\n", sizeof(a));
    // }
    // char ch = 1000;
    // printf("%d,%d,%d", sizeof('中'), sizeof(ch), sizeof("4"));
    // return 0;
    // char a = "1000";
    // printf("%s", a);
    // printf("%zu\n", sizeof("hello"));
    // int a = 3;
    // double b = 2.5;

    // printf("%f\n", a + b);
    // char a = 10;
    // char b = 20;

    // printf("%d\n", a + b);
    // char ch1 = 2;
    // char ch = 63;
    // printf("%d", ch + ch1);
    // int x = 15;
    // int y = 5;
    // printf("%d\n", x %= (y %= 2));
    // char a, b;
    // a = 'A' + '5' - '3';
    // b = a + '6' - '2';
    // printf("%d,%c\n", a, b);
    // char ch = '123456';
    // printf("%c", ch);
    // printf("%zu\n", strlen("hello"));
    // printf("%zu\n", sizeof("hello"));
    // int month;
    // scanf("month=%d", &month);

    // if (month >= 3 && month <= 5)
    // {
    //     printf("春季\n");
    // }
    // else
    // {
    //     printf("其它季节\n");
    // }
    // int n;
    // scanf("%d", &n);
    // switch (n)
    // {
    // case 7:
    //     printf("*******\n");
    // case 6:
    //     printf("******\n");
    // case 5:
    //     printf("*****\n");
    // case 4:
    //     printf("****\n");
    // case 3:
    //     printf("***\n");
    // case 2:
    //     printf("**\n");
    // case 1:
    //     printf("*\n");
    // }
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", i);
    // }
    // int sum = 0;

    // for (int i = 1; i <= 100; i++) // 执行第一和第二句，在执行循环体语句，最后再执行最后一句
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //     }
    // }

    // printf("%d\n", sum);
    // for (int i = 1; i <= 9; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%2d*%2d=%2d", i, j, i * j);
    //     }
    //     printf("\n");
    // }
    // int num;
    // int count = 0;
    // scanf("%d", &num);
    // while (num != 0)
    // {
    //     if ((num & 1) == 1)
    //     {
    //         count++;
    //     }
    //     num = num >> 1;
    // }
    // printf("%d", count);
    // int i;
    // for (i = 1; i <= 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         continue; // 结束本轮循环体，进入下一轮循环
    //     }
    //     printf("%d", i);
    // }
    // ===============测试============
    // char a = 127;
    // char b = a + 1;
    // printf("%d", b);
    // float a = 0.1;
    // float b = 0.2;
    // printf("%.17f", a + b);
    // ===========测试============
    // printf("%zu\n", sizeof("hello"));//计算占用内存字节数
    //===========测试==============

    // char str[] = "hello";

    // printf("%zu\n", strlen(str));///计算字符串长度
    // short ch = 6;

    // printf("%zu\n", sizeof(ch));
    // char ch = '123456';
    // printf("%c", ch); // 如果一对单引号有多个字符，只接受最后一个。
    // char s[] = "\101";
    // printf("%zu", sizeof(s));
    // int a = 5;
    // int b = -2;
    // printf("%d", a / b);
    // char ch = '4';
    // printf("%zu,%zu,%zu", sizeof('4'), sizeof(ch), sizeof("4"));//第一个强调的是整数属性，故为4，第二个是字符变量，故为1
    // int a = -1;
    // unsigned int b = 1;

    // printf("%d\n", a < b);
    // int a = 5;
    // int b = 6;
    // printf("%d", (a ^ b) < 0);
    // int ch = 2 / 3 + 7 % 4 + 3.5 / 7;
    // printf("%d", ch);

    // int n = 10;
    // int i = 4;
    // printf("%d", n %= i + 1);

    // int x = 15;
    // int y = 5;
    // printf("%d\n", x %= (y %= 2));

    // unsigned int x = 0xffff;
    // printf("%u\n", x);

    // int m = 0256;
    // int n = 256;
    // printf("%o %o\n", m, n);

    // int i;
    // scanf("%d", &i);
    // i %= 4;

    // int a, b, c, d;
    // printf("Enter a,b,c: ");
    // scanf("%d%d%d", &a, &b, &c);
    // d = a;
    // a = b;
    // b = c;
    // c = d;
    // printf("a=%d,b=%d,c=%d\n", a, b, c);

    // char a, b, c;
    // int x, y, z;
    // double avg;

    // scanf(" %c\n %c %c\n", &a, &b, &c); // 跳过输入中连续的空白字符，并等待下一个非空白字符出现。

    // x = a - '0';
    // y = b - '0';
    // z = c - '0';

    // avg = (x + y + z) / 3.0;

    // printf("%.7f\n", avg);
    // printf("%10.3g", 123456.);
    // int arr[5] = {1, 2, 3, 2, 1};
    // int sum = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     sum ^= arr[i];
    // }
    // printf("%d", sum);
    // float f = 12.5f;
    // int a = f;
    // printf("%d", a);
    // char ch = 5;
    // printf("%zu %zu %zu %zu", sizeof(ch), sizeof('5'), sizeof("5"), sizeof("shshs456"[0]));
    // int a, b, c;
    // int ret = scanf("%d %d %d", &a, &b, &c);
    // printf("%d", ret);
    // int a = -5;

    // printf("%d", a >> 1);
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("打印数据： ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("&arr[%d]=%p\n", i, (void *)&arr[i]); // 因为 %d 用来输出 int 整数，而 &arr[i] 是地址，类型是 int *，类型不匹配，所以有警告。
    // }
    //     int arr[] = {1, 2, 3, 4, 5};
    // printf("%zu\n", sizeof(arr) );

    // int arr[] = {1, 2, 3, 4, 5};
    // int i = 0;
    // int tmp;
    // int len = sizeof(arr) / sizeof(arr[0]);
    // int j = len - 1;
    // //  逆置前
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    // while (i <= j)
    // {
    //     tmp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = tmp;
    //     i++;
    //     j--;
    // }
    // // 逆置后
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    //=============九九乘法表===============
    // int j = 1;

    // while (j <= 9)
    // {
    //     for (int i = 1; i <= j; i++)
    //     {
    //         printf("%d*%d=%d\t", i, j, i * j);
    //     }

    //     printf("\n");
    //     j++;
    // }
    // int i;
    // for (i = 0; i <= 10; i++) // 不写 int，使用外层已有的 i
    // {
    //     if (i == 5)
    //     {
    //         continue;
    //     }
    //     printf("%d ", i);
    // }

    // printf("\n循环结束后 i = %d\n", i);

    // ==========二分查找==============
    // int arr[5] = {1, 2, 3, 4, 5};
    // int left = 0;
    // int j = sizeof(arr) / sizeof(arr[0]);
    // int right = j - 1;
    // int n;
    // int f = 1;
    // int mit;
    // scanf("%d", &n);
    // while (left <= right)
    // {
    //     mit = (left + right) / 2;

    //     if (arr[mit] < n)
    //     {
    //         left = mit + 1;
    //     }
    //     else if (arr[mit] > n)
    //     {
    //         right = mit - 1;
    //     }
    //     else
    //     {
    //         f = 0;
    //         break;
    //     }
    // }

    // if (f == 0)
    // {
    //     printf("已经找到 %d\n", mit);
    // }
    // else
    // {
    //     printf("没有找到这个数字\n");
    // }
    //   ================ 冒泡排序===================
    // int arr[5] = {11, 29, 6, 17, 21};
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 0; j < 5 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int tmp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = tmp;
    //         }
    //     }
    // }
    // for (int m = 0; m < 5; m++)
    // {
    //     printf("%d ", arr[m]);
    // }
    //=========取地址=========
    // int i = 5;
    // printf("%p\n", (void *)&i);

    //     int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    // printf("%p %p\n", &arr[2][0], &arr[2][1]);

    // char arr[4] = {'a', 'b', 'c', 'd'};
    // printf("%s\n", arr);
    // printf("%s", "nihao\0sajdajk");

    // int n;
    // scanf("%d", &n);
    // printf("\n");
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    //     }
    int arr[5] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, len);
    return 0;
}
