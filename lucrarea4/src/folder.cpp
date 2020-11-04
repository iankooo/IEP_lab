#include "file.h"
#include "folder.h"

Folder::Folder(const std::string& name, const std::list<File>& files)
	:name(name),
	count(files.size()),
	files(files)
	{
		// No need for assignment here
		// Just print something to make sure member variables are initialized
		std::cout<<"Folder "<<name <<" has "<<count<<" files"<<std::endl; 
	}
int main()
{
	File file1("File1","This is file1 content"); // initialization File constructor called
	File file2(file1); // calls copy constructor 
	File file3 = file1; // calls copy constructor
 
	// error
	// = operator should be called but it is disabled by only declaring the operator within the class
	// file2 = file1;
	
	std::list<File> list1;
	list1.push_back(file1); // calls copy constructor
	list1.push_back(file2); // calls copy constructor

	Folder folder1("Folder1",list1); // initialization Folder constructor called
	
	// error
	// because Folder inherit Uncopyable
	// Folder folder2(folder1);
	return 0;
}
