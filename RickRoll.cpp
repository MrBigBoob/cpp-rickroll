#include <iostream>
#include <windows.h>
#include <shellapi.h>

 using namespace std; 

 int main()
 {
     for (int dm = 0; dm < 1; dm++)
     {
         ShellExecute(0,0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_HIDE);

     }
     return 0;



 }


 