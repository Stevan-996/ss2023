#include"relocs.h"

string Reloc::getSection()
{
    return section;
}
int Reloc::getOffset()
{
    return offset;
}
string Reloc::getType() 
{
    return type;
}
int Reloc::getNum()
{
    return num;
}
string Reloc::getSymname()
{
    return symname;
}

Reloc::Reloc(string section, int offset, string type, int num,string symname)
{
    this->section=section;
    this->offset=offset;
    this->type=type;
    this->num=num;
    this->symname=symname;
}
