/*Задача 4
Что нужно сделать
Вам даётся массив целых чисел, отсортированных по возрастанию. 
Необходимо вывести его на экран отсортированным в порядке возрастания модуля чисел.

Пример:

Массив {-100,-50, -5, 1, 10, 15}

Вывод: 1, -5, 10, 15, -50, -100

Советы и рекомендации
Положительные числа уже отсортированы в порядке возрастания модулей.*/


// первое решение
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//bool compareByAbsoluteValue(int a, int b) { // Функция сравнения по абсолютным значениям.
//    return std::abs(a) < std::abs(b);
//}
//
//int main() {
//    std::vector<int> numbers = { -100, -50, -5, 1, 10, 15 };
//
//    std::sort(numbers.begin(), numbers.end(), compareByAbsoluteValue); // Сортировка вектора по абсолютным значениям.
//
//    for (int i = 0; i < numbers.size(); i++)
//    {
//        std::cout << numbers[i] << " ";
//    }
//
//     Аналогичная запись
//    /*for (int num : numbers) 
//    {
//        std::cout << num << " ";
//    }*/
//
//    return 0;
//}



#include <iostream>

int main() {
    int numbers[] = { -100, -50, 5, 6, 60, 70 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int min = 0;

    for ( int i = 1; i < size; i++)
    {
        if (abs(numbers[i]) < abs(numbers[min]))
        {
            min = i;
        }
    }

    int positive = min + 1;
    int negative = min - 1;
    
    if (size > 0)
    {
        std::cout << numbers[min] << ", ";
    }
    while (negative >= 0 || positive < size) {
        if (negative >= 0 && (abs(numbers[negative]) <= abs(numbers[positive]) || (positive >= size))) {
            std::cout << numbers[negative] << ", ";
            negative--;
        }
        if (positive < size &&
            (abs(numbers[positive]) <= abs(numbers[negative]) || (negative < 0))) {
            std::cout << numbers[positive] << ", ";
            positive++;
        }
    }
    return 0;
}
      
          
