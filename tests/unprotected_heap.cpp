#include <stdio.h>
#include <stdlib.h>

#define HEAP_CHECKING
#include "watchman.h"

class Test{
public:

void a(){
	scanf("%s", buffer);
}

private:
char buffer[10];
};

class Command{
public:

Command(){
	command[0] = 'l';
	command[1] = 's';
	command[2] = '\0';
}

void a(){
	system(command);
}

private:
char command[10];
};

int main(){
	//heap_check();
	Test* aTest = new Test();
	Command* c1 = new Command();
	Command* c2 = new Command();
	Command* c3 = new Command();
	Command* c4 = new Command();
	printf("%x\t", aTest);
	printf("%x", c1);
	//free(c1);
	aTest->a();
	c2->a();
	delete c2;
	c3->a();
	delete c3;
	c4->a();
	delete c4;
	delete aTest;
}
