// IWant2GoDSM.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>

int main()
{
	char num[12] ="";
	int len;
	gets_s(num);
	len = strlen(num);
	for (int i = 0; i < len; i++)
	{
		if (i > len - 5)
			printf("%c", num[i]);
		else
			printf("*");
	}
    return 0;
}
