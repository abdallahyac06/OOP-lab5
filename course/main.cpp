#include "course.h"
#include <iostream>
#include <string>

int main() {
    Course course1("Object Oriented Programming", 3);
    Course course2("Introduction to Linux", 2);
    std::string students[] = {"Yacine Abdallah", "Bouziane Oussama", "Aiche Rayane"};

    course1.addStudent(students[0]);
    course1.addStudent(students[1]);
    course1.addStudent(students[2]);

    course2.addStudent(students[0]);
    course2.addStudent(students[1]);
    course2.addStudent(students[2]);

    std::cout << course1 << course2;

    course2.dropStudent(students[2]);
    std::cout << course2;

    course1.dropStudent(students[2]);
    std::cout << course1;

    return 0;
}