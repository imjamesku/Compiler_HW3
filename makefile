codegen: lex.yy.cpp y.tab.cpp
	g++ -o codegen lex.yy.cpp y.tab.cpp SymbolTable.cpp -lfl
scanner: lex.yy.cpp
	gcc -o scanner lex.yy.cpp -lfl
lex.yy.cpp: scanner.l
	flex --header-file=lex.yy.h -o lex.yy.cpp scanner.l
y.tab.cpp: hw2.y
	byacc -d -o y.tab.cpp hw2.y
clean:
	rm lex.yy.cpp y.tab.cpp y.tab.h
