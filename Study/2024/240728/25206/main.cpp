#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

float WtoG(string word){
    if(word == "A+") return 4.5;
    else if(word == "A0") return 4.0;
    else if(word == "B+") return 3.5;
    else if(word == "B0") return 3.0;
    else if(word == "C+") return 2.5;
    else if(word == "C0") return 2.0;
    else if(word == "D+") return 1.5;
    else if(word == "D0") return 1.0;
    else if(word == "F") return 0.0;
    else return -1;
}

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL);
    cin.exceptions(ios::failbit | ios::badbit);

    fstream fin("input.txt", ios::in);

    string sub, word;
    float point, grade, sum, total;
    uint32_t i;

    vector<float> v;
    vector<float>::iterator itr;

    for(i=0; i<20; i++){
        fin >> sub;
        fin >> point;
        fin >> word;
        grade = WtoG(word);

        if(grade > -1){
            total += point;
            v.push_back(point * grade);
        }
    }

    for(itr=v.begin(); itr!=v.end(); itr++){
        sum += *itr;
    }

    cout << sum / total;

    return 0;
}