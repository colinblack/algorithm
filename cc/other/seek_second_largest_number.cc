#include<iostream>
#include<time.h>


using namespace std;

class array{
public:
	void setNumber();
	int  findsec();

private:
	int menber[10];

};



void array::setNumber()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		this->menber[i] = rand() % 100;
	}
}



int main(void)
{


	return 0;
}