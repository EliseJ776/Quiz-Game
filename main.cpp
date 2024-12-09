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
#include <algorithm>

int main(int argc, char *argv[]) 
{
    vector<Quiz> quizVector; //Creates a vector of class Quiz
    string line;
    string question; 
    string answer;
    int numQuestion = 0;
    int correct = 0;
    int wrong = 0;
    Quiz quiz1;

    ifstream inputFile;
    inputFile.open(argv[1]);

    while (getline(inputFile, line)) 
    {
        if (line.find("Q: ") == 0) 
        {
            question = line.substr(3) + "\n"; // Add a newline character
            while (getline(inputFile, line)) //Reads in multi-line questions
            {
                if (line.find("A: ") != 0) 
                {
                    question += line;
                }
                else if (line.find("A: ") == 0) //If the read-in from the input file
                {                               //is "A: " then the answer is stored
                    answer = line.substr(3);
                    quizVector.push_back(Quiz(question, answer));
                    break;
                }
            }
        }
    } 

    inputFile.close();

    srand(unsigned(time(0)));

    random_shuffle (quizVector.begin(), quizVector.end()); //Shuffles the questions

    numQuestion = quizVector.size(); //Sets numQuestion to the size of the Quiz vector
                                    //To make sure all questions are asked

    for (int i = 0; i < numQuestion; i++)  //Iterates through all questions
    {
        quiz1 = quizVector[i];

        cout << quiz1.getQuestion() << endl;
        cout << "Type in your answer: ";
        getline(cin, answer); //Takes in an answer

        if (answer == quiz1.getAnswer()) //Checks if the answer is correct
        {
            quiz1.updateScore(1);
            correct++;
            cout << "Correct!" << endl;
            cout << "Current score: " << quiz1.getScore() << endl << endl;
        } 
        else 
        {
            quiz1.updateScore(-1);
            wrong++;
            cout << "Wrong! Correct answer: " << quiz1.getAnswer() << endl;
            cout << "Current score: " << quiz1.getScore() << endl << endl;
        }
    }

    cout << printResult(numQuestion, correct, wrong);

    return 0;
}