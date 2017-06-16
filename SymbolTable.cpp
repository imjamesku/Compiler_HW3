#include "symbolTable.h"
#include <string>
Entry::Entry(){
	offset = 0;
	scope = 0;
	available = 0;
}
void SymbolTable::init(){
	for(int i=0; i<MAX_TABLE_SIZE; ++i){
		entries[i].available = 1;
		entries[i].scope = 0;
		entries[i].offset = 0;
	}
}
int SymbolTable::install(std::string name){
	int index = findAvailable();
	entries[index].name = name;
	entries[index].available = 0;
}
int SymbolTable::lookUp(std::string name){
	for(int i=0; i<MAX_TABLE_SIZE; ++i){
		if(entries[i].name == name)
			return i;
	}
}
void SymbolTable::pop(int scope){
	for(int i=0; i<MAX_TABLE_SIZE; ++i){
		if(entries[i].scope == scope){
			entries[i].available = 1;
			entries[i].scope = 0;
		}
	}
}
int SymbolTable::findAvailable(){
	for(int i=0; i<MAX_TABLE_SIZE; ++i){
		if (entries[i].available == 1){
			return i;
		}
	}
}