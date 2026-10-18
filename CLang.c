

// #include <stdbool.h>
#include <stdio.h>
// #是预处理的意思，头文件，如果没有头文件，就无法使用库函数，例如 printf函数
//  int main()
//  {
//      // printf("change the world");
//      // return 0; // 遇到return 返回0 结束运行
//      //     printf("saf");
//      // _Bool flg = 0;
//      // if (flg)
//      // {
//      //     printf("hahaha");
//      // }
//      // else
//      // {
//      //     printf("heiheihei");
//      // }
//      // return 0;
//      // signed int b = -10;
//      // printf("%d", b);
//      // return 0;
//      // char dm = 'A';
//      // printf("%d", dm);

//     // 二分查找要求数组按从小到大排序。
//     int arr[] = {1, 2, 3, 4, 5};
//     int count = sizeof(arr) / sizeof(arr[0]);
//     int left = 0;
//     int right = count - 1;
//     int n;
//     int found = -1;

//     printf("请输入要查找的整数：");
//     fflush(stdout);
//     if (scanf("%d", &n) != 1)
//     {
//         printf("输入错误，请输入整数。\n");
//         return 1;
//     }

//     while (left <= right)
//     {
//         int mit = left + (right - left) / 2;

//         if (arr[mit] < n)
//         {
//             left = mit + 1; // 去右半部分查找。
//         }
//         else if (arr[mit] > n)
//         {
//             right = mit - 1; // 去左半部分查找。
//         }
//         else
//         {
//             found = mit;
//             break;
//         }
//     }

//     if (found != -1)
//     {
//         printf("已经找到 %d，下标为 %d（arr[%d]）。\n", n, found, found);
//     }
//     else
//     {
//         printf("没有找到 %d。\n", n);
//     }

//     return 0;
// }
// void fun(int x)
// {
//     int z = x;
//     printf("%d\n", z);
// }

// int main()
// {
//     int x = 15;
//     fun(x);
//     printf("%d", x);

//     return 0;
// }

// #include <stdio.h>

// void print_arr(int arr2[], int len2)
// {
//     for (int i = 0; i < len2; i++)
//     {
//         printf("%d ", arr2[i] + 1);
//     }
// }

// void set_arr(int arr[], int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         arr[i] = -1;
//     }
// }

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};

//     int len = sizeof(arr) / sizeof(arr[0]);

//     print_arr(arr, len);

//     set_arr(arr, len);

//     print_arr(arr, len);

//     return 0;
// }

// #include <stdio.h>

// void swap(int x, int y)
// {
//     int tmp = x;
//     x = y;
//     y = tmp;

//     int main()
//     {
//         int a = 1;
//         int b = 2;

//         printf("交换之前：a = %d, b = %d\n", a, b);

//         swap(a, b);

//         printf("交换之后：a = %d, b = %d\n", a, b);

//         return 0;
//     }

// #include <stdio.h>

// void swap(int *x, int *y)
// {
//     int tmp = *x;
//     *x = *y;
//     *y = tmp;
// }

// int main(void)
// {
//     int a = 1;
//     int b = 2;

//     swap(&a, &b);

//     printf("a = %d, b = %d\n", a, b); // 输出：a = 2, b = 1
//     return 0;
// }
// int fac(int n)
// {
//     int ret = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         ret *= i;
//     }
//     return ret;
// }
//  int fac2(int n)
//  {
//      int sum = 0;
//      for (int i = 1; i <= n; i++)
//     {
//          sum = sum + fac(i);
//     }
//     return sum;
//  }

// int main()
// {

//     printf("%d", fac(5)); // 因为 printf 可以直接使用函数返回的值，不需要你先给它起一个变量名。
//     return 0;
// }

// #include <stdio.h>

// void test()
// {
//     int i = 0;
//     i++;
//     printf("%d ", i);
// }

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         test();
//     }

//     return 0;
// }
// int c;
// int main()
// {
//     printf("%d", c);
//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int *p = &a;

//     printf("%d\n", *p);

//     return 0;
// }
// int main()
// {
//     int a = 10;
//     char ck = 'k';
//     int *p = &a;
//     char *h = &ck;
//     printf("%d\n", *p);
//     printf("%zu\n", sizeof(p)); // p保存的是数据的首地址，int*p 表示这个数据是4个字节的，从首地址向后读，把完整的数据读出来
//     printf("%zu\n", sizeof(h));
//     return 0;
// }
int main()
{
    int a[100];
    printf("%p,%p\n", a, &a[0]);
    printf("%p,%p\n", a + 1, &a[0] + 1);
    return 0;
}