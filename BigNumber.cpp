#include "BigNumber.h"
#include<iostream>

BigNumber AddBigNum(BigNumber a, BigNumber b)
{
	BigNumber c;
	int i;
	short m = 0;
	
		for (i = 0; i < 32; i++)
		{

			c.PerValue[i] = (a.PerValue[i] + b.PerValue[i] + m) % 10;
			m = (a.PerValue[i] + b.PerValue[i] + m) / 10;
		}

		for (i = 31; i >= 0; i--)
			if (c.PerValue[i]) { c.size = i + 1; break; }
	
	return c;
}

BigNumber NulBigNum(BigNumber a, BigNumber b)
{
	BigNumber m[32];
	BigNumber c, d;

	short mm = 0;
	int i, j, k, l;
	for (i = 0; i < 32; i++)
		c.PerValue[i] = 0;
	if (a.size > b.size)
	{
		d = a; a = b; b = d;
    }
	for (k = 0; k < 32; k++)
		for (l = 0; l < 32; l++)
			m[k].PerValue[l] = 0;

	for (i = 0; i < a.size; i++)
	{
		mm = 0;
		for (j = 0; j < b.size; j++)
		{
			m[i].PerValue[j + i] = (a.PerValue[i] * b.PerValue[j] + mm) % 10;
			mm = (a.PerValue[i] * b.PerValue[j] + mm) / 10;
		}
		m[i].PerValue[j + i] = mm;
	}
	for (i = 0; i < a.size; i++)
		c = AddBigNum(c, m[i]);
	for (i = 31; i >= 0; i--)
		if (c.PerValue[i]) { c.size = i + 1; break; }
	return c;
}
void CINBigNum(char * p, BigNumber a)
{
	for (int i = 0; i < 32; i++)
		a.PerValue[i] = p[i] - 48;
	for (int i = 31; i > -1; i--)
		if (a.PerValue[i] != 0) { a.size = i + 1; break; }
}






