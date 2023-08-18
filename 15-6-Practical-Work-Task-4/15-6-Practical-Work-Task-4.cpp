/*Задача 4
Что нужно сделать
Вам даётся массив целых чисел, отсортированных по возрастанию. 
Необходимо вывести его на экран отсортированным в порядке возрастания модуля чисел.

Пример:

Массив {-100,-50, -5, 1, 10, 15}

Вывод: 1, -5, 10, 15, -50, -100

Советы и рекомендации
Положительные числа уже отсортированы в порядке возрастания модулей.*/

#include <iostream>
#include <vector>
#include <algorithm>

bool compareByAbsoluteValue(int a, int b) { // Функция сравнения по абсолютным значениям.
    return std::abs(a) < std::abs(b);
}

int main() {
    std::vector<int> numbers = { -100, -50, -5, 1, 10, 15 };

    std::sort(numbers.begin(), numbers.end(), compareByAbsoluteValue); // Сортировка вектора по абсолютным значениям.

    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << " ";
    }

    // Аналогичная запись
    /*for (int num : numbers) 
    {
        std::cout << num << " ";
    }*/

    return 0;
}

    


    
 
      
          
