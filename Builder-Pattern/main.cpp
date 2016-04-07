#include"header.h"

int main(int argc,char* argv[])
{
	Director myBuilder;
	Building* b1=myBuilder.BuildX_bow();
	b1->show();
	Building* b2=myBuilder.BuildArcher_Tower();
	b2->show();
	system("pause");
	return 0;
}
