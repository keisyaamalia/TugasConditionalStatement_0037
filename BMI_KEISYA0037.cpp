#include <iostream>
using namespace std;

float Hitung_BMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}
string Status_BMI(float bmi)
{
    if (bmi < 18.5)
      return "Berat Badan Kurang";
    else if (bmi < 25)
      return "Berat Badan Normal";
    else if (bmi < 30)
      return "Berat Badan Kelebihan";
    else
      return "Obesitas";
}
int main()
{
    float berat, tinggi, bmi;
    string status;
     cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;