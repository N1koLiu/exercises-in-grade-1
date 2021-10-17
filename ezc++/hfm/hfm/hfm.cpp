// hfm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"stdlib.h"
#include"BinaryTree.h"
#include"StackTree.h"
#include<atlstr.h>




using namespace std;

void Coding(char a[],CString s[],int n) {
	CString ss;
	char aa[26];
	char *ap;
	cout << "输入字符进行编码：" << endl;
	cin >> aa;
	ap = aa;
	while (*ap) {
		for (int i = 0; i < n; i++) {
			if (*ap == a[i]) {
				ss = ss + s[i]; break;
			}
		}
		ap++;
	}
	cout << "编码为：" << endl;
	wcout << ss.GetString() << endl;
	cout << "-------------------------"<<endl;

}

void Decoding(char a[],CString s[],int n) {
	
	char at[32];
	CString cs;
	
	cout << "输入编码进行解码：" << endl;
	cin >> at;

	CString ss(at);

	while (ss != "") {
		for (int i = 0; i < n; i++) {
			if (ss.Find(s[i]) == 0) {
				CString t(a[i]);
				cs = cs + t;
				ss.Delete(0, s[i].GetLength());
				break;
			}
		}

	}

	cout << "解码为：" << endl;
	wcout << cs.GetString()<<endl;
	cout << "----------------------";


}

StackTree *BuildLine(int n,int w[]) {
	StackTree *p,*p1;
	p1=p = (StackTree *)malloc(sizeof(StackTree));
	for (int i = 0; i < n; i++) {
		
		p1->nb= (StackTree *)malloc(sizeof(StackTree));
		p1->nb->S_B.LeftChildTree = p1->nb->S_B.RightChildTree = p1->nb->S_B.ParentTree = NULL;
		p1->nb->S_B.weight = w[i];
		p1 = p1->nb;
	}
	p1 = NULL;
	
	return p;
}
void MakeTree(StackTree *t,int &n) {
	StackTree *p1 = t;
	StackTree *p2 = t;
	StackTree *p3 = t;
	for (int i = 0; i < n; i++) {
		p1 = p1->nb;
	}
	for (int i = 0; i < n - 1; i++) {
		p2 = p2->nb;
	}
	
	StackTree *pn = (StackTree *)malloc(sizeof(StackTree));
	pn->nb = NULL;
	pn->S_B.ParentTree = NULL;
	pn->S_B.LeftChildTree = &p1->S_B; p1->S_B.ParentTree = &pn->S_B;
	pn->S_B.RightChildTree = &p2->S_B; p2->S_B.ParentTree = &pn->S_B;
	pn->S_B.weight = p1->S_B.weight + p2->S_B.weight;
	while (p3->nb->S_B.weight > pn->S_B.weight) {
		p3 = p3->nb;
	}
	pn->nb = p3->nb;
	p3->nb = pn;
	n--;
	if (n >= 2) { MakeTree(t, n); }
}
CString FindCode(BinaryTree *t) {
	CString ss;
	BinaryTree *tp1=t;
	BinaryTree *tp2 = t->ParentTree;
	while (tp1->ParentTree) {
		if (tp2->LeftChildTree == tp1)ss.Insert(0, '0');
		if (tp2->RightChildTree == tp1)ss.Insert(0, '1');

		tp1 = tp2;
		tp2 = tp2->ParentTree;
	}
	return ss;
}


int main()
{
	FILE *fp;
	int n,nn;
	char a[26]="";
	int w[26];
	fp = fopen("C:\\Users\\ASUS\\Desktop\\hafuman_text.txt", "r");
	fscanf(fp, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fp, "\n%c %d", &a[i], &w[i]);
	}
	fclose(fp);
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (w[j] > w[j - 1]) {
				swap(w[j], w[j - 1]);
				swap(a[j], a[j - 1]);
			}
		}
	}
	StackTree *p = BuildLine(n, w);
	nn = n;
	MakeTree(p, nn);
	CString s[26];
	StackTree *p1=p;

	int j = 0;

	BinaryTree* bp;
	p1 = p1->nb;
	while (p1->nb) {
		if (!p1->S_B.LeftChildTree) {
			bp = &p1->S_B;
			s[j]=FindCode(bp);
			j++;
		}
		p1 = p1->nb;
		if (j == n)break;
	}
	for (int i = 0; i < n; i++) {
		
		cout << a[i] << "  " ;
		wcout << s[i].GetString() << endl;
	}
	Coding(a, s, n);
	Decoding(a, s, n);
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
