// hello.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <cstdio>
using namespace std;
constexpr size_t byte = 8;
int main()
{

    /* 1
    printf("Hello, World!\n");
    puts("Hello, World!\n");
    cout << "Hello, World!" << endl;
    //Working, moving to the next section
    */

    /* 2
    int x = 73;
    int y = 42;
    int *ip = &x;
    //int k = &x;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The vlaue of ip is %d\n", ip);
    //printf("The vlaue of &x is %d\n", k);
    printf("The vlaue of *ip is %d\n", *ip);
    return 0;
    //Working Moving to the next section
    */

    /*3
     int x = 7;
    int* ip = &x;
    int& y = x;

    //x = 5;
    y = 42; //y is a reference of x, there is connection in between.If y changes, x also changes.


    int z = 73;
    ip = &z;
    printf("The value of *ip is %d\n", *ip);
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of z is %d\n", z);
    */


    /* 4 Array
     int ia[5];
    ia[0] = 1;
    *ia = 1;
    int* ip = ia;//This assigns the address of the array to the pointer.
    *ip = 2;
    ++ip;
    int ia[5] = { 1,2,3,4,5 };

    */


    /* 5 Primitive String
    char s[] = "Stringsk";
    //char s[] = { 'S','t','r','i','n','g',0 };
    printf("String is: %s\n", s);

    //for (int i = 0; s[i] != 0; ++i) {
    //for(char *cp=s ; *cp; ++cp ){
    for(char c:s){
        if (c == 0) break;
    printf("char is %c\n", c);
    }
    */

    //a int x = 42; // Totally 4+1(this) //a all could be removed 
    //a int y = 7;

    /*
    if (x > y)
    {
        puts("Condition is true");
    }
    else if(y>120){
        puts("else if is true");
    }
    else
    {
        puts("Condition is false");
    }
    */

    //a printf("The greater value is %d\n", x > y? x:y);
    //a printf("The less value is %d\n", x < y ? x : y);

    /* basic for loop
    {

        for (int i = 0; i < 5; i++)
            printf("i is %d\n", i);
    }
    */

    /*
    // This is how to print a character.
    {
        char string[] = "abcdefg";

        for (int i = 0; string[i]; i++)
        {
            printf("i is %c \n", string[i]);
        }
    }
    */
    
    /*
    //String practice 1
    {
    char string[] = "abcdefg";

    //basic for loop
    for (char* cp = string; *cp; ++cp)
        printf("i is %c\n", *cp);
    }
    */
    
    /*
    //String with reference *
    char s[] = "string";
    for (char c : s)
    {
        printf("c is %c\n", c);
    }
    */
    
    /*
    //String expample 2
    for (char c : "string")
    {
        if (c == 0) break;// works the same even without it, because it is complie feature.
        printf("c is %c\n", c);
    }
    */   

    //output stdout
    /*
    cout << "Hello, World! " << 2 * 7 << " another string " << "Hey"<<endl;
    return 0;
    */



/* Integer Sizes
// a byte is 8 bits
constexpr size_t byte = 8;
//long li = 42L;
short li = 42;
printf("sizeof char is %ld bits\n", sizeof(char)* byte);
printf("sizeof short int is %ld bits\n", sizeof(short int)* byte);
printf("sizeof int is %ld bits\n", sizeof(int)* byte);
printf("sizeof long int is %ld bits\n", sizeof(long int)* byte);
printf("sizeof long long int is %ld bits\n", sizeof(long long int)* byte);
printf("sizeof long long int is %ld bits\n", sizeof(42L)* byte);
printf("sizeof long long int is %ld bits\n\n\n", sizeof(42)* byte);

    int x = 0233;
printf("x is %d\n", x);

long long int y = 147LL;
printf("y is %lld\n", y);

long int k = 111111;
printf("k is %ld\n", k);

unsigned int z = 55U;
printf("z is %d\n", z);
*/
  
/* Fixed-sized Integers 
printf("sizeof uint8_t is %ld bits\n", sizeof(uint8_t)* byte);
printf("sizeof uint16_t is %ld bits\n", sizeof(uint16_t)* byte);
printf("sizeof uint32_t is %ld bits\n", sizeof(uint32_t)* byte);
printf("sizeof uint64_t is %ld bits\n", sizeof(uint64_t)* byte);
*/


/*Float type
double df;
long double ldf;
printf("size of float is %ld bits\n", sizeof(f)* byte);
printf("size of double float df is %ld bits\n", sizeof(df)* byte);
printf("size of double float ldf is %ld bits\n", sizeof(ldf)* byte);

long double ldf;
ldf = 5e20;
printf("f is %1.20Lf",  ldf);
*/

/*Array and Character
//char cstring[] = "String";
const char* cstring = "String" "foo";
printf("The string is: %s\n", cstring);

    for (unsigned int i = 0; cstring[i]; i++)
    {
        printf("%02d: %c\n ", i, cstring[i]);

    }
    printf("\x40 ");
*/



/*Reference
*/

return 0;
}
