#include <iostream>

using namespace std;
 
//�������

struct Node
{
	int numb;
	Node* p;
};
void first(Node**);
void add(Node**);
int del(Node**);
void main()
{
	setlocale(LC_CTYPE,"");
	int n;
	cout << "������� ���������� ���������: ";
	cin >> n;
	Node* pbeg,*pend;
	first(&pbeg);
	pend  = pbeg; 
	for(int i = 1;i < n;i++)
	{
		add(&pend);
	}
	for(int i = 0;i < n;i++)
	{
		cout << del(&pbeg)<<" ";
	}
	system ("pause");
}
// ��������� ������������ ������� 
void first(Node** pbeg)
{
	Node* pv = new Node;
	cout <<"������� �����: ";
	cin >> pv->numb ;
	pv->p = NULL;
	*pbeg = pv;
}

// ���������� � �����

void add(Node** pend )
{
	Node* pv = new Node;
	cout <<"������� �����: ";
	cin >> pv->numb;
	pv->p = 0;
	(*pend)->p = pv;
	*pend = pv;
}

// ������� � �������� 
int del(Node** pbeg)
{
	int numb = (*pbeg)->numb;
	Node* pv = *pbeg;
	*pbeg = (*pbeg)->p;
	delete pv;
	return numb;
}