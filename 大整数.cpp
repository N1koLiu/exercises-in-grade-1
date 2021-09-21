// 大整数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cstring>
#include"string.h"
#include"BigNumber.h"

using namespace std;
int main()           //实现程序
{
	char a[33] , b[33], c[33] ;
	int i,length;
	for (i = 0; i < 32; i++)
		a[i] = b[i] = '0';
	a[32] = b[32] = '\0';
	cin.getline(c, 33);
	length = strlen(c);
	for (i = 0; i < length; i++)
		a[i] = c[length - i-1];
	
	cin.getline(c, 33);
	length = strlen(c);
	for (i = 0; i < length; i++)
		b[i] = c[length - i - 1];
	
	BigNumber m;
	for (i = 0; i < 32; i++)
		m.PerValue[i] = 0;
	m.size = 0;
	BigNumber A=m, B=m,sum=m,acc=m;
	for (int i = 0; i < 32; i++)
		A.PerValue[i] = a[i] - 48;
	for (int i = 31; i > -1; i--)
		if (A.PerValue[i] != 0) { A.size = i + 1; break; }
	for (int i = 0; i < 32; i++)
		B.PerValue[i] = b[i] - 48;
	for (int i = 31; i > -1; i--)
		if (B.PerValue[i] != 0) { B.size = i + 1; break; }
	sum = AddBigNum(A, B);

	acc = NulBigNum(A, B);
	cout << "合为"<<endl;
	for (i = sum.size-1; i >= 0; i--)
		cout << sum.PerValue[i];
	cout<<"积为"<<endl;
	for (i = acc.size - 1; i >= 0; i--)
		cout << acc.PerValue[i];
	

}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
