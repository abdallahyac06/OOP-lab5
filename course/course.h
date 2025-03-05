#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course {
    public:
        Course(const std::string &, int);
        ~Course();
        std::string getCourseName() const;
        void addStudent(const std::string &);
        void dropStudent(const std::string &);
        std::string *getStudents() const;
        int getNumberOfStudents() const;

    private:
        std::string courseName;
        std::string *students;
        int numberOfStudents;
        int capacity;

    friend std::ostream &operator<<(std::ostream &, const Course &);
};

#endif