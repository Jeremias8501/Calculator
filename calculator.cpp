#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int Addition(int x,int y) {
    int z;
z=x+y;
return(z);
}
int Subtraction(int x,int y) {
int z;
z=x-y;
return z;
}
int Multiplication (int x,int y) {
int z;
z=x*y;
return(z);
}
int Division(int x,int y) {
int z;
z=x/y;
return (z);
}
int Modulus(int x,int y) {
int z;
z=x%y;
return(z);
}
int main() {
    while (1) {
        int fnum,snum,sum,difference,product,quotient,modulus;
        cout<<"\t\t\t\"Welcome to Calculator!\"";
        cout<<"\n\n\t\tFirst number: ";
        cin>>fnum;
        cout<<"\n\t\tSecond number: \a";
        cin>>snum;
        sum=Addition(fnum,snum);
        cout<<"\n\tAddition:"<<"\n\t\t"<<sum;

        difference=Subtraction(fnum,snum);
        cout<<"\n\tSubtraction:"<<"\n\t\t"<<difference;

        product=Multiplication(fnum,snum);
        cout<<"\n\tMultiplication:"<<"\n\t\t"<<product;

        quotient=Division(fnum,snum);
        cout<<"\n\tDivision:"<<"\n\t\t"<<quotient;

        modulus=Modulus(fnum,snum);
        cout<<"\n\tModulus:"<<"\n\t\t\a"<<modulus<<"\n\n";
        system("pause");
        system("cls");

    }

return 0;
}
