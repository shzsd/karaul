#include <iostream>
#include <vector>


double laplace(const std::vector<double>& x, const std::vector<double>& y, double x_val) {
    int n = x.size();
    double result = 0.0;

    
    for (int i = 0; i < n; i++) 
    {
        double term = y[i];
        for (int j = 0; j < n; j++) 
        {
            if (i != j) 
            {
                term *= (x_val - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    return result;
}
int main() 
{
   setlocale(LC_ALL, "Russian");
   std::vector<double> x = { 1, 3, 6 };
   std::vector<double> y = { 1, 6, 12 };

   double x_value;
   std::cout << "¬ведите значение x дл€ интерпол€ции: ";
   std::cin >> x_value;
   double value = laplace(x, y, x_value);
   std::cout << "»нтерполированное значение в x: " << x_value << " : " << value << std::endl;

    return 0;
}