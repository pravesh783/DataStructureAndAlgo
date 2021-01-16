#include<bits/stdc++.h>
using namespace std;

bool checkIdentifier(char a){
    if(a == '_') return true;
    if((int(a) >= 97 and int(a) <= 122) or (int(a) >= 65 and int(a) <= 90)) return true;
    return false;

}

int main(){
    string input;
    cin >> input;
    string word = "";
    vector<string> keywords = {
                    "auto", "double", "int", "struct", "break", "else", "long",
                    "switch", "case", "enum", "register", "typedef", "char",
                    "extern", "return", "union", "const", "float", "short",
                    "unsigned", "continue", "for","signed", "void", "default",
                    "goto", "sizeof", "voltile", "do", "if", "static", "while",
                    "void", "main"
                };


    if(find(keywords.begin(), keywords.end(), input) != keywords.end()) cout << input << " is not identifier it is a keyword.\n";
    else if(checkIdentifier(input[0])) cout << input << " is identifier\n";
    else cout << input << " is not an identifier\n";
    // // cout << int('a') << endl << int('z') << endl << int('A') << endl << int('Z') << endl;
    // for(int i = 0; i < line.length(); i++){
    //     //if space don't add 
    //     if(line[i] != ' '){
    //         if(line[i] == ','){
    //             if(checkIdentifier(word[0])) {
    //                 cout << "\'" << word <<  "\' is Valid Identifier\n";
    //                 break;
    //             }
    //             else{
    //                 cout << "\'" << word << " \' is Invalid identifier\n";
    //                 break;
    //             }
    //             word = "";
                

    //         }
    //         word += line[i];
    //     }
    //     else{
    //         // cout << "Checking for " << word << endl;
    //         //check word
    //         if(find(keywords.begin(), keywords.end(), word) != keywords.end()){
    //             cout << "\'" << word << "\' " << " is keyword\n";
    //             word = "";
    //         }
    //         else{
    //             cout << "checking for " << word << endl;
    //              if(find(keywords.begin(), keywords.end(), word) != keywords.end()){
    //             cout << "\'" << word << "\' " << " is  keyword not identifier\n";
    //             word = "";
    //         }
    //             else if(checkIdentifier(word[0])) {
    //                 cout << "\'" << word <<  "\' is Valid Identifier\n";
    //                 break;
    //             }
    //             else{
    //                 cout << "\'" << word << " \' is Invalid identifier\n";
    //                 break;
    //             }

    //             word = "";
                
    //         }


    //     }
    // }
    return 0;
}