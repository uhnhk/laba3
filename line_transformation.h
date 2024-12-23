#include <iostream>
#include "list.cpp"

DoubleList<char> line_transform(DoubleList<char> line) {
    char current_char;
    int line_len = line.size();

    if ((line.size() - 1) % 2 == 0) {
        for (int i = 0; i < line.size() / 2; i++) {
            current_char = line[i];
            line[i] = line[line.size() - i - 2];
            line[line.size() - i - 2] = current_char;
        }
    }

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] == '+' || line[i] == '-') {
            if (line[i] == '+') {
                line.insert(i + 1, '+');
                i++;
            }
            else {
                line.insert(i + 1, '-');
                i++;
            }
        }
    }

    line.remove('1');
    line.remove('2');
    line.remove('3');
    line.remove('4');
    line.remove('5');
    line.remove('6');
    line.remove('7');
    line.remove('8');
    line.remove('9');
    line.remove('0');

    line[line.size() - 1] = '\0';

    return line;
}

OneList<char> line_transform(OneList<char> line) {
    char current_char;
    int line_len = line.size();

    if ((line.size() - 1) % 2 == 0) {
        for (int i = 0; i < line.size() / 2; i++) {
            current_char = line[i];
            line[i] = line[line.size() - i - 2];
            line[line.size() - i - 2] = current_char;
        }
    }

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] == '+' || line[i] == '-') {
            if (line[i] == '+') {
                line.insert(i + 1, '+');
                i++;
            }
            else {
                line.insert(i + 1, '-');
                i++;
            }
        }
    }

    line.remove('1');
    line.remove('2');
    line.remove('3');
    line.remove('4');
    line.remove('5');
    line.remove('6');
    line.remove('7');
    line.remove('8');
    line.remove('9');
    line.remove('0');

    line[line.size() - 1] = '\0';

    return line;
}