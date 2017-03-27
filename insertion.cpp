#include <iostream>

using namespace std;

int main()
{
    int num[5]={5,9,8,1,32};
    int i,key;

    do {
            for(i=0;i<5;i++) {
                key=num[i+1];
                if(num[i+1]>num[i]) {
                    num[i+1]=num[i];
                    num[i]=key;
                }
            }

    }while(num[0]<num[1]);
    for(i=0;i<5;i++) {
        cout << num[i] << endl;
    }
}
