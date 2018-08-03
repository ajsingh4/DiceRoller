//
//  main.cpp
//  DiceRoller
//
//  Created by Aj Gill on 7/27/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void diceRoller(int x, int y);

int main() {
    string input;
    string delimiter = "d";
    srand((unsigned int)time(NULL));
    int diceCount, numSides, numIn;
    cout << "Please enter number of inputs " << endl;
    cin >> numIn;
    cout << "Please input dice rolls in the format of NdM" << endl;
    cin >> input;
    string token1 = input.substr(0, input.find(delimiter));
    string token2 = input.erase(0, input.find(delimiter) + delimiter.length());
    cout << "diceCount " << token1 << " numSides " << token2 << endl;
    diceCount = stoi(token1);
    numSides = stoi(token2);
    diceRoller(diceCount, numSides);

    
}

void diceRoller(int diceCount, int numSides){
    int diceSum = 0;
    int roll;
    int rollValues[diceCount];
    for(int i=0; i<diceCount; i++)
    {
        roll = 2 + (rand() % (numSides - 1));
        rollValues[i] = roll;
        diceSum += roll;
    }
    cout << diceSum << " : ";
    for(int i=0; i<diceCount; i++)
    {
        cout << rollValues[i] << " ";
    }
    cout << "\n";
}
