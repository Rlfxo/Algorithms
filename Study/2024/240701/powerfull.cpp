// #include <bits/stdc++.h> Xcode 에서 지원안함 야발
#include <fstream>
#include <iostream>

// define is here
#define size(x) (int)x.size()

// using namespace is here
using namespace std;

// typedef is here
typedef long long ll;
typedef pair<int, int> pii;

// global variable is here
int T;

// function is here
void fun(int x, int y){
    cout << x + y << endl;
}

int main(){
    fstream input,output;
    input.open("input.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);

    ios::sync_with_stdio(0); cin.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);

    input >> T;
    fun(T, T*2);

    input.close();
    return 0;
}