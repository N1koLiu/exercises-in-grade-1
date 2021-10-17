// 有效长度.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Stack.h"

using namespace std;

int LongestWords(char *a) {
	char *p = a;
	int len = strlen(a);
	int t,l=0, max = 0;
	Stack s;
	

	for (int i = 0; i < len; i++) {
		if (p[i] == '('){
			s.Push(i);

		}
		else if (p[i] == ')') {
			s.Show(t);
			if (s.StackSize != 1) {
				s.Pop();
				s.Show(t);
				l = i - t;
				if (l > max)max = l;
			}
			else {
				s.Pop();
				s.Push(i);
			}
		}
		else {
			return -1;
		}
		
	}
	return max;
}
int main()
{
	char a[20];
	cout << "输入括号：（输入错误则返回-1）"<<endl;
	cin >> a;
	int t = LongestWords(a);
	if (t != -1) {
		cout << "最长长度为" << t<<endl;
	}
	else {
		cout << t<<endl;
	}
	cout << "输入括号：（输入错误则返回-1）" << endl;
	cin >> a;
	t = LongestWords(a);
	if (t != -1) {
		cout << "最长长度为" << t<<endl;
	}
	else {
		cout << t << endl;
	}
	cout << "输入括号：（输入错误则返回-1）" << endl;
	cin >> a;
	t = LongestWords(a);
	if (t != -1) {
		cout << "最长长度为" << t<<endl;
	}
	else {
		cout << t << endl;
	}

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
