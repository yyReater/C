#include <iostream>
#include <cassert>

void *my_memcpy(void *dest, const void *src, int len)//��дmemcpy����
{
	int i;
	char *dest_cp;
	const char *src_cp;

	//�ڴ����ݿ���ʱ��Ҫ��Ŀ���ַ��ԭʼ�������ڵ�ַ����Ϊnullptr
	//��ĳ����ַΪnullptr�����ʧ��
	assert(dest && src);

	dest_cp = (char *)dest;
	src_cp = (const char *)(src);
	for (i = 0; i < len; i++)                           //���ֽ�������ݿ���
		*dest_cp++ = *src_cp++;

	return dest_cp;
}
int main()
{
	char *dest = nullptr;                              //����dest�ĳ�ֵΪnullptr
	//����my_memcpy()�������ײ���Ϊnullptr
	my_memcpy(dest, "Hello World!", 12);
	return 0;
}
