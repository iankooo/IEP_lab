#include "file.h"

File::File(std::string name)
	:name(name)
	{
		std::cout<<"File "<<name<<std::endl; 
	}
File::File(std::string name, std::string content)
	:name(name),
	content(content)
	{
		std::cout<<"File "<<name <<" with content: "<<content<<std::endl; 
	}
