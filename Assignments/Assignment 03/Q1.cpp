#include <iostream>
#include <string>
using namespace std;

class bookType
{

	string title;
	string author[3];
	string publisher;
	int ISBN;
	double price;
	int numCopies;
	int numOfAuthor;
	int yearOfPub;
	
public:
	bookType();
	bookType(string,string,string [3],int,double,int,int,int);
	void set_title(string);
	string get_title() const;
	void display_title();
	bool match_titles(string);
	
	void set_authors(string [3]);
	string get_authors();
	void display_authors();

	void set_numCopies(int);
	int get_numCopies() const;
	void update_numCopies(int);
	void display_numCopies();

	void set_publisher(string);
	string get_publisher() const;
	void display_publisher();
	

	void setISBN(int);
	int getISBN() const;
	void displayISBN();

	void set_price(double);
	double get_price() const;
	void display_price();

	void set_yearOfPub(int);
	int get_yearOfPub() const;
	void display_yearOfPub();

	void set_numOfAuthors(int);
	int get_numOfAuthors() const;

	bool search(bookType arr[100],bookType);



	

	
};// end of class BookType


bookType ::bookType()
{
	title = "";
	author[0] = "";
	author[1] = "";
	author[2] = "";
	author[3] = "";
	publisher = "";
	ISBN = 0;
	price = 0;
	numCopies = 0;
	int numOfAuthor = 0;
	
}  // end of Default constructor
bookType ::bookType(string title,string publisher,string a[3],int myISBN,double price,int numCopies,int numOfAuthor,int yearOfPub)
{	
	this->title = title;
	author[0] = a[0];
	author[1]= a[1];
	author[2] = a[2];
	author[3] = a[3];
	this->publisher = publisher;
	ISBN = myISBN;
	this-> price = price;
	this-> numCopies = numCopies;
	this-> yearOfPub = yearOfPub;

}  // end of Parameterized constructor

void bookType::set_title(string title)
{
	this->title = title;
}  //end function set_titles

string bookType:: get_title() const
{
	return title;
}  //end function get_titles

void bookType::display_title()
{
	cout << "\nTitle:\t" << get_title() << endl;
}  //end function display_titles

bool bookType::match_titles(string myTitle)
{
	if(title == myTitle)
		return true;
	else
		return false;
} //end function match_titles

void bookType::set_authors(string a[4])
{
	author[0] = a[0];
	author[1] = a[1];
	author[2] = a[2];
	author[3] = a[3];

}  //end function set_authors

void bookType::display_authors()
{

	cout << "Authors: " << author[0] << ", " << author[1] << ", " << author[2] << ", "  << author[3] << ", " << endl;
}  //end function display_authors

string bookType :: get_authors()
{
	return author[3];
}  //end function get_authors

void bookType::set_numOfAuthors(int numOfAuthor)
{
	this-> numOfAuthor = numOfAuthor;
} //end function set_numOfAuthors
 
int bookType:: get_numOfAuthors() const
{
	return numOfAuthor;
}  //end function get_numOfAuthors

void bookType::set_numCopies(int NumCopies)
{
	this-> numCopies = numCopies;
}//end function set_copies

void bookType::update_numCopies(int n)
{
	numCopies = n;
} //end function update_numCopies

int bookType::get_numCopies() const
{
	return numCopies;
}//end function get_copies


void bookType::display_numCopies()
{
	cout << "The number of copies available in stock: " << get_numCopies() << endl;
}//end function display_copies


void bookType::set_publisher(string publisher)
{
	this->publisher = publisher;
}//end function set_publisher

string bookType::get_publisher() const
{
	return publisher;
}//end function get_publisher

void bookType::display_publisher()
{
	cout << "Publisher is:  " << get_publisher() << endl;
}//end function display_publisher


void bookType::setISBN(int myISBN)
{
	ISBN = myISBN;
}//end function setISBN

int bookType::getISBN() const
{
	return ISBN;
}//end function getISBN

void bookType:: displayISBN()
{
	cout << "ISBN.no is: " << getISBN() << endl;
}//end function displayISBN

void bookType::set_price(double price)
{
	this->price = price;
}//end function set_price


double bookType::get_price() const
{
	return price;
}//end function get_price

void bookType::display_price()
{
	cout<<"The book price is:  " << get_price() << endl;
}//end function display_price

void bookType ::set_yearOfPub(int yearOfPub)
{
	this->yearOfPub = yearOfPub;
} //end function set_yearOfPub

int bookType ::get_yearOfPub() const
{
	return yearOfPub;
} //end function get_yearOfPub

void bookType ::display_yearOfPub()
{
	cout << "Publication year of the Book is : " << yearOfPub << endl;
} //end function display_yearOfPub

bool bookType::search(bookType arr[100],bookType b1)
{
	for(int i = 0; i<100; i++)
	{
		if(b1.title == arr[i].title)
		{
			return 1;
			break;
		}
		else
			return 0;

	}
}

int main()
{
	string author[4];
	string author_name;
	cout << "Enter the Authors name .. " << endl;
	for(int i =0; i<4; i++)
	{	
		cout << i + 1 << " : Author ";
		cin >> author_name;
		author[i]=author_name;
	}
	string author1[3]={"Akbar","Dawood","Ali"};

	bookType b1;
	bookType b2("DSmalik","Case Bounded",author1,3456,800,12,4,1999);
	bookType b3[100];
	b1.set_title("blackout");
	b1.get_title();
	b1.display_title();
	b1.match_titles("splat");
	b1.set_numCopies(4);
	b1.get_numCopies();
	b1.update_numCopies(6);
	b1.display_numCopies();
	b1.set_price(50);
	b1.get_price();
	b1.display_price();
	b1.set_publisher("The Fleurons");
	b1.get_publisher();
	b1.display_publisher();
	b1.set_authors(author);
	b1.get_authors();
	b1.display_authors();
	b1.setISBN(9876);
	b1.getISBN();
	b1.displayISBN();
	b1.set_numOfAuthors(4);
	b1.get_numOfAuthors();
	b1.set_yearOfPub(2002);
	b1.get_yearOfPub();
	b1.display_yearOfPub();
	b1.search(b3,b1);
	
	
}
