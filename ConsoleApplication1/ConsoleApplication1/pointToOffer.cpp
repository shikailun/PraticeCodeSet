#include "stdafx.h"
#include "pointToOffer.h"

// 输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。

/*int Solution::NumberOf1(int n) 
{
	int count = 0;
	if (n == 0)
	{
		return count;
	}
   
	

	while (n)  //计算机中的负数是按补码表示
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