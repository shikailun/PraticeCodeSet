#include "stdafx.h"
#include "pointToOffer.h"

// ����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��

/*int Solution::NumberOf1(int n) 
{
	int count = 0;
	if (n == 0)
	{
		return count;
	}
   
	

	while (n)  //������еĸ����ǰ������ʾ
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}*/


void Solution::replaceSpace(char *str, int length) 
{
	if (str == NULL || length == 0)
	{
		return;
	}
	int count = 0;
	int i = 0, j = 0;
	while (str[i] != '\0')
	{
		if (*str == ' ')
			count++;
		i++;
	}

	int oldLength = i;
	int newLength = i + count * 2;
	if (newLength > length)
	{
		return;
	}
	

	while (oldLength >= 0 && newLength > oldLength )
	{
		if (str[oldLength] != ' ')
		{
			str[newLength--] = str[oldLength];

		}
		else
		{
			str[newLength--] = '%';
			str[newLength--] = '2';
			str[newLength--] = '0';
		}
		oldLength--;

	}



	

}