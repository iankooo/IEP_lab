#include<iostream>

class Point{
	private:
		int x;
		int y;
	public:
		Point(int x, int y);
		Point(const Point& rhs);
		Point& operator=(const Point& rhs); 
		void logPoint(){
			std::cout<<"(" + std::to_string(getX()) + "," + std::to_string(getY()) + ")"<<std::endl;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
};
Point::Point(int x, int y)
:x(x),
y(y)
{
}

Point::Point(const Point& rhs)
:x(rhs.x),
y(rhs.y)	//copy rhs's data
{
	std::cout<<"Point copy constructor called"<<std::endl; 
}
Point& Point::operator=(const Point& rhs)
{
	std::cout<<"Point copy assignment operator called"<<std::endl; 
	x=rhs.x;
	y=rhs.y; 	//copy rhs's data

	return *this;
}
class ColoredPoint: public Point{	// a derivated class
	private:
		std::string colorCode;
	public:
		ColoredPoint(int x, int y, std::string colorCode);
		ColoredPoint(const ColoredPoint& rhs);
		ColoredPoint& operator=(const ColoredPoint& rhs);
		void logColoredPoint(){
			std::cout<<"(" + std::to_string(this->getX()) + "," + std::to_string(this->getY()) + "," + getColorCode() + ")"<<std::endl;
		}
		std::string getColorCode(){
			return colorCode;
		}
		
};
ColoredPoint::ColoredPoint(int x, int y, std::string colorCode)
:Point(x,y),
colorCode(colorCode)
{
}

ColoredPoint::ColoredPoint(const ColoredPoint& rhs)
:Point(rhs),	// invoke base class copy constructor
colorCode(rhs.colorCode) //copy rhs's data
{
	std::cout<<"ColoredPoint copy constructor called"<<std::endl; 
}
ColoredPoint& ColoredPoint::operator=(const ColoredPoint& rhs)
{
	std::cout<<"ColoredPoint copy assignment operator called"<<std::endl; 
	Point::operator=(rhs);		// assign base class parts
	colorCode=rhs.colorCode;	// copy rhs's data

	return *this;
}


int main(){
	Point p1(1,2); // initialization Point constructor called
	std::cout<<"P1 is: ";
	p1.logPoint(); 

	Point p2(p1); // calls copy constructor 
	Point p3 = p1; // calls copy constructor 

	Point p4(3,5);
	std::cout<<"P4 is: ";
	p4.logPoint(); 

	p2 = p4;

	std::cout<<"P2 is: ";
	p2.logPoint(); 

	ColoredPoint cp1(1,1,"#ffff"); // initialization ColoredPoint constructor called
	std::cout<<"Cp1 is: ";
	cp1.logColoredPoint();

	ColoredPoint cp2(cp1);
	
	std::cout<<"Cp2 is: ";
	cp2.logColoredPoint();

	ColoredPoint cp3(10,10,"#0000");

	std::cout<<"Cp3 is: ";
	cp3.logColoredPoint();

	cp2 = cp3;

	std::cout<<"Cp2 is: ";
	cp2.logColoredPoint();
	return 0;
}
