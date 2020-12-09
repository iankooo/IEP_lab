#include<iostream>
#include<memory>

class Investment{
	private: double value;
	public:	Investment(double v) : value(v) {
			std::cout<<"Constructor called, value:"<< value << std::endl;	
		}
		~Investment() {
			std::cout<<"Destructor called, value:"<< value << std::endl;
		}
		void setValue(double v) {
			value = v;
		}
		void printValue(){
			std::cout<<"Value: "<<value<<std::endl;
		}
};

class SafeBox{ // singleton class
	private:
		double money;
		SafeBox(const SafeBox&);
		SafeBox& operator = (const SafeBox&);

		static SafeBox *instance;

		SafeBox(double &money):money(money){
			std::cout<<"SafeBox object constructor called."<<std::endl;
		}
	public:
		void showMoney(){
			std::cout<<"Money: "<<money<<std::endl;
		}
		
		static SafeBox* getInstance(double money){
			if(instance == 0){
				std::cout<<"Create the single instance of SafeBox"<<std::endl;
				instance = new SafeBox(money);
			}else{
				std::cout<<"SafeBox object is already created"<<std::endl;
			}
			return instance;
		}
};

SafeBox* SafeBox::instance = 0;

int main() {
	std::auto_ptr<Investment> ptr(new Investment(1.2));
	(*ptr).setValue(2.4);

	std::auto_ptr<Investment> ptr2(ptr); // ptr2 now points to the object; ptr is now null
	std::cout<<ptr.get()<<std::endl; // returns the memory address of ptr
	//(*ptr).printValue();    error because ptr is empty now
	std::cout<<ptr2.get()<<std::endl; // returns the memory address of ptr2
	(*ptr2).printValue(); // Value: 2.4
	

	ptr=ptr2; // now ptr points to the object, and ptr2 is null

	std::cout<<ptr.get()<<std::endl; // returns the memory address of ptr
	(*ptr).printValue(); // Value: 2.4
	std::cout<<ptr2.get()<<std::endl; // returns the memory address of ptr2
	//(*ptr2).printValue(); error because ptr2 is empty now

	// shared_ptr eliminates auto_ptr copying behaviour

	SafeBox* safeBox = SafeBox::getInstance(2000.22); // Create the single instance of SafeBox
	safeBox->showMoney(); // 2000.22

	SafeBox* safeBox2 = SafeBox::getInstance(3200.22); // SafeBox object is already created.
	safeBox->showMoney(); // 2000.22

	return 0;
}
