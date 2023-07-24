#include <iostream>
#include <string>
#include <fstream> 
using namespace std;
     
int main(int argc, char **argv)
{
	int average;
	ofstream out;
	std::cout << "Hi! here is the average of the 3 numbers\n";

  	int val;
  	if (argc >= 2){    
		out.open(filename.c_str());
		std::out << "Hi! here is the average of the 3 numbers\n";
	 	for (int i = 1; i < argc; i++){
			val = atoi(argv[i]);
			average += val;
  		}	
		cout <<"Average " << average << endl;
		out <<"Average " << average << endl;
		out.close();
  	} else
  	return 0;
}