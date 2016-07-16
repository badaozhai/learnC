//程序的第一行 #include <stdio.h> 是预处理器指令，告诉 C 编译器在实际编译之前要包含 stdio.h 文件。
#include <stdio.h>
/*一个 C 语言程序，可以是 3 行，也可以是数百万行，
它可以写在一个或多个扩展名为 ".c" 的文本文件中，例如，hello.c。*/
int main(int argc, char const *argv[])
{
	/* 惯例：Helloworld */
	printf("hello,world!\n");

	return 0;
}