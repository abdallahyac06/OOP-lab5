#include "course.h"
#include <iostream>
#include <string>

Course::Course(const std::string &courseName, int capacity) {
    this->courseName = courseName;
    this->capacity = (capacity > 0) ? capacity : 0;
    numberOfStudents = 0;
    students = new std::string[capacity];
}

Course::~Course() {
    delete[] students;
    students = nullptr;
}

std::string Course::getCourseName() const {
    return courseName;
}

void Course::addStudent(const std::string &name) {
    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i] == name) {
            std::cout << name << " is already in the " << courseName << " course." << std::endl;
            return;
        }
    }
    if (numberOfStudents >= capacity) {
        std::cout << "Course is full. Cannot add student." << std::endl;
        return;
    }
    students[numberOfStudents++] = name;
}

void Course::dropStudent(const std::string &name) {
    for (int i = 0; i < numberOfStudents; i++) {
        if (students[i] == name) {
            for (int j = i; j < numberOfStudents - 1; j++) {
                students[j] = students[j + 1];
            }
            students[--numberOfStudents] = "";
            return;
        }
    }
    std::cout << name << " is not in the " << courseName << " course." << std::endl;
}

std::string *Course::getStudents() const {
    return students;
}

int Course::getNumberOfStudents() const {
    return numberOfStudents;
}

std::ostream &operator<<(std::ostream &output, const Course &course) {
    output << "Number of students in the " << course.getCourseName() << " course: " << course.getNumberOfStudents() << "." << std::endl;
    std::string *students = course.getStudents();
    for (int i = 0; i < course.getNumberOfStudents(); i++) {
        output << students[i] << ", ";
    }
    output << "\b\b." << std::endl;
    return output;
}