// 测试栈空间和堆得增长方向

#include<stdlib.h>
#include<stdio.h>

void fun()
{
    unsigned  int a;
    unsigned  int b;
    printf("address:a:%x   b:%x\n ",&a,&b);
    int aa =(int *)malloc(sizeof(int));
    int bb =(int *)malloc(sizeof(int));
    printf("address:aa:%x   bb:%x\n", aa,bb);

    printf("fun address:fun:%x \n",fun);
//	fun(); 
}


int main()
{
    fun();
    return 0;
}

/*输出
address:a:eb30378   b:eb3037c
 address:aa:201b420   bb:201b440
fun address:fun:4005d6 
*/
