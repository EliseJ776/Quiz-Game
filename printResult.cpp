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

#include "Quiz.h"
#include "printResult.h"

string printResult(int questions, int correct, int wrong) //Creates a string for the results using stringstream
{
    stringstream result;
    result << "Number of questions: " << questions << "\n"
       << "Number correct answers: " << correct << "\n"
       << "Number wrong answers: " << wrong << "\n"
       << "Final score: " << Quiz::getScore();
    return result.str();
}
