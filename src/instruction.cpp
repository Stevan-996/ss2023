#include"instruction.h"
#include<iostream>
int Instruction::getnumBytes()
{
    return numBytes;
}
char Instruction::getOc()
{
    return oc;
}
char Instruction::getMod()
{
    return mod;
}
char Instruction::getDest()
{
    return dest;
}
char Instruction::getSrc()
{
    return src;
}
char Instruction::getUp()
{
    return up;
}
char Instruction::getAm()
{
    return am;
}
string Instruction::getDataHigh()
{
    return DataHigh;
}
string Instruction::getDataLow()
{
    return DataLow;
}

Instruction::Instruction(char oc,char mod)
{
    this->oc=oc;
    this->mod=mod;

    this->numBytes=1;
}
Instruction::Instruction(char oc,char mod,char dest,char src)
{
    this->oc=oc;
    this->mod=mod;
    this->dest=dest;
    this->src=src;

    this->numBytes=2;
}
Instruction::Instruction(char oc,char mod,char dest,char src,char up,char am)
{
    this->oc=oc;
    this->mod=mod;
    this->dest=dest;
    this->src=src;
    this->up=up;
    this->am=am;

    this->numBytes=3;
}

Instruction::Instruction(char oc,char mod,char dest,char src,char up,char am,string datahigh,string datalow)
{
    this->oc=oc;
    this->mod=mod;
    this->dest=dest;
    this->src=src;
    this->up=up;
    this->am=am;
    this->DataHigh=datahigh;
    this->DataLow=datalow;

    this->numBytes=5;
}

Instruction::Instruction(int numberOfBytes)
{
    this->oc=0+48;
    this->mod=0+48;
    this->dest=0+48;
    this->src=0+48;
    this->up=0+48;
    this->am=0+48;
    this->DataHigh="00";
    this->DataLow="00";

    this->numBytes=numberOfBytes;
}