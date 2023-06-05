#include<string>
#include<iostream>
#include"list_obj.h"

using namespace std;
extern FILE* yyout;

class Section
{
private: 
    string name;
	List_obj* array;

public:
    Sections();
    ~Sections();
    string getName();
    void addInstruction(Instruction *i);
    void outputSection();

};