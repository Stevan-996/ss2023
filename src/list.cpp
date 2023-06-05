#include"list.h"

List::List()
{
    first=nullptr;
    last=nullptr;
    n=0;
}

List::~List()
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

Elem* List::getFirst()
{
    return first;
}

int List::getLength()
{
    return n;
}


void List::addFront(string name)
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
void List::addBack(string name)
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


void List::outputList()
{
    Elem *tek;
    for(tek=first;tek!=nullptr;tek=tek->next)
    {
        cout<<tek->name<<' ';
    }
    cout<<endl;
}
