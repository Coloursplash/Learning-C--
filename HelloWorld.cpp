#include <iostream>

// define macros
#define TEXT "Hello world!"
#define EXIT 0

using namespace std;

// prints a string manually written into the file
int main() 
{
    try{
        if(true)
            cout << TEXT << endl;
        else
            throw("oh no")
        
    }
    catch(ex){
        cout << ex << endl;
    }
    return EXIT;
}
