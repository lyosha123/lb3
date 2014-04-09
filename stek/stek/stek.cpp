#include <iostream>

using namespace std;
//Cтек

struct Node
{
	int numb;
	Node* p;
};
void first(Node**);
void push(Node**);
int pop(Node**);
void main()
{
	setlocale(LC_CTYPE,"");
	int n;
	cout << "Введите количество элементов: ";
	cin >> n;
	
	Node* top;
	
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
//Начальное формирование стека
void first(Node** top)
{
	Node* pv = new Node;
	cout <<"Введите чисто: ";
	cin >> pv->numb ;
	*top = pv;
}
// Занесение в стек
void push(Node** top )
{
	Node* pv = new Node;
	cout <<"Введите чисто: ";
	cin >> pv->numb ;
	pv->p = *top;
	*top = pv;
}
// Выборка и удаление из стека
int pop(Node** top)
{
	int numb = (*top)->numb;
	Node* pv = *top;
	*top = (*top)->p;
	delete pv;
	return numb;
}