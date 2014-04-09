#include <iostream>

using namespace std;
 
//Cписок

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
	cout << "Введите количество элементов: ";
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
// Начальное формирование очереди 
void one(List** first)
{
	List* pv = new List;
	cout <<"Введите чисто: ";
	cin >> pv->numb ;
	pv->next = NULL;
	*first = pv;
}

// Добавление в конец

void add(List** end )
{
	List* pv = new List;
	cout <<"Введите чисто: ";
	cin >> pv->numb;
	pv->next = 0;
	(*end)->next = pv;
	*end = pv;
}

// Выборка и удаление 
int del(List** first)
{
	int numb = (*first)->numb;
	List* pv = *first;
	*first = (*first)->next;
	delete pv;
	return numb;
}