#include <iostream>
#include "line_transformation.h"

int main()
{
    DoubleList<char> doubleListLine;
    OneList<char> oneListLine;

    char letter;
    std::cin >> letter;
    while (true) {
        doubleListLine.push_back(letter);
        oneListLine.push_back(letter);
        std::cin >> letter;
        if (letter == '.') {
            doubleListLine.push_back('\0');
            oneListLine.push_back('\0');
            break;
        }
    }

    doubleListLine = line_transform(doubleListLine);
    oneListLine = line_transform(oneListLine);

    std::cout << "final result Double: ";

    for (int i = 0; i < doubleListLine.size(); i++) {
        std::cout << doubleListLine[i] << "";
    }
    std::cout << std::endl;

    std::cout << "final result One: ";
    for (int i = 0; i < oneListLine.size(); i++) {
        std::cout << oneListLine[i] << "";
    }
    std::cout << std::endl;
}