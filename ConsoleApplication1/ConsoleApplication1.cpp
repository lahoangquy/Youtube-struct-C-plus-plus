#include <iostream>
#include <string> // We can use all the important functions in the string library

// We did create successfully an object.

struct Product {
	std::string name; // The name variable will belong to string type
	double price;
	int rating;
	bool available; // available will only be yes or no so that is the reason why we use boolean value
};
// An object is a collection of data grouped under a certain name
// we can create any objects we want and all the properties of that object
// In the example above, we did create a product object and in the product obhect there will be name, price, rating and available.
int main()
{
	Product book;
	Product Tshirt;
	Product labtop;
	Product* ptr = &book;
	Product& ref = Tshirt;
	book.name = " King of games"; // we did assign the property name in the product object.
	book.price = 10.99;
	std::cout << ptr->name << std::endl;
	std::cout << ptr->price<< std::endl;


}

