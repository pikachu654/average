#include <iostream>
#include <string>
#include <fstream> 
using namespace std;
     
int main(int argc, char **argv)
{
	int average;
	std::cout << "Hi! here is the average of the 3 numbers\n";

  	int val;
  	if (argc >= 2){    
	 	for (int i = 1; i < argc; i++){
			val = atoi(argv[i]);
			average += val;
  		}	
		cout <<"Average " << average << endl;
  	} else
  	return 0;
}