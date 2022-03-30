#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

double multiplyPrimes(const double& n1, const double& n2);
void factorisation(const int& number);

int main(int argc, char** argv)
{
    auto start = high_resolution_clock::now();
    long float multipleNum = multiplyPrimes(64403, 65537);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Asal sayilarin carpiminde gecen zaman: "
        << duration.count() << " microseconds" << endl;

    auto start2 = high_resolution_clock::now();
    factorisation(multipleNum);
    auto stop2 = high_resolution_clock::now();

    auto duration2 = duration_cast<microseconds>(stop - start);

    cout << "Carpanlara ayirmada gecen zaman: "
        << duration2.count() << " microseconds" << endl;

}

double multiplyPrimes(const double& n1, const double& n2)
{
    return n1 * n2;
}


void factorisation(const long float & number)
{
    int number_ = number;
    while (number_ % 2 == 0) 
    {
        cout << "2\t";
        number_ = number_ / 2;
    }
    for (int i = 3; i <= sqrt(number_); i = i + 2) 
    {
        while (number_ % i == 0) 
        {
            cout << i << "\t";
            number_ = number_ / i;
        }
    }
    if (number_ > 2)
        cout << number_ << "\t";
}
double encryption(const double& phi, const double& e, const double& n)
{
    cout << "Encryption c = (msg ^ e) % n" << endl;

    double msg = 13;
    cout << "Mesaj datasi: " << msg << endl;

    double c = pow(msg, e);
    c = fmod(c, n);
    
    return c;
}