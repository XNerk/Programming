//recursion 
//question: an algorithm that can return the result of the addition of individual digits of a number. (Exmpl: 326  -> 3+2+6=11)




#include <iostream>
#include <vector>
using namespace std;


int rec(int n);
int main (){

    int n = 1239;

    cout<<rec(n);


    

    system("pause");

}


int rec (int n){
    
    if (n==1){
        return n;
    }
    else{
        return (n%10) + rec(n/10);
       
    }
}
