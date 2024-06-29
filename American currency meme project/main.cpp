#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string n;
    string i;
    string m;
    string b;
    
    cout << "What american thing do you wanna see?  ";
    getline(cin, n);
    if(n=="I want to see the currency of America"){
        cout << "America has a virtual currency named crypto/bitcoin, 1 crypto is approximativly 20k   ";
    }
    getline(cin, i);
    if(i=="I want to get 1 trillion crypto"){
        cout << "To get 1 trillion crypto, press the y key to download crypto  ";
        cout << "Download:";
    }
    getline(cin, m);
    if(m=="y"){
        cout << "Now you have 1 trillion crypto, a trojan is installed in your computer, to get rid of the virus please call the nearest indian call center   ";
    }
    
    
    
    return 0;
}
