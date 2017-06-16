#include "SymbolTable.h"
#include <string>
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
	return index;
}
int SymbolTable::install(std::string name, int offset, int scope){
	int index = findAvailable();
	entries[index].name = name;
	entries[index].available = 0;
	entries[index].offset = offset;
	entries[index].scope = scope;
	return index;
}
int SymbolTable::lookUp(std::string name){
	for(int i=0; i<MAX_TABLE_SIZE; ++i){
		if(entries[i].name == name && entries[i].available == 0)
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
	return -1;
}
