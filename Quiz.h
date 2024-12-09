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
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "printResult.h"
using namespace std;
#ifndef QUIZ_H_
#define QUIZ_H_

class Quiz
{
    private:
    string question;
    string answer;
    static int score;
    friend string printResult(int questions, int correct, int wrong);

    public:
    Quiz();
    Quiz(string q, string a);
    string getQuestion();
    string getAnswer();
    static int getScore();
    static void updateScore(int val);
};

#endif