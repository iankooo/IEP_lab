#ifndef FILE_H
#define FILE_H

#include<iostream>

class File{
	private:
		std::string name;
		std::string content;
	public:
		File(std::string name);
		File(std::string name, std::string content);

		File& operator=(const File&); 
		File(const File& copyFile){
			std::cout<<"Copy constructor called"<<std::endl;
		}
};
#endif
