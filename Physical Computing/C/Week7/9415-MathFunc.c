#include<stdio.h>
double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);
void printResult(int n, double min, double max, double avg);

int main() {
    int n;
    scanf("%d", &n);
    
    double array[n];
    for (int i=0; i<n; ++i) {
        array[i] = getValue();
    }
    
    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    printResult(n, min, max, avg);
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size){
    double min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

double findMax(double array[], int size){
    double max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

double findAvg(double array[], int size){
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum / size;
}

void printResult(int n, double min, double max, double avg){
    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf", n, min, max, avg);
}