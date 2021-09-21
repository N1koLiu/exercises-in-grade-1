
#ifndef BIGNUMBER_H_
#define BIGNUMBER_H_

struct BigNumber
{
	short PerValue[32] ;
	short size;
};

BigNumber AddBigNum(BigNumber a, BigNumber b);
BigNumber NulBigNum(BigNumber a, BigNumber b);
void CINBigNum(char * p, BigNumber a);

#endif 
