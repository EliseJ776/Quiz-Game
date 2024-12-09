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

int Quiz::score = 0; //Static variable score is initialized to zero

Quiz::Quiz() //Default constructor
{
    question = "";
    answer = "";
}

Quiz::Quiz(string q, string a)
{
    question = q;
    answer = a;
}

string Quiz::getQuestion() //Returns private variable question
{
    return question;
}

string Quiz::getAnswer() //Returns private variable answer
{
    return answer;
}

int Quiz::getScore() //Returns private variable score
{
    return score;
}
void Quiz::updateScore(int val) 
{
    if (score >= 0)     //Updates the score according to the user's input if
    {                   //the score is greater than 0
        score = score + val;
    }
    if (score <= 0)
    {
        score = 0;
    }
}