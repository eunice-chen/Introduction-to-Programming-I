#include <iostream>
#include <complex>
#include <cmath>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <algorithm>

using namespace std;


class Complex{

private:
 double real,imag;

public:
 Complex(){
  real=imag=0;
 }

 Complex(double r){
  real=r;
  imag=0;
 }

 Complex(double r, double i){
  real=r;
  imag=i;
 }


 void print()
 {
        cout<<real<<"+"<<"j"<<imag<<setw(5);
 }

double getReal() const{
  return real;
 }

 double getImag() const{
  return imag;
 }

 void setReal(double re){
  real = re;

 }

 void setImag(double im){
        imag = im;
 }


};



int main()
{

Complex number [6];
double real;
double img;
 cout<<"Enter the Real  part of 1st Number: ";
 cin>>real;
    number[0].setReal(real);
 cout<<"Enter the Imaginary part of 1st number: ";
 cin>>img;
    number[0].setImag(img);
    number[0].print();

 cout<<"\nEnter the Real part of 2nd Number: ";
 cin>>real;
    number[1].setReal(real);
 cout<<"Enter the Imaginary part of 2nd number: ";
 cin>>img;
    number[1].setImag(img);
    number[1].print();

 cout<<"\nEnter the Real  part of 3rd Number: ";
 cin>>real;
    number[2].setReal(real);
 cout<<"Enter the imaginary  part of 3rd Number: ";
 cin>>img;
    number[2].setImag(img);
    number[2].print();

 cout<<"\nEnter the Real part of 4th Number: ";
 cin>>real;
    number[3].setReal(real);
 cout<<"Enter the Imaginary part of 4th number: ";
 cin>>img;
    number[3].setImag(img);
    number[3].print();

 cout<<"\nEnter the Real part of 5th Number: ";
 cin>>real;
    number[4].setReal(real);
 cout<<"Enter the Imaginary part of 5th number: ";
 cin>>img;
    number[4].setImag(img);
    number[4].print();

 cout<<"\nEnter the Real  part of 6th Number: ";
 cin>>real;
    number[5].setReal(real);
 cout<<"Enter the imaginary  part of 6th Number: ";
 cin>>img;
    number[5].setImag(img);
    number[5].print();

 cout<<"\nEnter the Real part of 7th Number: ";
 cin>>real;
    number[6].setReal(real);
 cout<<"Enter the Imaginary part of 7th number: ";
 cin>>img;
    number[6].setImag(img);
    number[6].print();

  cout << "\n\nOriginal Array of Complex Numbers:" << endl;
number[0].print();
number[1].print();
number[2].print();
number[3].print();
number[4].print();
number[5].print();
number[6].print();

 cout << "\nSince the magnitudes of these complex numbers are : " << endl;
double magnitudes [6];
double mag1,mag2,mag3,mag4,mag5,mag6,mag7;
mag1 = magnitudes[0]=sqrt((number[0].getReal() * number[0].getReal())+(number[0].getImag()*number[0].getImag()));
mag2 = magnitudes[1]=sqrt((number[1].getReal()*number[1].getReal())+(number[1].getImag()*number[1].getImag()));
mag3 = magnitudes[2]=sqrt((number[2].getReal()*number[2].getReal())+(number[2].getImag()*number[2].getImag()));
mag4 = magnitudes[3]=sqrt((number[3].getReal()*number[3].getReal())+(number[3].getImag()*number[3].getImag()));
mag5 = magnitudes[4]=sqrt((number[4].getReal()*number[4].getReal())+(number[4].getImag()*number[4].getImag()));
mag6 = magnitudes[5]=sqrt((number[5].getReal()*number[5].getReal())+(number[5].getImag()*number[5].getImag()));
mag7 = magnitudes[6]=sqrt((number[6].getReal()*number[6].getReal())+(number[6].getImag()*number[6].getImag()));

cout  << " : " << magnitudes[0] << endl;

cout  << " : " << magnitudes[1] << endl;

cout  << " : " << magnitudes[2] << endl;

cout  << " : " << magnitudes[3] << endl;

cout  << " : " << magnitudes[4] << endl;

cout  << " : " << magnitudes[5] << endl;

cout  << " : " << magnitudes[6] << endl;
cout << "\n And if we rearrange them, it will become: " << endl;
sort(magnitudes,magnitudes+7);
cout  << " : " << magnitudes[0] << endl;
cout  << " : " << magnitudes[1] << endl;
cout  << " : " << magnitudes[2] << endl;
cout  << " : " << magnitudes[3] << endl;
cout  << " : " << magnitudes[4] << endl;
cout  << " : " << magnitudes[5] << endl;
cout  << " : " << magnitudes[6] << endl;

double median_magnitude =  magnitudes[3];
cout << "The Median Element of the Array is: " << endl;
if(median_magnitude == mag1){
        number[0].print();
}
if(median_magnitude == mag2){
        number[1].print();
}
if(median_magnitude == mag3){
        number[2].print();
}
if(median_magnitude == mag4){
        number[3].print();
}
if(median_magnitude == mag5){
        number[4].print();
}
if(median_magnitude == mag6){
        number[5].print();
}
if(median_magnitude == mag7){
        number[6].print();
}
 return 0;
}


