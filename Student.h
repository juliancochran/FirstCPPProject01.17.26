#ifndef MYPROJECT_STUDENT_H // if Student.h has not been defined yet
#define MYPROJECT_STUDENT_H // this code will define it here

/*
 * Header file for a Student class
 * @author Julian Cochran
 * @version 01/07/2026
 */

#include <string>

// Why we should not use using namespace std; in this file:
// Headers should never force naming decisions on other files.
// so in this Student.h file, we'll refer to std::string when used.

class Student {
    private:    // Wondering why private is gray? Ask me why!
    std::string firstName, lastName;
    int age, grade;
    double gpa;

    public:
    // CONSTRUCTORS, first default
    Student();
    // then parameterized
    Student(std::string firstName, std::string lastName,
        int age, int grade, double gpa);

    // A DESTRUCTOR would look like this:
    // ~Student()   {}
    // C++ automatically creates a destructor for us with primitives and std::string.
    // We only write one when we manage resources manually. You'll see later.

    // GETTERS
    // On most of these getters, CLion should give you the warning:
    // Clang-Tidy: Function 'getAge' should be marked [[nodiscard]]
    // Curious? Ask me why!
    int getAge() const;
    int getGrade() const;
    double getGPA() const;
    std::string getFirstName() const;
    std::string getLastName() const;

    // SETTERS
    void setFirstName(std::string fn);
    void setLastName(std::string ln);
    void getOlder();    // age++
    void setGPA(double gpa);
    void promote(); // grade++

    // C++ equivalent of toString()
    std::string toString() const;
};

#endif //MYPROJECT_STUDENT_H -- this is the end of defining Student.h