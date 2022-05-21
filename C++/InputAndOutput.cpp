#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num[3];
    for(int i=0; i<3; i++){
        cin >> num[i];
    }
    cout << num[0]+num[1]+num[2];
    return 0;
}