#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "die.h"
using namespace std;

int main(){
    die die1,die2;
    int sides1, sides2, rolls;
    cout << "Amount of sides on die1: " << endl;
    cin >> sides1;
    cout << "Amount of sides on die2: " << endl;
    cin >> sides2;
    cout << "Amount of rolls: " << endl;
    cin >> rolls;

    if(sides1 >= 4){
        die1.setSides(sides1);
    }else{
        die1.setSides(6);
    }
    if(sides2 >= 4){
        die2.setSides(sides2);
    }else{
        die2.setSides(6);
    }

    int arrSize = 0;

    if(sides1 >= 4 && sides2 >= 4){
        arrSize = sides1 + sides2;
    }else{
        arrSize = 12;
    }
    int arr[arrSize + 1] = {0};

    for(int i = 0; i < rolls; i++){
        int d1Roll = die1.roll();
        int d2Roll = die2.roll();
        int result = d1Roll + d2Roll;
        arr[result]++;
    }

    for(int i = 2; i <= arrSize; i++){
        double curAns = arr[i];
        double curRolls = rolls;
        double curPercent = (curAns / curRolls) * 100;
        cout <<"The amount " << i << " shows up " << "is " << curPercent  << "%" << endl;
    }

}
