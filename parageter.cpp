#include <fstream>
#include <iostream>
using namespace std;
int main(int argc,char * argv[])
{
	ofstream o;
	o.open("List.txt",ios::app);
    for (size_t i = 0; i < argc; i++)
		o << argv[i] << " ";
	o << endl;
	o.close();
    return 0;
}
