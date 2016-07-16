//左值和右值

//1.左值：指向内存位置的表达式，可出现在赋值(=)的左边和右边，所有变量都是左值
//2.右值：存储在内存中的数值，右值是不能出现赋值左边的，不可变的，比如数字字面值 1，2，3


#include <stdio.h>
int main(int argc, char const *argv[])
{

	int g = 20;//ok
	// 10 = 20;//error
	/* code */
	return 0;
}