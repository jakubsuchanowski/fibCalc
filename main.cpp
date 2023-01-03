#include <iostream>

int fibonacci(int n);
int main() {
    using namespace std;
    int n;
        cout << "Podaj wyraz ciagu Fibonacciego: " << endl;
        cin >> n;
        if (n < 0) {
            cout << "Wyraz ciagu musi być nieujemny"<<endl;
        }
        if (n >= 0)
            cout << "Wynik= " << fibonacci(n) << endl;
    cout<<" FibCalc\n Autor: Jakub Suchanowski, grupa 2.4"<<endl;
    return 0;
}

int fibonacci(int n){
    int a=0, b=1;
    for(int i=0;i<n;i++){
        int temp = a+b;
        a=b;
        b=temp;
    
    }
    return a;
}