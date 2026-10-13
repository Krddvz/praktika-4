#include <iostream>
using namespace std;

int main() {
    int X; 
    cin >> X;

    while (X >= 1000) { 
        cout << "M";  X -= 1000;
    }
    if (X >= 900){ 
        cout << "CM"; X -= 900;  
    }
    if (X >= 500){ 
        cout << "D";  X -= 500;  
    }
    if (X >= 400){ 
        cout << "CD"; X -= 400;  
    }


    while (X >= 100){ 
        cout << "C";  X -= 100;  
    }
    if (X >= 90){ 
        cout << "XC"; X -= 90;   
    }
    if (X >= 50){ 
        cout << "L";  X -= 50;   
    }
    if (X >= 40){ 
        cout << "XL"; X -= 40;   
    }


    while (X >= 10){ 
        cout << "X";  X -= 10;   
    }
    if (X >= 9){ 
        cout << "IX"; X -= 9;    
    }
    if (X >= 5){ 
        cout << "V";  X -= 5;    
    }
    if (X >= 4){ 
        cout << "IV"; X -= 4;   
    }
    
    
    while (X >= 1){ 
        cout << "I";  X -= 1;    
    }
    return 0;
}