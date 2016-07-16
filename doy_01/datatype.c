#include <stdio.h>
#include <float.h>
//数据类型：
//1.基本类型2种，整数类型和浮点类型
//2.枚举类型
//3.void 类型 
//4.派生类型 指针类型，数组类型，结构类型，共用体类型，函数类型

//数组类型和结构类型 成为聚合类型



//函数声明
void intdemo();
void floatdemo();
int main(){

	intdemo();
	floatdemo();
	return 0;
}

void intdemo(){
		//sizeof 获取类型的大小
	printf("int存储大小：%lu\n",sizeof(int) );
	// 4 字节
}

void floatdemo(){
	 printf("float 存储最大字节数:%lu \n",sizeof(float) );

	 printf("float 最小值:%E\n",FLT_MIN );
	 printf("float 最大值:%E\n",FLT_MAX );
	 printf("精度值:%d\n", FLT_DIG);
}