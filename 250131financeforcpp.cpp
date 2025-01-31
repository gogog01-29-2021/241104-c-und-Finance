//logical XOR Debugging     std::cout (x>0|y<0) << std::endl; // Logical Operator
//     std::cout <eof(char) <<"\n";


#include <iostream>
#include <cmath>
int numberofplatonicsolid;
int aHexadecimalNumber=0xFF;
int anOctalNumber=013;
int nummberOfPlanets=07;
short int x;
long int y;
long long z;
unsigned int x;

float real1;
double real2=3.1312;
long double real3;

double xxx=pow(1.7815,0.1);
int xAsInt=(int)x;

int x12=3;
int yyy=5;
double fraction=((double)x)/y;

char theLetterX='X';
char theLetterY='Y';
char theSingleQuoteCharacter='\'';
char* myString2="Hello, World!";
//char myString2="Hello, World!";
bool myBoolean1=true;
bool myBoolean2=false;
int main(){
    int xxxxx=3;
    int yyyyy=5;
    const bool myBoolean3=(4*6<=9);
    std::cout << myBoolean3 << std::endl;
    double fraction=((double)xxxxx)/yyyyy;
    std::cout << fraction << std::endl;
    printf("%f\n",myBoolean1);
    printf(3/5);
    std::cout << (x>0&&(y<0)) << std::endl; // Logical Operator
    std::cout (x>0|y<0) << std::endl; // Logical Operator
    std::cout << (x>0^y<=9) << std::endl; // what is Logical Operator XOR?
    std::cout << x<2 << std::endl; // omparison Operator Operator

    std::cout <eof(char) <<"\n";
    char d='a';
    std::cout << sizeof(d) <<"\n";
    return 0;
}
