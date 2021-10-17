// 最短路径.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<atlstr.h>
#include<vector>

using namespace std;

//#define INF 100000
//
//#define MAX 200
//
//class Matrix {
//public:
//	int M[MAX][MAX];
//};
//
//class city {
//public:
//	
//	CString country;
//	CString name;
//	float lo;
//	float la;
//};
//
//class route {
//public:
//	CString ocity;
//	CString dcity;
//	CString transport;
//	float time;
//	float cost;
//	CString oi;
//};
//
//void DFS(vector<city> &ac,bool *visit,int &t,Matrix &mat,int j) {
//	visit[t] = true;
//	wcout << ac[t].name.GetString();
//	cout << "  ";
//	for (int i = 0; i < ac.size()-1; i++) {
//		if (mat.M[t][i] < j-2&&visit[i] == false)DFS(ac, visit, i, mat,j);
//	}
//
//}
//
//void InitTimeGra(Matrix *ma, vector<city> ac, vector<route> ar) {
//	int i = 0, j = 0;
//	int w = 0;
//
//	route t;
//	t = ar[0];
//	while (1) {
//
//		if (ar[w].ocity == ac[i].name&&ar[w].dcity == ac[j].name)
//		{
//			if (t.ocity == ar[w].ocity&&t.dcity == ar[w].dcity) {
//				if (ar[w].time < t.time) {
//					ma->M[i][j] = w;
//					
//					t = ar[w];
//				}
//			}
//			else {
//				ma->M[i][j] = w;
//				
//				t = ar[w];
//			}
//			w++;
//			if (w == (ar.size() - 3))break;
//		}
//		else if (ar[w].ocity == ac[i].name&&ar[w].dcity != ac[j].name) {
//
//			j++;
//			if (j == (ac.size() - 1))j = 0;
//		}
//		else if (ar[w].ocity != ac[i].name) {
//
//			i++;
//
//			j = 0;
//		}
//
//	}
//}
//
//void InitCostGra(Matrix *ma,vector<city> ac,vector<route> ar) {
//	int i = 0, j = 0;
//	int w=0;
//
//	route t;
//	t = ar[0];
//	while(1){
//		if (ar[w].ocity == ac[i].name&&ar[w].dcity==ac[j].name){
//			if (t.ocity == ar[w].ocity&&t.dcity == ar[w].dcity) {
//				if (ar[w].cost < t.cost) {
//					ma->M[i][j] = w;
//					t = ar[w];
//				}
//			}else {
//				ma->M[i][j] = w;
//				t = ar[w];
//			}
//			w++;
//			if (w == (ar.size() - 3))break;
//		}else if(ar[w].ocity == ac[i].name&&ar[w].dcity != ac[j].name) {
//			j++;
//			if (j == (ac.size() - 1))j=0;
//		}else if (ar[w].ocity != ac[i].name) {
//		    i++;
//			j = 0;
//		}
//	}
//}
//
//
//void GetCity(string c_path, vector<city> &ac) {
//	string l;
//	city tt;
//
//	ifstream file(c_path, ios::in);
//
//	while (!file.eof()) {
//
//		getline(file, l);
//		CString t(l.c_str());
//		tt.country = t.Left(t.Find(','));
//		t.Delete(0, t.Find(',') + 1);
//		tt.name = t.Left(t.Find(','));
//		t.Delete(0, t.Find(',') + 1);
//		tt.lo = _tstof(t.Left(t.Find(',')));
//		t.Delete(0, t.Find(',') + 1);
//		tt.la = _tstof(t);
//
//		ac.push_back(tt);
//	}
//}
//
//void GetRoute(string c_path, vector<route> &ar) {
//	string l;
//	route tt;
//
//	ifstream file(c_path, ios::in);
//
//	while (!file.eof()) {
//
//		getline(file, l);
//		CString t(l.c_str());
//		tt.ocity = t.Left(t.Find(','));
//		t.Delete(0, t.Find(',') + 1);
//		tt.dcity = t.Left(t.Find(','));
//		t.Delete(0, t.Find(',') + 1);
//		tt.transport = t.Left(t.Find(','));
//		t.Delete(0, t.Find(',') + 1);
//		tt.time = _tstof(t.Left(t.Find(',')));
//		t.Delete(0, t.Find(',') + 1);
//		tt.cost = _tstof(t.Left(t.Find(',')));
//		t.Delete(0, t.Find(',') + 1);
//		tt.oi = t;
//
//		ar.push_back(tt);
//
//	}
//}
//
//int searchcity(vector<city> ac,CString city) {
//	for (int i = 0; i < ac.size(); i++) {
//		if (city == ac[i].name)return i;
//	}
//	return - 1;
//}

int main()
{
	//vector<city> ac;
	//vector<route> ar;

	//char t1[20], t2[20];

	//int noc, ndc;

	//int c_path[MAX][MAX];
	//int t_path[MAX][MAX];

	//int i, j, k;
	//
	//bool visit[MAX] = { false };

	//route inf; inf.cost = INF; inf.time = INF; inf.dcity = inf.ocity = inf.oi = inf.transport = "NULL";
	//route zero; zero.cost = 0; zero.time = INF; zero.dcity = zero.ocity = zero.oi = zero.transport = "NULL";

	//string filec_path1 = "C:\\Users\\ASUS\\Desktop\\集中实习\\集中实习\\cities.csv";
	//string filec_path2 = "C:\\Users\\ASUS\\Desktop\\集中实习\\集中实习\\routes.csv";
	//
	//GetCity(filec_path1, ac);
	//GetRoute(filec_path2, ar);

	//ar.push_back(zero);
	//ar.push_back(inf);

	//Matrix Matcost,Mattime;
	//Matrix *Mat1 = &Matcost;
	//Matrix *Mat2 = &Mattime;
	//
	//for (int i = 0; i < MAX; i++) {
	//	for (int j = 0; j < MAX; j++) {

	//		
	//		Matcost.M[i][j] =ar.size()-1; Mattime.M[i][j] = ar.size()-1;
	//		if (i == j)
	//		{
	//			 Matcost.M[i][j] = ar.size()-2; Mattime.M[i][j] = ar.size()-2;
	//		}
	//	}
	//}

	//InitCostGra(Mat1 , ac, ar);
	//InitTimeGra(Mat2, ac, ar);
	//
	//cout << "初始化完成，输入出发城市" << endl;
	//cin >> t1;
	//
	//CString oc(t1);
	//
	//noc = searchcity(ac, oc); 

	//cout << "深度优先遍历出发城市" << endl;

	//DFS(ac, visit, noc, Matcost,ar.size()-2);

	//cout << endl;

	//cout << "输入目的城市" << endl;
	//cin >> t2;
	//CString dc(t2);
	//ndc = searchcity(ac, dc);
	//float m_c[MAX];
	//float m_t[MAX];
	//bool flag[MAX];

	//int temp;
	//double min;
	////求最少花费并保存至c_path
	//if (noc >= 0 && ndc >= 0) {                           
	//	for (i = 0; i < ac.size(); i++) {               //顶点ndc到i的初始化最短路径c_path
	//		for (int j = 1; j < ac.size(); j++) {
	//			c_path[i][j] = INF;                     
	//		}
	//		c_path[i][0] = noc;
	//	}
	//	for (i = 0; i < ac.size(); i++) {                //初始化从顶点noc出发的路径，并初始化flag
	//		if (ar[Matcost.M[noc][i]].cost < INF) {
	//			m_c[i] = ar[Matcost.M[noc][i]].cost;
	//			c_path[i][1] = i;
	//		}
	//		else {
	//			m_c[i] = INF;
	//		}
	//		flag[i] = false;
	//	}

	//	for (k = 0; k < ac.size(); k++) {                 //找出一条最短路径temp并将flag标记为true
	//		temp = 0;
	//		flag[noc] = true; min = INF;
	//		for (i = 0; i < ac.size(); i++) {
	//			if ((!flag[i]) && (m_c[i] < min)) {
	//				min = m_c[i]; temp = i;
	//			}
	//		}
	//		flag[temp] = true;

	//		for (j = 0; j < ac.size(); j++) {                                            //更新所有最短路径
	//			if ((!flag[j]) && 
	//				((m_c[temp] + ar[Matcost.M[temp][j]].cost) < m_c[j]))
	//			{
	//				m_c[j] = m_c[temp] + ar[Matcost.M[temp][j]].cost;
	//				for (i = 1; i < ac.size(); i++) {
	//					if (c_path[temp][i] < INF) {
	//						c_path[j][i] = c_path[temp][i];
	//					}
	//					else {
	//						c_path[j][i] = j; break;
	//					}
	//				}
	//			}
	//		}
	//	}
	//	//求最短时间并保存至t_path
	//	for (i = 0; i < ac.size(); i++) {
	//		for (int j = 1; j < ac.size(); j++) {
	//			t_path[i][j] = INF;
	//		}
	//		t_path[i][0] = noc;
	//	}
	//	for (i = 0; i < ac.size(); i++) {
	//		if (ar[Mattime.M[noc][i]].time < INF) {
	//			m_t[i] = ar[Mattime.M[noc][i]].time;
	//			t_path[i][1] = i;
	//		}
	//		else {
	//			m_t[i] = INF;
	//		}
	//		flag[i] = false;
	//	}

	//	for (k = 0; k < ac.size(); k++) {
	//		temp = 0;
	//		flag[noc] = true; min = INF;
	//		for (i = 0; i < ac.size(); i++) {
	//			if ((!flag[i]) && (m_t[i] < min)) {
	//				min = m_t[i]; temp = i;
	//			}
	//		}
	//		flag[temp] = true;

	//		for (j = 0; j < ac.size(); j++) {
	//			if ((!flag[j]) && ((m_t[temp] + ar[Mattime.M[temp][j]].time) < m_t[j])) {
	//				m_t[j] = m_t[temp] + ar[Mattime.M[temp][j]].time;
	//				for (i = 1; i < ac.size(); i++) {
	//					if (t_path[temp][i] < INF) {
	//						t_path[j][i] = t_path[temp][i];
	//					}
	//					else {
	//						t_path[j][i] = j; break;
	//					}
	//				}
	//			}
	//		}
	//	}
	//}
	//else { cout << "wrong!"; return 0; }
	//int tm = 0;
	////最少花费路径储存至temp1.csv
	//ofstream Fileout;
	//Fileout.open("temp1.csv", ios::out);

	//if (m_c[ndc] < INF) {
	//	while (c_path[ndc][tm] < INF) {
	//		wcout << ac[c_path[ndc][tm]].name.GetString() << "->";
	//		Fileout << ac[c_path[ndc][tm]].name.GetBuffer(0)<<","
	//			<<ac[c_path[ndc][tm]].country.GetBuffer(0) <<","
	//			<<ac[c_path[ndc][tm]].lo<<","
	//			<<ac[c_path[ndc][tm]].la<<endl;
	//		tm++;
	//	}
	//	cout << endl;
	//	cout << "最少花费为" << m_c[ndc] << endl;
	//}
	//Fileout.close();
	//tm = 0;
	////最短时间路径储存至temp2.csv
	//Fileout.open("temp2.csv", ios::out);
	//if (m_t[ndc] < INF) {
	//	
	//	while (t_path[ndc][tm] < INF) {
	//		wcout << ac[t_path[ndc][tm]].name.GetString() << "->";
	//		Fileout << ac[t_path[ndc][tm]].name.GetBuffer(0) << ","
	//			<< ac[t_path[ndc][tm]].country.GetBuffer(0) << ","
	//			<< ac[t_path[ndc][tm]].lo << ","
	//			<< ac[t_path[ndc][tm]].la << endl;
	//		tm++;
	//	}
	//	cout << endl;
	//	cout << "最少时间为" << m_t[ndc]<<endl;
	//}

	//Fileout.close();
	string l;

	string c_pathn = "C:\\Users\\ASUS\\Desktop\\导线\\E35ZB.TXT";

	ifstream file(c_pathn, ios::in);

	vector<CString> point;

	while (!file.eof()) {

		getline(file, l);
		CString t(l.c_str());
		point.push_back(t);
	}
	CString t;
	int n;
	ofstream Fileout;
	Fileout.open("temp1.dat", ios::out);
	for (int i = 0; i < point.size() - 1; i++) {
		n = point[i].Find(',', point[i].GetLength() - 6);
		point[i].Delete(n, point[i].GetLength() - n + 1);
		Fileout << point[i] << endl;
	}
	Fileout.close();
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
