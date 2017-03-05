//
// Created by Admin on 05.03.2017.
//

#ifndef FB61_MASTER_VITALIK_STUDENT_H
#define FB61_MASTER_VITALIK_STUDENT_H


#include <regex>
#include "Header.h"

class Vitalik_student : public Student{
private:
    int scholarship, money, happiness, satiety, fatigue;

public:
    void getScholarship();

     int getMoney() const;

    int getHappiness() const;

    int getSatiety() const;

    int getFatigue() const;

    Vitalik_student(int scholarship);

    void eat();

    void study();

    void rest();
};


#endif //FB61_MASTER_VITALIK_STUDENT_H
