//
// Created by Admin on 05.03.2017.
//

#include "Vitalik_student.h"
#include "Header.h"

int Vitalik_student::getMoney() const {
    return money;
}

int Vitalik_student::getHappiness() const {
    return happiness;
}

int Vitalik_student::getSatiety() const {
    return satiety;
}

int Vitalik_student::getFatigue() const {
    return fatigue;
}

Vitalik_student::Vitalik_student(int scholarship) : scholarship(scholarship), money(500), happiness(50), satiety(50), fatigue(50){}

void Vitalik_student::getScholarship() {
    money += scholarship;
    happiness += 30;
    if (happiness > 100)
        happiness = 100;
    scholarship = 0;
}

void Vitalik_student::eat() {
    if (money >= 100){
        money -= 100;
        satiety += 40;
        if (satiety > 100)
            satiety = 100;
        happiness += 10;
        if (happiness > 100)
            happiness = 100;
        fatigue -=5;
        if (fatigue < 0)
            fatigue = 0;
    }
}

void Vitalik_student::study(){
    scholarship += 100;
    happiness -= 25;
    if (happiness < 0)
        happiness = 0;
    satiety -= 20;
    if (satiety < 0)
        satiety = 0;
    fatigue += 10;
    if (fatigue > 100)
        fatigue = 100;
}

void Vitalik_student::rest(){
    fatigue = 0;
    satiety -= 30;
    if (satiety < 0)
        satiety = 0;
    happiness += 20;
    if (happiness > 100)
        happiness = 100;
}


