#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    ifstream score;
    score.open("score.txt");

    int i = 0;
    double num , sum , xbar , stdn , snum;

    while(score >> num){
        sum += num;
        i++;
    }

    xbar = sum / ( i ) ;
    score.clear();
    score.seekg(0, ios::beg);

    while(score >> num){
        snum += pow(num - xbar, 2);
    }

    stdn = sqrt(snum / (i));

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = "<< xbar << endl;
    cout << "Standard deviation = " << stdn;
}
