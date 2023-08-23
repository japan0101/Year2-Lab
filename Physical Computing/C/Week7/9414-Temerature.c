#include<stdio.h>
double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main(){
    double num;
    char type;
    scanf("%lf %c", &num, &type);
    if (type == 'f' || type == 'F')
    {
        printCelcius(fahrenheitToCelcius(num));
    }else if (type == 'c' || type == 'C')
    {
        printFarenheit(celsiusToFahrenheit(num));
    }
}

double celsiusToFahrenheit(double celcius){
    return 32 + (celcius * (9.0/5.0));
}

double fahrenheitToCelcius(double fahrenheit){
    return (fahrenheit - 32) * (5.0 / 9.0);
}

void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}