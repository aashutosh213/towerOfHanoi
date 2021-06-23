#include <bits/stdc++.h>

using namespace std;

int count1 = 0; 
// count of numbers of shifts

void towerOfHanoi(int n, char from, char to, char support){
    if(n == 1){
        cout<< "Move disk 1 from " << from << " to " << to<<endl;
        count1++;
        return;
    }
    towerOfHanoi(n-1, from ,support, to);
    cout<<"Move disk " << n << " from "<< from << " to " << to<<endl;
    count1++;
    towerOfHanoi(n-1, support, to, from);
    
}

int main()
{
    int n=3;
    towerOfHanoi(n,'A', 'C','B');
    cout<<count1<<endl;
    

    return 0;
}
