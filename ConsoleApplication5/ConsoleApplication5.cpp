#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

// Функция, которая выводит слово задом наперед
void reverseWord(const string& word) {
    setlocale(LC_ALL, "Rus");
    string reversedWord = word;
    reverse(reversedWord.begin(), reversedWord.end());
    cout << "Слово задом наперед: " << reversedWord << endl;
}

// Функция, которая удаляет гласные из слова и выводит его
void removeVowels(const string& word) {
    setlocale(LC_ALL, "Rus");
    string result = "";
    for (char ch : word) {
        if (tolower(ch) != 'a' && tolower(ch) != 'e' && tolower(ch) != 'i' && tolower(ch) != 'o' && tolower(ch) != 'u') {
            result += ch;
        }
    }
    cout << "Слово без гласных: " << result << endl;
}

// Функция, которая удаляет согласные из слова и выводит его
void removeConsonants(const string& word) {
    setlocale(LC_ALL, "Rus");
    string result = "";
    for (char ch : word) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            result += ch;
        }
    }
    cout << "Слово без согласных: " << result << endl;
}

// Функция, которая перемешивает буквы в слове и выводит его
void shuffleWord(const string& word) {
    setlocale(LC_ALL, "Rus");
    string shuffledWord = word;
    random_shuffle(shuffledWord.begin(), shuffledWord.end());
    cout << "Перемешанное слово: " << shuffledWord << endl;
}

int main() {
    setlocale(LC_ALL, "Rus");
    string word;
    int choice;

    cout << "Введите слово: ";
    cin >> word;

    cout << "Выберите действие:" << endl;
    cout << "1. Слово выводится задом наперед." << endl;
    cout << "2. Вывести слово без гласных." << endl;
    cout << "3. Вывести слово без согласных." << endl;
    cout << "4. Рандомно раскидывать буквы заданного слова." << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        reverseWord(word);
        break;
    case 2:
        removeVowels(word);
        break;
    case 3:
        removeConsonants(word);
        break;
    case 4:
        shuffleWord(word);
        break;
    default:
        cout << "Неверный выбор!" << endl;
    }

    return 0;
}

