/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <iostream>
#include <conio.h>
#define phi 22/7

using namespace std;
 
int main(){
float r_alas,r_selimut,t,volume_kerucut,luas_alas,luas_selimut;
cout <<"masukkan jari jari alas =";
cin >> r_alas;
cout <<"masukkan tinggi kerucut =";
cin >> t ;
luas_alas=phi*r_alas*r_alas;
volume_kerucut=luas_alas*t;
cout <<"luas_alas adalah"<< luas_alas << endl;
cout <<"volume_kerucut " << volume_kerucut << endl;
getch();
}