#include <string>
#include <iostream>
 
int main(){
    std::string str;
    std::cin >> str;
    int i{0}, j{str.length() - 1}, cnt{0};
   
   // Check from both the ends if characters are equal.
    while(i < j){
        if (str[i]!= str[j]) ++cnt;
        
        ++i;
        --j;
    }
    
    // If there's one mismatch.
    if ( cnt == 1 ) std::cout << "YES";
    // Odd length string with 0 mismatches e.g: abcba, can change middle char.
    else if ( cnt == 0 && str.length()&1 ) std::cout << "YES";
    else std::cout << "NO";
}
