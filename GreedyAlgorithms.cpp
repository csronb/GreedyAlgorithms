#include <iostream>
#include <string>

std::string compressString(const std::string& word) {
    std::string comp; // Cadena comprimida resultante
    int n = word.length();
    int i = 0;

    while (i < n) {
        char currentChar = word[i];
        int count = 0;

        // Contar cuántas veces se repite el carácter actual, hasta un máximo de 9
        while (i < n && word[i] == currentChar && count < 9) {
            count++;
            i++;
        }

        // Añadir la longitud y el carácter al resultado comprimido
        comp += std::to_string(count) + currentChar;
    }

    return comp;
}

int main() {
    // Ejemplos de prueba
    std::string word1 = "abcde";
    std::string word2 = "aaaaaaaaaaaaaabb";

    std::cout << "Input: " << word1 << "\nOutput: " << compressString(word1) << "\n";
    std::cout << "Input: " << word2 << "\nOutput: " << compressString(word2) << "\n";

    return 0;
}
