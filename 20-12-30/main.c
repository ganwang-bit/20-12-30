//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
#include<stdio.h>
int main()
{
    int arr[3][2]={0};
    printf("arr[0] %p\n",arr[0]);
    printf("arr %p\n",arr);
    printf("&arr[0] %p\n",&arr[0]);
    printf("arr[0]+1 %p\n",arr[0]+1);
    printf("arr+1 %p\n",arr+1);
    printf("&arr[0]+1 %p\n",&arr[0]+1);
    printf("&arr[0][0]+1 %p\n",&arr[0][0]+1);
    return 0;
}
