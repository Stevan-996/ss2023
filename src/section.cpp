#include"section.h"
#include<iostream>

Section::Section(string nname)
{
  name = nname;
  array = new List_obj();
}

Section::~Section()
{
	array->~List_obj();
}

void Section::addInstruction(Instruction *i)
{
	array->addBack(i);
}

void Section::outputSection()
{
   
      //fprintf(yyout,"-------------------------------------------------------------\n\n");
        fprintf(yyout, "#%s SECTION:\n", name.c_str());//c_str()
	  //fprintf(yyout,"Offset \t\t Instruction \n");
		 for(tek=array->getFirst();tek!=nullptr;tek=tek->next) //nije null nego nullptr
		{
			//output instruction text
			fprintf(yyout,"-------------------------------------------------------------\n\n");
		}      
}

string Section::getName(){
	return name;
}