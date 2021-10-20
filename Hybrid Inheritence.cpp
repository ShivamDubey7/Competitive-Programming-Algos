#include<iostream>
#include<conio.h>
// student class which is base class
class student
{
// Body of student class which contain declaration and definition of all members of student class
protected:
int rollnum; // rollnum is protected member of student class
public:
// set_rollnum is function which is used to set the value to protected member rollnum through public member function
void set_rollnum(int num)
{
rollnum=num; // protected member of class is assigned value using public member function
}
// print_rollnum is function to print the value of rollnum
void print_rollnum(void)
{
std::cout<<"Roll number is : "<<rollnum<<"\n"; // print the value of rollnum
}
}; // end of class student
// class subject which inherits property from class student
class subject:public student
{
// Body of class subject
// protected member variables of subject class
protected:
float subject1, subject2, subject3; // subject1, subject2 and subject3 are protected float members of class subject
// public member functions of class subject
public:
//set_subjectmark is public member function to assign the values to the protected member variables of subject class
void set_subjectmark(float a,float b,float c)
{
// assigning values to the all protected member variables of the subject class
subject1 = a; // assign value a to the subject1
subject2 = b; // assign value b to the subject2
subject3 = c; // assign value c to the subject3
}
// print_subjectmarks is public member function of the class subject to print values of protected member variables subject1,subject2 and subject3
void print_subjectmarks()
{
std::cout<<"subject marks in each subject is : "<<"subject1="<<subject1<<"\n"<<"subject2="<<subject2<<"\n"<<"subject3="<<subject3<<"\n";
}
}; // end of class subject
// class sports which inherits property from class student
class sports
{
// Body of class sports
// protected member variable of class sports
protected:
float sport_marks; //sport_marks is protected member variable of class sports
// public member functions of class sports
public:
// public member function set_sports_marks of class sports which is used to set value to protected member variable sport_marks
void set_sports_marks(float marks)
{
sport_marks=marks; // assign value to protected member variable sport_marks
}
// print_sports_marks function to print value of protected member variable sport_marks
void print_sports_marks(void)
{
std::cout<<"marks in sports is : "<< sport_marks <<"\n";
}
}; // end of class sports
// class overall_result which inherits property of both class subject and class sports
class overall_result: public subject , public sports
{
// Body of class overall_result
private:
float total_marks; // total_marks is private member variable of class overall_result
public:
void display_total(void);// display_total is public member function of class overall_result
};// end of class overall_result
void overall_result::display_total(void)
{
// Body of function display_total
// This function calculated and display total
total_marks=subject1+subject2+subject3+sport_marks; // calculating total of subject marks and sport marks
print_rollnum();
print_subjectmarks();
print_sports_marks();
std::cout<<"Total marks including subject marks and sports marks is : = "<<total_marks<<"\n";
}
int main()
{
overall_result stu; // object of class overall_result
stu.set_rollnum(40); // assign value to rollnum which is member variable of class student
stu.set_subjectmark(19.8,34.6,89.7); // assign value to subject1, subject2 and subject3 which are member variables of clss subject
stu.set_sports_marks(64.3); // assign value to sport_marks which is member variable of class sports
stu.display_total(); // this function calculate and display total
std::cout << "---------------------------------------------------------"<<"\n";
overall_result stu2; // another object of class overall_result
stu2.set_rollnum(50); // assign value to rollnum which is member variable of class student
stu2.set_subjectmark(10.8,54.6,59.7); // assign value to subject1, subject2 and subject3 which are member variables of clss subject
stu2.set_sports_marks(94.3); // assign value to sport_marks which is member variable of class sports
stu2.display_total(); // this function calculate and display total
return 0;
}