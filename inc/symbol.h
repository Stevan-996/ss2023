#include<string>
#include<iostream>

using namespace std;

class Symbol{

    string label;
    string section;
    int offset; //in the secton
    string local;
    int num; //serial number

 public:

    string getLabel();
    string getSection();
    int getOffset();
    string getLocal();
    int getNum();

    Symbol(string label,string section, int offset, string local, int num);
    Symbol(){}
};