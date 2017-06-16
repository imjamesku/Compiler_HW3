#define MAX_TABLE_SIZE 5000
#include <string>
class Entry{
public:
	std::string name;
	int offset;
	int scope;
	int available;
	Entry(){}
	~Entry(){}
};
class SymbolTable{
public:
	SymbolTable(){}
	~SymbolTable(){}
	Entry entries[MAX_TABLE_SIZE];
	void init();
	int lookUp(std::string name);
	int install(std::string name);
	void pop(int scope);
	int findAvailable();
};
