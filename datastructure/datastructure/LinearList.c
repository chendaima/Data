#include <stdio.h>
//线性表操作
//1、定义线性表——顺序表--顺序存储
//--方式1
#define Maxsize 100
typedef struct {
	int data[Maxsize];
	int length;
}SqList;
//--方式2
#define Initsize 100
typedef struct {
	int *data;
	int maxsize, length;
}SqlList_;
//2、线性表基本操作
//初始化表
void initlist(SqList *L)
{
	for(int i=0;i<Maxsize;i++)
	{
		L->data[i] = 0;
		L->length = 0;
	}
}
//销毁表
//插入表
//删除表
int main()
{
	SqList L;//声明一个顺序表
	initlist(&L);//初始化顺序表
	return 0;
}
