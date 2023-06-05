#include<stdio.h>
#include <iostream>
#include"myparser.tab.h"
#include"assembler.h"
using namespace std;

extern int yylex();
extern int yylineno;
extern char* yytext;
extern FILE* yyin;
extern FILE *yyin,*yyout;

extern void yyrestart(FILE *yyin);


int pass;


int main(int argc, char **argv)
{
    char* inputfilename=argv[4];
    char* outputfilename=argv[3];
    char* o=argv[2];
    char* command=argv[1];

    if(strcmp(command,"asembler")!=0)
    {
        cout<<"Please enter asembler command!"<<endl;
        return -1;
    }
    if(strcmp(o,"-o")!=0)
    {
        cout<<"Please enter -o command!"<<endl;
        return -1;
    }
    if(!inputfilename || !outputfilename)
    {
        cout<<"Please enter input and output stream"<<endl;
        return -1;
    }
 
    yyin=fopen(inputfilename,"r");
    if(!yyin)
    {
        cout<<"Error opening input file!"<<endl;
        return -1;
    }

    yyout=fopen(outputfilename,"w");
    if(!yyout)
    {
        cout<<"Error opening output file!"<<endl;
        return -1;
    }

    /*int ntoken;

    ntoken=yylex();

    while(ntoken)
    {
        printf("%d\n",ntoken); 

        ntoken=yylex();
    }*/

    pass=1;

    if(yyparse())
    {
        cout<<"lose"<<endl;
        return -1;
    }
    else
    {
        cout<<"dobro"<<endl;
    }

    fclose(yyin);
    fclose(yyout);



    yyin=fopen(inputfilename,"r");
    if(!yyin)
    {
        cout<<"Error opening input file!"<<endl;
        return -1;
    }

    yyout=fopen(outputfilename,"a");
    if(!yyout)
    {
        cout<<"Error opening output file!"<<endl;
        return -1;
    }

    pass=2;

    yyrestart(yyin);
    if(yyparse())
    {
        cout<<"lose"<<endl;    
        return -1;
    }
    else
    {
        cout<<"dobro"<<endl;
        return 1;
    }

    return 0;
}
