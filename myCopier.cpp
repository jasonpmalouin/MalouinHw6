/** A program that opens the text file specified by the first argument, reads and prints line by line to the text file specified by the second argument.  
 * *   The read file is the first argument. The write file is the seconf argument.
 * *   The text file should be placed in /home/debian for this to work with the specified file path.
 * */

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian/MalouinHw6/"


int main(int argc, char* argv[]){
	if(argc!=3){
		cout << endl;
		cout << "Usage is myCopier followed by file to read and file to write: " << endl;
		cout << " e.g. myCopier <readFile> <writeFile>" << endl;
		return 2;
	}
	string read(argv[1]);
	string write(argv[2]);
	cout << endl;
	cout << "Starting the myCopier program" << endl;
	cout << "The current FILE Path is: " << FILE_PATH << endl;
	cout << "Read file name passed is: " << read << endl;
	cout << "Write file name passed is: " << write << endl;

	fstream reads;
	fstream writes;
	string line;

	string readname = "/"+ read;
	string readpath = FILE_PATH + readname;
	string writename = "/" + write;
	string writepath = FILE_PATH + writename;


	// The c_str() method returns a C++ string as a C string.
         reads.open((readpath).c_str(), fstream::in);
	 writes.open((writepath).c_str(), fstream::out);
	 while(getline(reads,line))
	 {
            writes << line << endl;
	 }
	 reads.close();
	 writes.close();
	
	 cout << "Finished copying..." << endl;
	 return 0;
         }
	
