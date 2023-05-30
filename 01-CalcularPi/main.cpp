#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calcularpi (){
    float valorfinal = 0;
    int n = 0;
   while (fabs(M_PI - valorfinal) >= 0.0000001){
    valorfinal += (pow((-1), n) / (2*n + 1))*4;
    n++;
   }
return valorfinal; }

int main (){
float resultado = calcularpi();
cout << setprecision(7) << fixed << "El valor de Pi es: " << resultado <<  endl; 
return 0;
}