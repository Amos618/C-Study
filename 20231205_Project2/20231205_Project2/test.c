/*
	Ŀ��:�˽�C���Ե���������
*/

#include <stdio.h>
int main()
{
	//�ַ�����
	char ch = 'a';
	//����
	int age = 12;
	//������
	short num = 10;
	//������
	long a = 23;
	//��˫���ȵ�������洢��ռ�ֽ�����ͬ
	float f = 15.5;
	double d = 25.55;

	//sizeof -> c���Թؼ��֣������������ã��������ͻ��߱�����ռ�ռ�Ĵ�С,��λ���ֽ�
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	//��������P1.png

	return 0;
}
