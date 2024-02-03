#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>


// функция заполнения двумерного динамического массива случайными числами
void fill(int **arr, int lines, int cols) {
    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 100 + 1;  // заполняется рандомными числами от 1 до 100
        }
    }
}


// функция вывода двумерного динамического массива на экран
void print(int **arr, int lines, int cols) {
    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


// функция вычисления суммы элементов главной диагонали
int sum(int **arr, int lines, int cols) {
    int sum = 0;
    for (int i = 0; i < lines && i < cols; ++i) {
        sum = sum + arr[i][i];
    }
    return sum;
}



int main() {
    
    /*task 3*/

    int lines = 0, cols = 0;
    std::cout << "введите число строк и столбцов (сначала строк, потом столбцов): ";
    std::cin >> lines >> cols;
    

    int **array = new int *[lines];
    for (int i = 0; i < lines; ++i) {  //выделяем динамически память для двумерного массива
        array[i] = new int[cols];
    }

    
    fill(array, lines, cols); //вызываем функцию заполнения массива
    
    
    print(array, lines, cols); //вызываем функцию вывода массива на экран
 
    
    int sumOfDiagonal = sum(array, lines, cols); //вызываем функцию, которая считает сумму элементов главной диагонали, сохраняем результат, возвращаемый функцией, в переменную
    std::cout << "сумма элементов главной диагонали: " << sumOfDiagonal << std::endl; //выводим переменную с суммой на экран

    
    for (int i = 0; i < lines; ++i) {  //освобождение памяти выделенной динамически под двумерный массив
        delete[] array[i];
    }
    delete[] array;

    
    
    return 0;
}

    /*task 4*/


    struct Employee {
        std::string name;
        int id;
        std::string position;
    };
    
 
