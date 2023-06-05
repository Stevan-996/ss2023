#include<string>
using namespace std;

class Instruction
{
private:
    //InstrDescr
    char oc; //operation code
    char mod; //modifier 
    //RegsDescr;
    char dest; //destination register
    char src; //source register
    //AddrMode
    char up;  //update for register indirect addressing
    char am; //address mode

    //payload
    string DataHigh;
    string DataLow;

    int numBytes; //num of Bytes of the instruction
public:


int getnumBytes();
char getOc();
char getMod();
char getDest();
char getSrc();
char getUp();
char getAm();
string getDataHigh();
string getDataLow();
Instruction(char oc,char mod);  //1B
Instruction(char oc,char mod,char dest,char src);  //2B
Instruction(char oc,char mod,char dest,char src,char up,char am);//3B
Instruction(char oc,char mod,char dest,char src,char up,char am,string datahigh,string datalow);  //5B
Instruction(int numberOfBytes);
Instruction(){};

};