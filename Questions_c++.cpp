. What are the different data types present in C++?
The 4 data types in C++ are given below:

Primitive Datatype(basic datatype). Example- char, short, int, float, long, double, bool, etc.
Derived datatype. Example- array, pointer, etc.
Enumeration. Example- enum
User-defined data types. Example- structure, class, etc.
2. What is the difference between C and C++?
The main difference between C and C++ are provided in the table below:

C	C++
C is a procedure-oriented programming language.	C++ is an object-oriented programming language.
C does not support data hiding.	Data is hidden by encapsulation to ensure that data structures and operators are used as intended.
C is a subset of C++	C++ is a superset of C.
Function and operator overloading are not supported in C	Function and operator overloading is supported in C++
Namespace features are not present in C	Namespace is used by C++, which avoids name collisions.
Functions can not be defined inside structures.	Functions can be defined inside structures.
calloc() and malloc() functions are used for memory allocation and free() function is used for memory deallocation.	new operator is used for memory allocation and deletes operator is used for memory deallocation.
3. What are class and object in C++?
A class is a user-defined data type that has data members and member functions. Data members are the data variables and member functions are the functions that are used to perform operations on these variables.

An object is an instance of a class. Since a class is a user-defined data type so an object can also be called a variable of that data type.

A class is defined as-

class A{
private:
 int data;
public:
 void fun(){

 }
};

Class and Object in C++
For example, the following is a class car that can have properties like name, color, etc. and they can have methods like speed().

4. What is the difference between struct and class?
In C++ a structure is the same as a class except for a few differences like security. The difference between struct and class are given below:

Structure	Class
Members of the structure are public by default.	Members of the class are private by default.
When deriving a struct from a class/struct, default access specifiers for base class/struct are public.	When deriving a class, default access specifiers are private.
5. What is operator overloading?
Operator Overloading is a very essential element to perform the operations on user-defined data types. By operator overloading we can modify the default meaning to the operators like +, -, *, /, <=, etc. 

For example -

The following code is for adding two complex number using operator overloading-

class complex{
private:
 float r, i;
public:
 complex(float r, float i){
  this->r=r;
  this->i=i;
 }
 complex(){}
 void displaydata(){
  cout<<”real part = “<<r<<endl;
  cout<<”imaginary part = “<<i<<endl;
 }
 complex operator+(complex c){
  return complex(r+c.r, i+c.i);
 }
};
int main(){
complex a(2,3);
complex b(3,4);
complex c=a+b;
c.displaydata();
return 0;
}
