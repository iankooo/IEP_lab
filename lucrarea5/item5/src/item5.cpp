class Bitmap{};
class Widget{
	private:
		Bitmap *pb;	//ptr to a heap-allocated object
	public:
		Widget(Bitmap *b):pb(b){}
		Widget& operator=(const Widget& rhs);
		// void swap (Widget& rhs); // exchange *this's and rhs's data
};

Widget& Widget::operator=(const Widget& rhs){
	if(this == &rhs)
		return *this;
	Bitmap *pOrig = pb;	// remember original pb
	pb = new Bitmap(*rhs.pb);	// point pb to a copy of rhs's bitmap
	delete pOrig;	// delete the original pb

	return *this;
	
	// or
	// Widget temp(rhs); // make a copy of rhs's data
	// swap(temp);	// swap *this's data with the copy's
	// return *this;
}
int main(){
	Widget w(new Bitmap);
	Widget w2(w);
	return 0;
}
