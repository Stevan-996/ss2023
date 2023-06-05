#include<string>
#include<iostream>

using namespace std;

class Reloc
{
    string section;
    int offset; //in the secton
    string type;  //realocation type
    int num; //serial number
    string symname; //symbol name

 public:

    string getSection();
    int getOffset();
    string getType();
    int getNum();
    string getSymname();

    Reloc(string section, int offset, string type, int num,string symname);
    Reloc(){}
};