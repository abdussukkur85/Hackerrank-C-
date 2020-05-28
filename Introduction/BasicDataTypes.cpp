#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int first;
    long int second;
    char third;
    float fourth;
    double fifth;

    cin>>first>>second>>third>>fourth>>fifth;
    cout<<first<<endl<<second<<endl<<third<<endl;
    printf("%.3f\n",fourth);
    printf("%.9lf\n",fifth);
    
    return 0;
}
