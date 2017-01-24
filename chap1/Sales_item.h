/*
 * This file contains code from "C++ Primer, Fourth Edition", by Stanley B.
 * Lippman, Jose Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2005 by Objectwrite, Inc., Jose Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * 	Pearson Education, Inc.
 * 	Rights and Contracts Department
 * 	75 Arlington Street, Suite 300
 * 	Boston, MA 02216
 * 	Fax: (617) 848-7047
*/ 

#ifndef SALESITEM_H  
#define SALESITEM_H  
#include <iostream>  
#include <string>  
   
class Sales_item {  

friend std::istream& operator>>(std::istream &,Sales_item &);  
friend std::ostream& operator<<(std::ostream &,const Sales_item &);  
public:  
	Sales_item(const std::string &book):isbn(book),units_sold(0),revenue(0.0){} 
	Sales_item():units_sold(0),revenue(0.0){}  
	Sales_item(std::istream &is){ 
		is >> *this;
	}  	 
	
	Sales_item & operator+=(const Sales_item&);    
	double avg_price() const; 
	 
	bool same_isbn(const Sales_item &rhs)const {  
		return isbn == rhs.isbn;  
	}
public:
	std::string isbn;  
	unsigned units_sold;  
	double revenue;  
	
};  
   
using std::istream;  
using std::ostream;  
Sales_item operator+(const Sales_item &,const Sales_item &); 
 
inline 
bool operator==(const Sales_item &lhs,const Sales_item &rhs) {  
	return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.same_isbn(rhs);  
}  

inline 
bool operator!=(const Sales_item &lhs,const Sales_item &rhs) {  
	return !(lhs == rhs);  
}  
   
inline 
Sales_item & Sales_item::operator +=(const Sales_item &rhs) {  
	units_sold += rhs.units_sold;  
	revenue += rhs.revenue;  
	return *this;  
}
 
inline
Sales_item operator+(const Sales_item &lhs,const Sales_item &rhs) {  
	Sales_item ret(lhs);  
	ret += rhs;  
	return ret;  
}
  
inline
istream& operator>>(istream &in,Sales_item &s) {  
	double price;  
	in >> s.isbn >> s.units_sold >> price;  
	if(in) {
		s.revenue = s.units_sold * price;  
	} else {
		s = Sales_item();  
	}
	return in;  
}  

inline
ostream& operator<<(ostream &out,const Sales_item &s) {  
	out << s.isbn << "\t" <<s.units_sold << "\t" << s.revenue << "\t" << s.avg_price();  
	return out;  
} 
 
inline
double Sales_item::avg_price() const {  
	if(units_sold) { 
		return revenue/units_sold;  
	} else {
		return 0;  
	}
} 

inline
bool compareIsbn(const Sales_item &lhs, const Sales_item &rhs) {
    return (lhs.isbn).compare(rhs.isbn);
}
#endif  
