#include <stdio.h>

void print(int arr[], int size);
void insert(int arr[], int size, int input);
void append(int numArr[], int size, int input);

int main() {

    int size;
    int elem;
    int input;
    int numFun;

    printf("Введите размер массива: \n");
    scanf("%d", &size);
    
    printf("Введите количество элементов: \n");
    scanf("%d", &elem);

    if (elem > size) {
        printf("Ошибка! Кол-во элементов превосходит размер массива. \n");
        return 0;
    }
    
    int arr[size];

    int k;

    for (k = 0; k < size; k++) {
        if (k < elem) {
            arr[k] = k;
        } else if (k >= elem) {
            arr[k] = 0;
        }
    }   

    print(arr, size);
        
    printf("Введите число, которое вы хотите добавить в массив: \n");
    scanf("%d", &input);
        
    printf("Введите номер операции, которую вы хотите произвести: \n1. insert\n2. append\n");
    scanf("%d", &numFun);
    if (numFun == 1) {
        insert(arr, size, input);
    } else if (numFun == 2) {
        append(arr, size, input);
    }

    return 0;
}

void print(int arr[], int size) {
    int j;

    printf("{");
    for (j = 0; j < size; j++) {
        if (j == size - 1) {
            printf("%d}\n", arr[j]);
            break;
        }
        printf("%d, ", arr[j]);
    }
}

void insert(int arr[], int size, int input) {
    arr[size/2] = input;
    print(arr, size);
}
    
void append(int arr[], int size, int input) {
    arr[size - 1] = input;
    print(arr, size);
}
/*
Введите размер массива: 
3
Введите количество элементов: 
3
{0, 1, 2}
Введите число, которое вы хотите добавить в массив: 
5
Введите номер операции, которую вы хотите произвести: 
1. insert
2. append
2
{0, 1, 5}
1 тест для того, чтобы убедиться в замене последнего элемента

Введите размер массива: 
3
Введите количество элементов: 
3
{0, 1, 2}
Введите число, которое вы хотите добавить в массив:
5
Введите номер операции, которую вы хотите произвести: 
1. insert
2. append
1
{0, 5, 2}
2 тест, чтобы убедиться, что добавляет в середину массива

Введите размер массива: 
5
Введите количество элементов: 
3
{0, 1, 2, 0, 0}
Введите число, которое вы хотите добавить в массив:
5
Введите номер операции, которую вы хотите произвести: 
1. insert
2. append
2
{0, 1, 2, 0, 5}
3 тест для того чтобы убедиться что добавляет в пустые места в статическом массиве

Введите размер массива: 
5
Введите количество элементов: 
3
{0, 1, 2, 0, 0}
Введите число, которое вы хотите добавить в массив:
3
Введите номер операции, которую вы хотите произвести: 
1. insert
2. append
1
{0, 1, 3, 0, 0}
4 тест говорит о том что добавляет ровно в середину массива

Введите размер массива: 
4
Введите количество элементов: 
4
{0, 1, 2, 3}
Введите число, которое вы хотите добавить в массив:
7
Введите номер операции, которую вы хотите произвести: 
1. insert
2. append
1
{0, 1, 7, 3}
5 тест чтобы определить, в какое место добавляет если кол-во элементов чётное
*/