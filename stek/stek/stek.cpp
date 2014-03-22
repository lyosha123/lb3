#include <iostream>

using namespace std;
struct List
{
	int numb;
	List* p;
};
void first(List**);
void push(List**);
int pop(List**);
void main()
{
	setlocale(LC_CTYPE,"");
	int n;
	cout << "Введите количество элементов: ";
	cin >> n;
	List* top;
	first(&top);
	for(int i = 1;i < n;i++)
	{
		push(&top);
	}
	for(int i = 0;i < n;i++)
	{
		cout << pop(&top)<<" ";
	}
	system ("pause");
}
void first(List** top)
{
	List* pv = new List;
	cout <<"Введите чисто: ";
	cin >> pv->numb ;
	*top = pv;
}
void push(List** top )
{
	List* pv = new List;
	cout <<"Введите чисто: ";
	cin >> pv->numb ;
	pv->p = *top;
	*top = pv;
}
int pop(List** top)
{
	int numb = (*top)->numb;
	List* pv = *top;
	*top = (*top)->p;
	delete pv;
	return numb;
}