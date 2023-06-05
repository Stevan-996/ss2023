#include"assembler.h"

Assembler::Assembler()
{
    nsym=0;
    nrel=0;
    nsec=0;	
}

Assembler::~Assembler()
{
	
   // sections->~Sections();
}

int Assembler::getNSym()
{
	return nsym;
}

int Assembler::getNRel()
{
	return nrel;
}

int Assembler::getNSec()
{
	return nsec;
}

Symbol* Assembler::getFirstSym()
{
if(symVec.empty()) return nullptr;

	return symVec.front();
}

Reloc* Assembler::getFirstRel()
{
if(relVec.empty()) return nullptr;
	return relVec.front();

}

Section* Assembler::getFirstSec()
{
if(secVec.empty()) return nullptr;
	return secVec.front();

}

Section* Assembler::getSection(string sec) //section vise nije pokazivac, mozda je lakse Section*
{	
   for(auto s : secVec) {
        if (s->getName() == sec) {
            return s;
        }
    }
    return nullptr;

}

Symbol* Assembler::findSymbol(string label) //promenjeno ime i sta vraca
{
    for(auto sym : symVec) {
        if (sym->getLabel() == label) {
            return sym;
        }
    }
    return nullptr;
}

	return nullptr;
}

bool Assembler::isInSymTab(string label)
{
    for(auto sym : symVec) {
        if (sym->getLabel() == label) {
            return true;
        }
    }
    return false;
}


void Assembler::addSymTab(Symbol *s)
{

symVec.push_back(s);
nsym++;

}

bool Assembler::canAddSymbol(string label) //promenjen naziv, isto kao isInSymTab?
{	
		string name = label;
for(auto sym : symVec) {
    if (sym->getLabel() == name) {
            return true;
    }
    return false;
}
}

void Assembler::outputSymTab()
{
    fprintf(yyout, "SYMBOL TABLE:\n");
    fprintf(yyout,"Number \t Label \t\t\t Section \t\t Offset \t\t Local? \n");

 

    for(auto sym : symVec)
    {
        fprintf(yyout,"%d \t\t %s \t\t\t %s \t\t\t %d \t\t\t %s \n", sym->getNum(),sym->getLabel().c_str(), sym->getSection().c_str(),sym->getOffset(), sym->getLocal().c_str());
    }    
    fprintf(yyout, "\n\n");

}


void Assembler::addRelocTab(Reloc *r)
{

relVec.push_back(r);
nrel++;

}
void Assembler::outputRelocTab()
{
    fprintf(yyout, "\n\nRELOCATION TABLE:\n");
    fprintf(yyout,"Section \t Offset \t Relocation type \t Number \t Symbol\n");

    RelocTab *tek;

    for(auto rel : relVec)
    {
        fprintf(yyout,"%s \t\t %d \t\t\t %s \t\t\t %d \t %s \n", rel->getSection().c_str(),rel->getOffset(), rel->getType().c_str(), rel->getNum(), rel->getSymname().c_str());
    }    
    fprintf(yyout, "\n\n");
	

}

void Assembler::addSectionTab(Section *s)
{

secVec.push_back(sec);
nsec++;

}
void Assembler::outputSectionTab()
{
    fprintf(yyout, "\n\nSECTIONS TABLE:\n");

    SectionTab *tek;

    for(tek=firstsec;tek!=nullptr;tek=tek->next)
    {
       tek->sec->outputSection();
    }    
    fprintf(yyout, "\n\n");
}