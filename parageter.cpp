#include <fstream>
#include <iostream>
using namespace std;
int main(int argc,char * argv[])
{
	ofstream o;
	o.open("List.txt",ios::app);
    o << "NUM: " << argc << std::endl;
    for (size_t i = 0; i < argc; i++)
		o << "PARAMETER" << i+1 << ": " << argv[i] << endl;
	o << "-=-=-=-=-=-=-=-=-" << endl;
	o.close();
    return 0;
}
