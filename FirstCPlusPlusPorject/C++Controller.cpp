//
//  C++Controller.cpp
//  FirstCPlusPlusPorject
//
//  Created by Nguyen, Duncan on 1/23/17.
//  Copyright © 2017 Nguyen, Duncan. All rights reserved.
//


#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    
    std::cout << "Strike Freedom Gundam" << endl;
    this->output();
    
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
