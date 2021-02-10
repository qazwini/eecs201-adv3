#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <vector>

using namespace std;

const int MAX_CHAR = 255;
const int MAX_ARGS = 15;

int main(int argc, char *argv[]) {
    // forever loop
        // print prompt
        // receive user input
        // parse input
        // handle EOF
        // handle `exit` and `cd`
        // fork
            // child
                // execute commnad
                // handle errors
            // parent
                // wait for child
    
    while (true) {
        cout << getenv("USER") << ":" << getcwd(NULL, MAX_CHAR) << "$ " << flush;
        
        char input[MAX_CHAR];
        cin.getline(input, MAX_CHAR);
        
        if (strcmp(input, "") == 0) {
            continue;
        }
    }
    
    return 0;
}
