#include <stdio.h>
//���Ա����
//1���������Ա���˳���--˳��洢
//--��ʽ1
#define Maxsize 100
typedef struct {
	int data[Maxsize];
	int length;
}SqList;
//--��ʽ2
#define Initsize 100
typedef struct {
	int *data;
	int maxsize, length;
}SqlList_;
//2�����Ա��������
//��ʼ����
void initlist(SqList *L)
{
	for(int i=0;i<Maxsize;i++)
	{
		L->data[i] = 0;
		L->length = 0;
	}
}
//���ٱ�
//�����
//ɾ����
int main()
{
	SqList L;//����һ��˳���
	initlist(&L);//��ʼ��˳���
	return 0;
}
