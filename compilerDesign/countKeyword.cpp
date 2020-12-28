#include<bits/stdc++.h>
using namespace std;
int main(){
	int countKeywords = 0;
    vector<string> keywords = {
                    "auto", "double", "int", "struct", "break", "else", "long",
                    "switch", "case", "enum", "register", "typedef", "char",
                    "extern", "return", "union", "const", "float", "short",
                    "unsigned", "continue", "for","signed", "void", "default",
                    "goto", "sizeof", "voltile", "do", "if", "static", "while",
                    "void", "main"
                };

	string code, line;
	cout << "For break input quit" << endl;
	while(getline(cin,line)){
		if(line=="quit") break;
		code += line + '\n';
	}

    string temp = "";
    for(int i = 0; i <= code.length(); i++){
        if(code[i] != ' ' && i < code.length()){
            temp += code[i];
        }
        else{
            if(find(keywords.begin(), keywords.end(), temp) != keywords.end()) countKeywords++;
            temp = "";
        }
        if(i == code.length()){
            if(find(keywords.begin(), keywords.end(), temp) != keywords.end()) countKeywords++;
        }
    }
    cout  << countKeywords << " keywords found" <<  endl;
	
    return 0;
}


