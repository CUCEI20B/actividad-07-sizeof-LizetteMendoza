#include <iostream>

using namespace std;

int main() {
    string cadena;

    getline(cin,cadena);

    if(cadena=="int"){
        cout<<sizeof(int);
    }
    else if(cadena=="float"){
        cout<<sizeof(float);
    }
    else if(cadena=="short"){
        cout<<sizeof(short);
    }
    else if(cadena=="long"){
        cout<<sizeof(long);
    }
    else if(cadena=="char"){
        cout<<sizeof(char);
    }
    else if(cadena=="double"){
        cout<<sizeof(double);
    }

    return 0;
}