#include <iostream>

using namespace std;
 
//C�����

struct List
{
	int numb;
	List* next;
};
void one(List**);
void add(List**);
int del(List**);
void main()
{
	setlocale(LC_CTYPE,"");
	int n;
	cout << "������� ���������� ���������: ";
	cin >> n;
	List* first,*end;
	one(&first);
	end  = first; 
	for(int i = 1;i < n;i++)
	{
		add(&end);
	}
	for(int i = 0;i < n;i++)
	{
		cout << del(&first)<<" ";
	}
	system ("pause");
}
// ��������� ������������ ������� 
void one(List** first)
{
	List* pv = new List;
	cout <<"������� �����: ";
	cin >> pv->numb ;
	pv->next = NULL;
	*first = pv;
}

// ���������� � �����

void add(List** end )
{
	List* pv = new List;
	cout <<"������� �����: ";
	cin >> pv->numb;
	pv->next = 0;
	(*end)->next = pv;
	*end = pv;
}

// ������� � �������� 
int del(List** first)
{
	int numb = (*first)->numb;
	List* pv = *first;
	*first = (*first)->next;
	delete pv;
	return numb;
}