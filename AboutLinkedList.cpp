// 11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

// 单个字符链表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
typedef struct LNode {//创建链表的元素

	char data;
	LNode* next;
}LNode;



LNode* InitializeList(int n) { //初始化链表

	LNode* head, *normal, *end;
	head = (LNode*)malloc(sizeof(LNode));
	end = head;
	for (int i = 0; i < n; i++) {
		normal = (LNode*)malloc(sizeof(LNode));
		cout << "输入第" << i + 1 << "个元素" << endl;
		cin >> normal->data;
		cout << endl;
		end->next = normal;
		end = normal;

	}
	end->next = NULL;
	return head;
}

void ShowList(LNode* head) {//展示
	LNode* m = head;
	if (m !=NULL) {                  //先判断链表是否存在
		while (m->next != NULL) {
			m = m->next;
			cout << m->data << "  ";
		}
		cout << endl;
		cout << "----------------";
		cout << endl;
		m = NULL;
	}
	else
	{
		cout << "链表不存在" << endl;
	}
}

void DestoryList(LNode* head) {//销毁链表
	LNode* p1, *p2, *p3;
	p3 = p1 = p2 = head;
	while (p2->next != NULL) {
		p1 = p2->next;
		delete p2;
		p2 = p1;
	}
	delete p3;
	

}

void IsEmpty(LNode* head) {//判断是否为空
	if (head->next == NULL)
	{
		cout << "链表为空" << endl;
	}
	else
	{
		cout << "链表不为空" << endl;
	}
}

void CleanList(LNode* head) {//清空链表
	LNode* p1 = head->next;
	LNode* p2 = head->next;
	head->next = NULL;
	while (p2->next != NULL) {
		p1 = p2->next;
		delete p2;
		p2 = p1;
	}
	delete p2;

}

int LenList(LNode* head) {//获取链表长度
	int n = 0;
	LNode* temp;
	temp = head;
	while (temp->next != NULL) {
		n++;
		temp = temp->next;
	}

	return n;
}

void PutInList(LNode* head) {//插入元素
	LNode* m = head;
	LNode* n;
	int p;
	char a;
	cout << "输入插入位置（0为开头，超过长度则加至最后）" << endl;
	cin >> p;
	cout << "-------------------------------------------" << endl;
	cout << "输入插入元素" << endl;
	cin >> a;
	cout << "-------------------------------------------" << endl;

	if (p < LenList(head)) {
		for (int i = 0; i < p; i++) {
			m = m->next;
		}

	}
	else {
		for (int i = 0; i < LenList(head); i++) {
			m = m->next;
		}
	}
	n = (LNode*)malloc(sizeof(LNode));
	n->data = a;
	n->next = m->next;
	m->next = n;
	m = n = NULL;
}

void RemoveList(LNode* head) {//删除元素
	LNode* m = head;
	LNode* n;
	int p;
	cout << "输入删除位置（0为开头，超过长度则不删除）" << endl;
	cin >> p;
	cout << "-------------------------------------------" << endl;
	if (p < LenList(head)) {
		for (int i = 0; i < p; i++) {
			m = m->next;
		}
		n = m->next;
		m->next = n->next;
		delete n;

	}
	m = n = NULL;

}

void SearchList(LNode* head) {//元素查找
	char t;
	int i = 0;
	int n = 0;
	LNode* m = head;
	int* p = new int[LenList(m)];
	cout << "输入查找的字母" << endl;
	cin >> t;
	while (m->next != NULL) {
		i++;
		m = m->next;
		if (m->data == t) {
			p[n] = i;
			n++;
		}
	}
	cout << "共找到" << n << "个" << endl;
	if (n > 0) {
		cout << "位置是";
		for (int j = 0; j < n; j++) {
			cout << "第" << p[j] << "个" << "  ";
		}
	}
	cout << endl;
	cout << "-----------------" << endl;
	m = NULL;
}

void Tsil(LNode* head) {//反转
	LNode* p, *q, *t;
	p = head->next;
	q = NULL;
	head->next = NULL;
	while (p != NULL) {
		t = p->next;
		p->next = q;
		q = p;
		p = t;
	}
	head->next = q;

	p = q = t = NULL;
}
//初始化链表*，元素插入*，元素删除*，清空链表*，销毁链表*，获取链表长度*，链表是否为空*，元素查找*，链表反转
int main()
{
	int n, t;
	LNode* list;
	cout << "初始化（输入元素个数）" << endl;
	cin >> n;
	list = InitializeList(n);
	cout << "接下来的操作（0.退出  1.元素插入  2.元素删除  3.清空链表  4.销毁链表  5.获取长度  6.是否为空  7.元素查找  8.链表反转  9.展示）" << endl;
	while (scanf_s("%d", &t) && t != 0) {
		switch (t) {
		case 0:
		case 1:PutInList(list); break;
		case 2:RemoveList(list); break;
		case 3:CleanList(list); break;
		case 4:DestoryList(list); break;
		case 5:cout << "长度为" << LenList(list) << endl; break;
		case 6:IsEmpty(list); break;
		case 7:SearchList(list); break;
		case 8:Tsil(list); break;
		case 9:ShowList(list); break;
		default:cout << "重新输入";
		}
		cout << "接下来的操作（0.退出  1.元素插入  2.元素删除  3.清空链表  4.销毁链表  5.获取长度  6.是否为空  7.元素查找  8.链表反转  9.展示）" << endl;

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


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
