/*
 * main.cpp
 * Demonstrates use of the Student class with vectors and sorting
 * @author Julian Cochran
 * @version 01/07/2026
 * TO RUN: First, build your project using the hammer button
 * Then execute using the play button
 * The play button executes the last built version
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"

using namespace std;

/*
 * Comparator functions
 * These tell std::sort HOW to compare two Student objects
 */

// Sort by last name (A–Z)
bool sortByLastName(const Student& a, const Student& b) {
    return a.getLastName() < b.getLastName();
}

// Sort by age (youngest → oldest)
bool sortByAge(const Student& a, const Student& b) {
    return a.getAge() < b.getAge();
}

// Sort by GPA (highest → lowest)
bool sortByGPA(const Student& a, const Student& b) {
    return a.getGPA() > b.getGPA();
}

int main() {

    // Vector of Student objects (like ArrayList<Student> in Java)
    vector<Student> students;

    // Manually create some Student objects
    // you should get a CLang-Tidy warning on these lines -- why?
    // look here: https://cppreference.com/w/cpp/container/vector.html
    students.push_back(Student("Ganapathi", "Pamula", 18, 11, 3.95));
    students.push_back(Student("Nigel", "Black", 18, 12, 3.65));
    students.push_back(Student("Harrison", "Beck", 17, 12, 3.87));
    students.push_back(Student("Natalie", "McWhorter", 17, 11, 4.02));
    students.push_back(Student("Lylah", "Camire", 17, 10, 3.92));

    cout << "Original student list:\n";
    for (const Student& s : students) {
        cout << s.toString() << endl;
    }

    // Sort by last name
    sort(students.begin(), students.end(), sortByLastName);

    cout << "\nSorted by last name:\n";
    // this code:
    // s becomes a reference to each Student object in students
    // No copying happens, & refers to "the memmory address location of s"
    // No new object is created thanks to const
    for (const Student& s : students) {
        cout << s.toString() << endl;
    }

    // Sort by age
    sort(students.begin(), students.end(), sortByAge);

    cout << "\nSorted by age:\n";
    for (const Student& s : students) {
        cout << s.toString() << endl;
    }

    // Sort by GPA
    sort(students.begin(), students.end(), sortByGPA);

    cout << "\nSorted by GPA:\n";
    for (const Student& s : students) {
        cout << s.toString() << endl;
    }

    cout << "\n** End of Program **\n";
    return 0;
}
