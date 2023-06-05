#include"symbol.h"


string Symbol::getLabel()
{
    return label;
}
string Symbol::getSection()
{
    return section;
}
int Symbol::getOffset()
{
    return offset;
}
string Symbol::getLocal() 
{
    return local;
}
int Symbol::getNum()
{
    return num;
}

Symbol::Symbol(string label,string section, int offset, string local, int num)
{
    this->label=label;
    this->section=section;
    this->offset=offset;
    this->local=local;
    this->num=num;
}
