#include<iostream>
using namespace std;
class abc{
    public:
    int a;int b; int temp;
    int swap(int a,int b);
 }s1;
int main(){
    int a=1,b=5;
    s1.swap(a,b);
    
}
int abc :: swap(int a,int b){
    temp = a;
    a = b ;
    b = temp;
    cout<<"a="<<a<<"b= "<<b<<endl;
    return 0;
}