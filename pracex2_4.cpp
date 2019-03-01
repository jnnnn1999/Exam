#include <iostream>
#include <cmath>

using namespace std;

//Write prototype of av() here.
template <typename T>
 typename av (typename , typename);

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

//Write function definition of av() here.
typename av(typename x , typename y);{
    max=x,min=y;
    if(x<=0 or y<=0){
        return 0;
    }else if(max/min <=100){
        return pow(x*y,0.5);
    }else return (x,x+y/2)+(y,x+y/2);
}
