#include <iostream>
using namespace std;

void podpunkt_b()
{
    int n[16]={2,2,2,3,1,1,3,11,7,7,6,7,7,9,9,7};
    
    for (int i=0; i<16; i++)
    {
        if(n[i]>n[i+1]){
            cout << "Tak, tworzy" << endl;
            break;
        }
    }
}

void podpunkt_c()
{
    int n[16]={2,2,2,3,1,1,3,11,7,7,6,7,7,9,9,7};
    
    int najdluzszy=0;
    int combo=0;
    
    for (int i=0; i<16; i++)
    {
        if(n[i]<=n[i+1]){
            combo++;
            
            if (combo>najdluzszy) {
                najdluzszy=combo;
            }
        }
        else
            combo=0;
    }
    cout << "najdluzsze schody do dolu maja dlugosc: " << najdluzszy << endl;
}



int main() {
    
    podpunkt_b();
    podpunkt_c();
    
    return 0;
}
