/*


        A B C D E
        A B C D
        A B C
        A B
        A


*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"Enter number of rows: "<<endl;

    cin>>n;

    for(int i=0;i<n;i++){
        for(char j = 'A';j<='A'+(n-i-1);j++)
        cout<<j<<" ";

        cout<<endl;
    }
    return 0;
}
