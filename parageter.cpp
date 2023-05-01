#include <fstream>
#include <iostream>
using namespace std;
int main(int argc,char * argv[])
{
	if(argc == 1){
		cout << "# PARAGETER by RyanLian" << endl;
		cout << "- This tool is usually used to get parameters when running a command you do not know. You could rename this tool with the name of the command which you will run. Then run the command. This tool will write all the parameters in `List.txt`." << endl;
		cout << "- Usage:" << endl;
		cout << "	1. Rename this tool with the name of the command you will test." << endl;
		cout << "	2. Run some commmand you do not know." << endl;
		cout << "	3. Open List.txt and check." << endl;
		cout << "- For example:" << endl << "	```" << endl;
		cout << "	ren PARAGETER.* adb.*" << endl;
		cout << "	start ***" << endl  << "	```" << endl << "	```" << endl;
		cout << "	ren PARAGETER.* taskkill.*" << endl;
		cout << "	start ***" << endl << "	```" ;
		return 0;
	}
	ofstream o;
	o.open("List.txt",ios::app);
    for (size_t i = 0; i < argc; i++)
		o << argv[i] << " ";
	o << endl;
	o.close();
    return 0;
}
