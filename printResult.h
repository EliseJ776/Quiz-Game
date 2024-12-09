/* 
    The purpose of this program is to take
    in questions and answers from a .txt file
    and store them in instances of the class Quiz
    in a vector of Quiz. The user is then asked
    the questions which are randomly shuffled and 
    prompted to answer.
    Elise James
    Project 2
    4 March, 2023
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#ifndef PRINTRESULT_H_
#define PRINTRESULT_H_
using namespace std;

string printResult(int questions, int correct, int wrong);

#endif