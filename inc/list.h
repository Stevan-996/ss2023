#include<iostream>
#include<string>

using namespace std;

struct Elem
{
    string name;
    Elem * next;

    Elem(string n)
    {
        this->name=n;
        next=nullptr;
    }
};


class List
{
private:

    Elem *first, *last;
    int n;
public:
    List();
    ~List();
    void addFront(string name);
    void addBack(string name);
    Elem* getFirst();
    string getName();
    int getLength();
    void outputList();

};
    
    