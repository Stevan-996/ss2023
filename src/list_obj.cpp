#include"list_obj.h"

List_obj::List_obj()
{
    first=nullptr;
    last=nullptr;
    n=0;
}

List_obj::~List_obj()
{
	Elem *old;
	while(first!=nullptr)
	{
		old=first;
		first=first->next;
		delete old;
	}
	last=nullptr;
	first=nullptr;
	n=0;
}

/*string List::getName()
{

}*/

Elem* List_obj::getFirst()
{
    return first;
}

int List_obj::getLength()
{
    return n;
}


void List_obj::addFront(T& name)
{
    Elem *newelem=new Elem(name);
    if(first==nullptr)
    {
        first=newelem;
        last=newelem;
   }
    else
    {
        newelem->next=first;
        first=newelem;
    }        
    n++;
}
void List_obj::addBack(T& name)
{
    Elem *newelem=new Elem(name);
    if(first==nullptr)
    {
        first=newelem;
    }
    else
    {
        last->next=newelem;
    }        
    last=newelem;
    n++;
}


void List_obj::outputList()
{
    Elem *tek;
    for(tek=first;tek!=nullptr;tek=tek->next)
    {
        cout<<tek->name<<' ';
    }
    cout<<endl;
}