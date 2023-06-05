#include<string.h>
#include"symbol.h"
#include"section.h"
#include"list.h"
#include"relocs.h"




extern FILE* yyout;

class Assembler{

private:


    int nsym; //the number of symbols
    int nrel; //the number of realocs
    int nsec; //the number of sections
    //Sections *sections;
    std::vector<Symbol*> symVec;
	std::vector<Reloc*> relVec;
	std::vector<Section*> secVec;
 

public:

    Assembler();
    ~Assembler();
    
    int getNSym();
    Symbol* getFirstSym();

    int getNRel();
    Reloc* getFirstRel();
	
	int getNSec();
    Section* getFirstSec();

    Section* getSection(string globalSection);

    Symbol* findSymbol(string label);
    bool isInSymTab(string label);
   // void addSymTab(Symbol *s);
    bool canAddSymTab(string label);
    void outputSymTab();

    void addRelocTab(Reloc *r);
    void outputRelocTab();
     
    void addSectionTab(Section *s);
    void outputSectionTab();

};