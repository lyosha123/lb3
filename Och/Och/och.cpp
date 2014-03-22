#include <iostream>

using namespace std;
struct List
{
	int numb;
	List* next;
};
void first(List**);
void add(List**);
int del(List**);
void main()
{
	setlocale(LC_CTYPE,"");
	int n;
	cout << "Введите количество элементов: ";
	cin >> n;
	List* pbeg,*pend;
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
void first(List** pbeg)
{
	List* pv = new List;
	cout <<"Введите чисто: ";
	cin >> pv->numb ;
	pv->next = NULL;
	*pbeg = pv;
}
void add(List** pend )
{
	List* pv = new List;
	cout <<"Введите чисто: ";
	cin >> pv->numb;
	pv->next = 0;
	(*pend)->next = *pend;
	*pend = pv;
}
int del(List** pbeg)
{
	int numb = (*pbeg)->numb;
	List* pv = *pbeg;
	*pbeg = (*pbeg)->next;
	delete pv;
	return numb;
}