// 24点.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

double process24(double a, double b, int c)
{
	
	double k;
	switch (c)
	{
	case 1:k = a + b; break;
	case 2:k = a - b; break;
	case 3:k = a * b; break;
	case 4:if (b != 0)k = a / b; else k = a; break;


	}
	return k;
}

int main()
{
	int  loop1, loop2, loop3, loop4, loopa, loopb, loopc,bol;
	double a[5];

	cin >> a[1] >> a[2] >> a[3] >> a[4];
	cout << a[1] << a[2] << a[3] << a[4];

	bol = 0;
	for (loop1 = 1; loop1 < 5; loop1++)
	
		for (loop2 = 1; loop2 < 5; loop2++)
		
			for (loop3 = 1; loop3 < 5; loop3++)
			
				for (loop4 = 1; loop4 < 5; loop4++)
				
					for (loopa = 1; loopa < 5; loopa++)
					
						for (loopb = 1; loopb < 5; loopb++)
						
							for (loopc = 1; loopc < 5; loopc++)
							
								if (loop1 != loop2 && loop1 != loop3 && loop1 != loop4 && loop2 != loop3 && loop2 != loop4 && loop3 != loop4)
								{
									if (process24(process24(process24(a[loop1], a[loop2], loopa), a[loop3], loopb), a[loop4], loopc) == 24)  bol = 1;
									if (process24(a[loop4], process24(process24(a[loop1], a[loop2], loopa), a[loop3], loopb), loopc) == 24)  bol = 1;
									if (process24(process24(a[loop3], process24(a[loop1], a[loop2], loopa), loopb), a[loop4], loopc) == 24)  bol = 1;
									if (process24(a[loop4], process24(a[loop3], process24(a[loop1], a[loop2], loopa), loopb), loopc) == 24)  bol = 1;
								}
							
						
					
				
			
		
	
	if (bol == 1)cout << "yes!" << endl; else cout << "no!" << endl;
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
