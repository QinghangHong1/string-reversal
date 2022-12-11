#include <iostream>
#include <string>

using namespace std;

string reverse_string_v1(string s){
    /**
     * reverse a string s v1 iteratively
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
void reverse_string_v2_helper(string& s, int start, int end){
    if (end <= start){
        return;
    }
    swap(s[start], s[end]);
    reverse_string_v2_helper(s, start + 1, end - 1);
}
void reverse_string_v2(string& s){
    /**
     * reverse the string s in place recursively
     * @param s A string
     */
    reverse_string_v2_helper(s, 0, s.length() - 1);

}

string reverse_string_v3(const string& s){
    /**
     * reverse the string s with reverse iterator
     * @param s A string 
     * @return reverse of s
     */
    string result = "";
    for(string::const_reverse_iterator it=s.rbegin(); it != s.rend(); it++){
        result += *it;
    }
    return result;

}

class CustomString: public string{
    /**
     * Custom class wrapper for string
     * reverse member function for string
     * 
     */
private:
    string source;
public:
    CustomString(string s){
        source = s;
    }
    const string reverse(){
        /**
         * reverse string source
         * 
         * return reverse of source, but not modify source
         */
        string result = "";
        for(string::const_reverse_iterator it=source.rbegin(); it != source.rend(); it++){
            result += *it;
        }
        return result;
    }
};
void test_v1(){
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

void test_v2(){
    string s1 = "helloworld";
    string s2 = "w";
    string s3 = "ok";
    string s4 = "wwww";
    string s5 = "";
    reverse_string_v2(s1);
    reverse_string_v2(s2);
    reverse_string_v2(s3);
    reverse_string_v2(s4);
    reverse_string_v2(s5);
    assert(s1 == "dlrowolleh");
    assert(s2 == "w");
    assert(s3 == "ko");
    assert(s4 == "wwww");
    assert(s5 == "");
}
void test_v3(){
    string s1 = "helloworld";
    string s2 = "w";
    string s3 = "ok";
    string s4 = "wwww";
    string s5 = "";
    assert(reverse_string_v3(s1) == "dlrowolleh");
    assert(reverse_string_v3(s2) == "w");
    assert(reverse_string_v3(s3) == "ko");
    assert(reverse_string_v3(s4) == "wwww");
    assert(reverse_string_v3(s5) == "");
}

void test_v4(){
    CustomString cs1("helloworld");
    CustomString cs2("w");
    CustomString cs3("ok");
    CustomString cs4("wwww");
    CustomString cs5("");
    assert(cs1.reverse() == "dlrowolleh");
    assert(cs2.reverse() == "w");
    assert(cs3.reverse() == "ko");
    assert(cs4.reverse() == "wwww");
    assert(cs5.reverse() == "");
}

int main(){
    
    test_v1();
    test_v2();
    test_v3();
    test_v4();
    cout << "All tests passed" << endl;
}