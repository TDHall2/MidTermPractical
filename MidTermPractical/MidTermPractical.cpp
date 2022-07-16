// MidTermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char userinput;
    srand(time(NULL));
    int numberQuestion = rand() % 4;
    std::string questions[4] = { "Who is the creator of this application?\n", "Who is the face of nickelodeon?\n", "What is the answer to this qustion?\n", "How many holes in a Polo\n" };

    std::string answerSet0[4] = { "1) Terrance Hall\n", "2) Batman\n", "3) Morgan Freeman\n", "4) Ronald Reagan\n" };

    std::string answerSet1[4] = { "1) Sandy\n", "2) Squidward\n", "3) Patrick\n", "4) Spongebob\n" };

    std::string answerSet2[4] = { "1) Huh?\n", "2) 42\n", "3) What\n", "4) next question\n" };

    std::string answerSet3[4] = { "1) 6\n", "2) 2\n","3) 4\n", "4) 9\n" };
    bool incorrect = true;
    while (incorrect) {
        incorrect = false;
        switch (numberQuestion) {
        case 0: std::cout << questions[0];
            for (int i = 0; i < 4; i++) {
                std::cout << answerSet0[i];
            }
            std::cin >> userinput;
            switch (userinput) {
            case '1': std::cout << "correct!";
                break;
            case '2': std::cout << "Incorrect";
                break;
            case '3': std::cout << "Incorrect";
                break;
            case '4': std::cout << "Incorrect";
                break;
            default: std::cout << "Not a valid Input, try again\n";
                incorrect = true;
                break;
            }
            break;
        case 1: std::cout << questions[1];
            for (int i = 0; i < 4; i++) {
                std::cout << answerSet1[i];
            }
            std::cin >> userinput;
            switch (userinput) {
            case '1': std::cout << "incorrect!";
                break;
            case '2': std::cout << "Incorrect";
                break;
            case '3': std::cout << "Incorrect";
                break;
            case '4': std::cout << "Correct!";
                break;
            default: std::cout << "Not a valid Input, try again\n";
                incorrect = true;
                break;
            }
            break;
        case 2: std::cout << questions[2];
            for (int i = 0; i < 4; i++) {
                std::cout << answerSet2[i];
            }
            std::cin >> userinput;
            switch (userinput) {
            case '1': std::cout << "Incorrect";
                break;
            case '2': std::cout << "Incorrect";
                break;
            case '3': std::cout << "Correct!";
                break;
            case '4': std::cout << "Incorrect";
                break;
            default: std::cout << "Not a valid Input, try again\n";
                incorrect = true;
                break;
            }
            break;
        case 3: std::cout << questions[3];
            for (int i = 0; i < 4; i++) {
                std::cout << answerSet3[i];
            }
            std::cin >> userinput;
            switch (userinput) {
            case '1': std::cout << "Incorrect";
                break;
            case '2': std::cout << "Incorrect";
                break;
            case '3': std::cout << "Correct!";
                break;
            case '4': std::cout << "Incorrect";
                break;
            default: std::cout << "Not a valid Input, try again\n";
                incorrect = true;
                break;
            }
            break;
        }

    }
   



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
