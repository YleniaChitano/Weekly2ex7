#include <iostream>
#include <algorithm>

int main() {
    char grade;
Question:
    std::cout << "What grade would you like to have programming 1? \n";
    std::cin >> grade;
    grade = toupper(grade);

    switch (grade) {

    case 'A':
        std::cout << "Outstanding!\n";
        break;
    case 'B':
        std::cout << "Very good!\n";
        break;
    case 'C':
        std::cout << "Good.\n";
        break;
    case 'D':
        std::cout << "Some flaws.\n";
        break;
    case 'E':
        std::cout << "Not very good...\n";
        break;
    case 'F':
        std::cout << "Fail!\n";
        break;
    default:
        std::cout << "Answer not valid. Please inser a letter A-B.\n";
        goto Question;
        break;


    }

    return 0;
}