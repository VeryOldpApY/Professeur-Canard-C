#include <stdio.h>
#include "table_ascii.h"

void Table_Ascii()
{
	for (int i = 33; i < 127; i++)
	{
		if (i % 10)
		{
			printf("[%d, %c] ", i, i);	
		}
		else
		{
			printf("\n[%d, %c] ", i, i);
		}
	}
}
