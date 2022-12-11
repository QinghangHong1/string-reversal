#include <iostream>
#include <string>

using namespace std;

string reverse_string_v1(string s){
    /**
     * reverse a string s v1
     * 
     * @param s A string 
     * @return reverse of s
     */


    int len = s.length();
    for(int i = 0; i <  len / 2; i++){
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - 1 - i] = temp;
    }
    return s;
}

int main(){
    string s1 = "helloworld";
    string s2 = "w";
    string s3 = "ok";
    string s4 = "wwww";
    string s5 = "";
    assert(reverse_string_v1(s1) == "dlrowolleh");
    assert(reverse_string_v1(s2) == "w");
    assert(reverse_string_v1(s3) == "ko");
    assert(reverse_string_v1(s4) == "wwww");
    assert(reverse_string_v1(s5) == "");
}