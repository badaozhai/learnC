/*
变量其实只不过是程序可操作的存储区的名称。C 中每个变量都有特定的类型，类型决定了变量存储的大小和布局，该范围内的值都可以存储在内存中，运算符可应用于变量上。
变量的名称可以由字母、数字和下划线字符组成。它必须以字母或下划线开头。大写字母和小写字母是不同的，因为 C 是大小写敏感的。
*/

#include <stdio.h>
// extern int abc;//出问题了 此处并没有引用到biangliang2.c 文件里的abc的变量

void test1();
//变量声明
extern int a,b;
extern int c;
extern float f;
int main()
{
	/* code */
	// printf("%d\n", abc);


	test1();

	return 0;
}

void test1(){
//变量定义
	int a,b;
	int c;
	float f;

	// 变量初始化
	a = 10;
	b = 20;




	c = a + b;
	printf("VALUE OF c:%d\n", c);
	f = 70.0/3.0;
	printf("value of f :%f\n", f);
}