#include "stdio.h"

int main ()
{
	//�������飬���ҽ������鳤�ȵļ��� 
	int arr[]={3,5,2,1,4,66,55,234,34,23,2003,12,12,5201314};
	int len=sizeof(arr)/sizeof(int);
	//����ð�����򣬰�����֮�е����ݽ��а�����������
	//������forѭ����Ƕ��
	 
	 for(int i=0;i<len-1;i++)
	 {
	 
	for(int j=0;j<len-1-i;j++)
	{
		//i��i+1���໥���бȽ�,���ڵ�Ԫ���������бȽϣ�С����ǰ�棬����ں��� 
		if(arr[j]>arr[j+1])
		{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		} 
	}
}
	
	 
	for(int i=0;i<len;i++)
	{
		printf ("%d\n",arr[i]);
	}
}
