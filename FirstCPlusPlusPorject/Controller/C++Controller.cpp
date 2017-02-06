//
//  C++Controller.cpp
//  FirstCPlusPlusPorject
//
//  Created by Nguyen, Duncan on 1/23/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//


#include <iostream>
#include "FirstController.h"
#include "../Model/Timer.hpp"

using namespace std;


void FirstController :: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (6759);
}

void FirstController :: start()

{
    Timer currentTime;
    currentTime.startTimer();
    
    int myNumber = 9;
    int * numberPointer = &myNumber;
    
    int numbuh [7];
    double yes [2];

    
    std::cout << "Strike Freedom Gundam" << endl;
    this->output();
    
    cout << myNumber << endl;
    useNumbers(myNumber);
    cout << myNumber << endl;
    
    
    cout << "Changin a value" << endl;
    myNumber = impactNumber();
    cout << "See - impacted " << myNumber << endl;
    cout << "Chnaging a value" << endl;
    usePointerToChange(numberPointer);
    cout << "See how the number has been changed: " << myNumber << endl;
    
    currentTime.finishTimer();
    currentTime.displayTimerInformation();
}

void FirstController:: output()
{
    cout << "Hi how old are you? " << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "Type in your name" << endl;
    string name;
    cin >> name;
    cout << "Your name is " << name << " noooiice" << endl;
    cin.ignore();
    cin >> name;
    cout << name;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "You typed " << name << " and " << age << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
}

void FirstController:: useNumbers(int givenNumber)
{
    cout << "Number is " << givenNumber << endl;
    givenNumber = (givenNumber * 3 + 3242) / 42;
    cout << "It is now : " << givenNumber << endl;
    
    
    
}

int FirstController:: impactNumber()
{
    return 345643564;
}
