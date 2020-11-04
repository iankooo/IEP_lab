#ifndef FOLDER_H
#define FOLDER_H

#include<iostream>
#include<list>
#include "file.h"
#include<string.h>

class Uncopyable{
	protected:	// allow construction
		Uncopyable(){} // and destruction of
		~Uncopyable(){}	// derived objects...
	private:
		Uncopyable(const Uncopyable&);	// ...but prevent copying
		Uncopyable& operator=(const Uncopyable&);
}; 

class Folder:private Uncopyable{
	private:
		std::string name;
		int count;
		std::list<File> files;
	public:
		Folder(){
			std::cout<<"Default constructor called"<<std::endl;		
		}
		Folder(const std::string& name, const std::list<File>& files);
};
#endif
