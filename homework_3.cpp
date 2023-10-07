#include <iostream>
#include <stdio.h>
#include <windows.h> // for Beep()
#include <unistd.h> // for usleep()
#include <conio.h> // for _getch()
// #include <ctype.h>
using namespace std;
int main()
{
char x;
/*--- Musical Notes of Increasing Pitches ---*/
 double pitch[]={
 0, 523.3, 587.3, 659.3, 698.5, 784.0, 880.0, 932.3, 987.8
 };
 int music[] = {5, 3, 3, 0, 0, 0, 4, 2, 2, 0, 0, 0, 1, 2, 3, 4, 5, 5, 5, 0, 0, 0,
 5, 3, 3, 0, 0, 0, 4, 2, 2, 0, 0, 0, 1, 3, 5, 5, 1};
 /*--- play the music defined in music[] automatically ---*/
 /*for(int t=0; t<39; t++){
 if(music[t]==0) usleep(150000); // sleep for a while without making any sound
 else Beep(pitch[music[t]], 400); // Beep for a musicial note
 }
 /*-----------------------------------------------------------------------------------------------*/
 /*--- Add program segment here to turn your keyboard into a musical instrument ---*/
 /*-----------------------------------------------------------------------------------------------*/
 while(1){
   x = getch();
   x = toupper(x);
   cout << x;
   switch(x){
    case 'A' : Beep(pitch[1],400); break;
    case 'S' : Beep(pitch[2],400); break;
    case 'D' : Beep(pitch[3],400); break;
    case 'F' : Beep(pitch[4],400); break;
    case 'G' : Beep(pitch[5],400); break;
    }
 }
 return 0;
}
