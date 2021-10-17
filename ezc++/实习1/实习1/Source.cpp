// �����ַ�����.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>
using namespace std;
typedef struct LNode {//���������Ԫ��

	char data;
	LNode* next;
}LNode;



LNode* InitializeList(int n) { //��ʼ������

	LNode* head, * normal, * end;
	head = (LNode*)malloc(sizeof(LNode));
	end = head;
	for (int i = 0; i < n; i++) {
		normal = (LNode*)malloc(sizeof(LNode));
		cout << "�����" << i + 1 << "��Ԫ��" << endl;
		cin >> normal->data;
		cout << endl;
		end->next = normal;
		end = normal;

	}
	end->next = NULL;
	return head;
}

void ShowList(LNode* head) {//չʾ
	LNode* m = head;
	if (m=!0xDDDDDDDD) {                  //���ж������Ƿ����
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
		cout << "��������" << endl;
	}
}

LNode* DestoryList(LNode* head) {//��������
	LNode* p1,* p2,* p3;
	p3=p1 = p2 = head;
	while (p2->next != NULL) {
		p1 = p2->next;
		delete p2;
		p2 = p1;
	}
	delete p3;
	return NULL;

}

void IsEmpty(LNode* head) {//�ж��Ƿ�Ϊ��
	if (head->next == NULL)
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "����Ϊ��" << endl;
	}
}

void CleanList(LNode* head) {//�������
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

int LenList(LNode* head) {//��ȡ������
	int n = 0;
	LNode* temp;
	temp = head;
	while (temp->next != NULL) {
		n++;
		temp = temp->next;
	}

	return n;
}

void PutInList(LNode* head) {//����Ԫ��
	LNode* m = head;
	LNode* n;
	int p;
	char a;
	cout << "�������λ�ã�0Ϊ��ͷ������������������" << endl;
	cin >> p;
	cout << "-------------------------------------------" << endl;
	cout << "�������Ԫ��" << endl;
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

void RemoveList(LNode* head) {//ɾ��Ԫ��
	LNode* m = head;
	LNode* n;
	int p;
	cout << "����ɾ��λ�ã�0Ϊ��ͷ������������ɾ����" << endl;
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

void SearchList(LNode* head) {//Ԫ�ز���
	char t;
	int i = 0;
	int n = 0;
	LNode* m = head;
	int* p = new int[LenList(m)];
	cout << "������ҵ���ĸ" << endl;
	cin >> t;
	while (m->next != NULL) {
		i++;
		m = m->next;
		if (m->data == t) {
			p[n] = i;
			n++;
		}
	}
	cout << "���ҵ�" << n << "��" << endl;
	if (n > 0) {
		cout << "λ����";
		for (int j = 0; j < n; j++) {
			cout << "��" << p[j] << "��" << "  ";
		}
	}
	cout << endl;
	cout << "-----------------" << endl;
	m = NULL;
}

void Tsil(LNode* head) {//��ת
	LNode* p, * q, * t;
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
//��ʼ������*��Ԫ�ز���*��Ԫ��ɾ��*���������*����������*����ȡ������*�������Ƿ�Ϊ��*��Ԫ�ز���*������ת
int main()
{
	int n, t;
	LNode* list;
	cout << "��ʼ��������Ԫ�ظ�����" << endl;
	cin >> n;
	list = InitializeList(n);
	cout << "�������Ĳ�����0.�˳�  1.Ԫ�ز���  2.Ԫ��ɾ��  3.�������  4.��������  5.��ȡ����  6.�Ƿ�Ϊ��  7.Ԫ�ز���  8.����ת  9.չʾ��" << endl;
	while (scanf_s("%d", &t)&&t!=0) {
		switch (t) {
		case 0:
		case 1:PutInList(list); break;
		case 2:RemoveList(list); break;
		case 3:CleanList(list); break;
		case 4:list=DestoryList(list); break;
		case 5:cout << "����Ϊ" << LenList(list) << endl; break;
		case 6:IsEmpty(list); break;
		case 7:SearchList(list); break;
		case 8:Tsil(list); break;
		case 9:ShowList(list); break;
		default:cout << "��������";
		}
		cout << "�������Ĳ�����0.�˳�  1.Ԫ�ز���  2.Ԫ��ɾ��  3.�������  4.��������  5.��ȡ����  6.�Ƿ�Ϊ��  7.Ԫ�ز���  8.����ת  9.չʾ��" << endl;

	}


}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
