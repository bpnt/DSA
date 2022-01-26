// Program To Use Recursion Method for Tower of Hanoi
#include <iostream>
 
using namespace std;
 
void tower(int n, char source, char des, char via){
if(n == 1){
    cout << "Moved the disk "<< n << " from " << source << " to " << des << " via " << via << ".\n";
 
}
else{
    tower(n-1,source, via, des);
    cout << "Moved the disk " << n << " from " << source << " to " << des << " via " << via << ".\n";
    tower(n-1,via,des,source);
}
 
}
 
int main()
{
    int disks;
    char source='A';
    char des = 'B';
    char via = 'C';
    cout << "Enter the number of disks : "; 
    cin >> disks;
    tower(disks,source,des,via);
 
    return 0;
}