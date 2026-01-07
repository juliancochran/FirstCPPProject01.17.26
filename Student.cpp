/*
 * Implementation file for a Student class
 * @author Julian Cochran
 * @version 01/07/2026
 */

#include "Student.h"
#include <sstream>

using namespace std;

// CONSTRUCTORS -- default
Student::Student()
    : firstName(), lastName(), age(0), grade(0), gpa(0.0)
{
}

// CONSTRUCTORS -- parameterized
// NOTE the Clang-Tidy issue: This is a performance suggestion,
// not a correctness issue. We’ll revisit it when we learn about memory management.
// this constructor format is the C++ version of replacing
// this.property = property in Java
Student::Student(string firstName,
                 string lastName,
                 int age,
                 int grade,
                 double gpa)
    : firstName(firstName), lastName(lastName),
      age(age), grade(grade), gpa(gpa)
{
}

// GETTERS -- const keyword means "this method will not change the object"
string Student::getFirstName() const {  return firstName;   }
string Student::getLastName() const {   return lastName;    }
int Student::getAge() const {   return age; }
int Student::getGrade() const { return grade;   }
double Student::getGPA() const {    return gpa; }

// SETTERS
void Student::setFirstName(string fn) { firstName = fn; }
void Student::setLastName(string ln) { lastName = ln; }

void Student::getOlder() {
    if (age < 19) {
        age++;
    }
}

void Student::promote() {
    if (grade < 12) {
        grade++;
    }
}

void Student::setGPA(double gpa) {
    if (gpa >= 0.0 && gpa <= 4.5) {
        gpa = gpa;
    }
}

// toString uses sstream, basically the C++ equivalent of StringBuilder
// "builds" the output string for this Student object, then return to the thread
string Student::toString() const {
    ostringstream out;
    out << lastName << ", " << firstName
        << " | Age: " << age
        << " | Grade: " << grade
        << " | GPA: " << gpa;
    return out.str();
}