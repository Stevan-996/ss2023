#include<iostream>
#include<string>

using namespace std;


template <typename T> class List_obj
{
private:

struct Elem
{
    T* name;
    Elem * next;

    Elem(T n)
    {
        this->name=n;
        next=nullptr;
    }
};

    Elem *first, *last;
    int n;
public:
    List_obj();
    ~List_obj();
    void addFront(T& name);
    void addBack(T& name);
    Elem* getFirst();
   // string getName();
    int getLength();
    void outputList();

};
    