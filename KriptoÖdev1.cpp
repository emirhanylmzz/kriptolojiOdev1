#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

bool count_digit(const int& number);
bool isPrime(const int& number);
double encryption(const double& phi, const double& e, const double& n);
double decryption(const double& c, const double& d, const double& n);

int main(int argc, char** argv)
{
    double p = 0, q = 0, e = 0, n = 0, phi = 0;
    cout << "Kripto Ödev1\n";
    
    while (!count_digit(p) || !isPrime(p))
    {
        cout << "Iki basamakli p degerini giriniz:\n";
        cin >> p;
    }
    while (!count_digit(q) || p == q || !isPrime(q))
    {
        cout << "Iki basamakli q degerini giriniz:\n";
        cin >> q;
    }

    phi = (p - 1) * (q - 1);
    cout << "Hesaplanan phi degeri: " << phi << endl;

    while (!count_digit(e) || e >= phi )
    {
        cout << "Iki basamakli e degerini giriniz:\n";
        cin >> e;
    }

    n = p * q;
    
    cout << "p: " << p << endl << "q: " << q << endl << "e: " << e << endl << "phi: " << phi << endl << "n: " << n << endl;

    int k = 4;
    double d = (1 + (k * phi)) / e;
    cout << "Hesaplanan d degeri: " << d << endl;

    double c = encryption(phi, e, n);
    cout << "Hesaplanan c degeri: " << c << endl;

    double m = decryption(c, d, n);

    cout << "Gonderilen Mesaj: " << m << endl;
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

double decryption(const double& c, const double& d, const double& n) 
{
    cout << "Decryption m = (c ^ d) % n" << endl;
    
    double m = pow(c, d);
    m = fmod(m, n);
    return m;
}

bool count_digit(const int& number)
{
    if (int(log10(number) + 1) == 2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool isPrime(const int& number) 
{
    if (number == 0 || number == 1)
    {
        return false;
    }

    for (int i = 2; i <= number / 2; ++i) 
    {
        if (number % i == 0) 
        {
            return false;
        }
    }
    return true;
}