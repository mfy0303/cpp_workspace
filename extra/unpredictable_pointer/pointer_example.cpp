 #include <stdio.h>

int main()
{
    int hoge = 5;
    int piyo = 7;
    int *hoge_p;
    int s[5]={1,2,3,4,5};
    /* 输出各变量的地址 */
    printf("&hoge..%p\n", (void*)&hoge);
    printf("&piyo..%p\n", (void*)&piyo);
    printf("&hoge_p..%p\n", (void*)&hoge_p);
    /* 将hoge的地址赋给指针变量hoge_p */
    hoge_p = &hoge;
    printf("hoge_p..%p\n", (void*)hoge_p);
    printf("&hoge_p..%p\n", (void*)&hoge_p);
    /* 通过hoge_p输出hoge的值 */
    printf("*hoge_p..%d\n", *hoge_p);
    /* 通过hoge_p更改hoge的值 */
    *hoge_p = 10;
    printf("hoge..%d\n", hoge);
    hoge_p = &s[0];
    printf("*hoge_p..%d\n", *hoge_p);
    hoge_p++;
    printf("hoge_p..%p\n", (void*)hoge_p);
    printf("&hoge_p..%p\n", (void*)&hoge_p);
    printf("*hoge_p..%d\n", *hoge_p);
    return 0;
}
