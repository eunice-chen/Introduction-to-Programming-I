#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    long double wave1,wave2,wave3;
    cout << "Enter first wavelength in meters (m)" << endl;
    cin >> wave1;
    {
        if (wave1<=1e-11)
            cout <<   "First electromagnetic wave with a wavelength of("  << scientific << setprecision(1) << wave1<< ") meter is a (Gamma Rays)\n";
        else if (wave1>1e-11 && wave1<=1e-8)
            cout << "First electromagnetic wave with a wavelength of("  <<  scientific << setprecision(1) << wave1<< ") meter is a (X Rays)\n";
        else if (wave1>1e-8 && wave1<=4e-7)
            cout <<  "First electromagnetic wave with a wavelength of("  << scientific << setprecision(1) << wave1 << ") meter is a (Ultraviolet)\n";
        else if (wave1>4e-7 && wave1<=7e-7)
            cout <<  "First electromagnetic wave with a wavelength of(" << scientific << setprecision(1) <<  wave1 << ") meter is a (Visible Light)\n";
        else if (wave1>7e-7 && wave1<=1e-3)
            cout << "First electromagnetic wave with a wavelength of(" << scientific << setprecision(1)  <<   wave1 << ") meter is a (Infrared)\n";
        else if (wave1>1e-3 && wave1<=1e-2)
            cout << "First electromagnetic wave with a wavelength of(" <<  fixed << setprecision(3) <<  wave1 << ") meter is a (Microwaves)\n";
        else if (wave1>1e-2)
            cout  << "First electromagnetic wave with a wavelength of("   <<  fixed << setprecision(3) << wave1<< ") meter is a (Radio Waves)\n";
    }
    cout << "Enter second wavelength in meters (m)" << endl;
    cin >> wave2;
    {
        if(wave2<=1e-11){
            cout << "Second electromagnetic wave with a wavelength of"<<scientific << setprecision(1) << wave2 << ") meter is a (Gamma Rays)\n";}
        else if(wave2>1e-11 && wave2<=1e-8)
            cout << "Second electromagnetic wave with a wavelength of(" << scientific << setprecision(1) << wave2 << ") meter is a (X Rays)\n";
        else if(wave2>1e-8 && wave2<=4e-7)
            cout << "Second electromagnetic wave with a wavelength of(" << scientific << setprecision(1) << wave2 << ") meter is a (Ultraviolet)\n";
        else if(wave2>4e-7 && wave2<=7e-7)
            cout << "Second electromagnetic wave with a wavelength of(" << scientific << setprecision(1)  << wave2<< ") meter is a (Visible Light)\n";
        else if(wave2>7e-7 && wave2<=1e-3)
            cout << "Second electromagnetic wave with a wavelength of("<< scientific << setprecision(1)  << wave2 << ") meter is a (Infrared)\n";
        else if(wave2>1e-3 && wave2<=1e-2)
            cout << "Second electromagnetic wave with a wavelength of(" << fixed << setprecision(3)<< wave2 << ") meter is a (Microwaves)\n";
        else if(wave2>1e-2){
            cout << "Second electromagnetic wave with a wavelength of("<< fixed << setprecision(3) << wave2 <<  ")meter is a (Radio waves)\n";
    }
    cout << "Enter third wavelength in meters (m)" << endl;
    cin >> wave3;
    {
        if(wave3<=1e-11)
            cout << "Second electromagnetic wave with a wavelength of(" << scientific << setprecision(1) << wave3 << ") meter is a (Gamma Rays)\n";
        else if(wave3>1e-11 && wave3<=1e-8)
            cout << "Second electromagnetic wave with a wavelength of("  << scientific << setprecision(1) << wave3<< ") meter is a (X Rays)\n";
        else if(wave3>1e-8 && wave3<=4e-7)
            cout << "Second electromagnetic wave with a wavelength of(" << scientific << setprecision(1) << wave3 << ") meter is a (Ultraviolet)\n";
        else if(wave3>4e-7 && wave3<=7e-7)
            cout << "Second electromagnetic wave with a wavelength of(" << scientific << setprecision(1) << wave3 << ") meter is a (Visible Light)\n";
        else if(wave3>7e-7 && wave3<=1e-3)
            cout << "Second electromagnetic wave with a wavelength of("  << scientific << setprecision(1)<< wave3<< ") meter is a (Infrared)\n";
        else if(wave3>1e-3 && wave3<=1e-2)
            cout << "Second electromagnetic wave with a wavelength of(" << fixed << setprecision(3) << wave3 << ") meter is a (Microwaves)\n";
        else if(wave3>1e-2)
            cout << "Second electromagnetic wave with a wavelength of(" << fixed << setprecision(3) << wave3 << ") meter is a (Radio waves)\n";
    }
    }
    return 0;
}
