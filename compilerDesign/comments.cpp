#include<bits/stdc++.h>
using namespace std;

void countComment(string code){
    int flag, countComment = 0;
    for(int i=0; i < code.length(); i++){
		if(code[i]=='/' && code[i+1] == '/'){
			countComment++;
            i++;
            //set value of i to \n 
            //is there are multiple / in single line it will be count as single comment
            for(int j = i; j < code.length(); j++){
                if(code[j] == '\n'){
                    i = j-1;
                    break;
                }
            }
		}
		else {
            if(code[i] == '/' && code[++i] == '*'){
       
			for(int j = i+1; j <= code.length(); j++){
				if(code[j] == '*' && code[j+1]=='/'){
						countComment++;
						i++;
					}
				}
			}
        }
	}
    if(countComment) cout << countComment << " comments found\n";
    else cout << "No Comment found";
	
}

int main(){
    string line, code;   
    cout << "Enter the code: Type \"quit\" to quit\n";
    while (getline(cin, line )){
        if(line == "quit") break;
        code += line + '\n';
    }
    countComment(code);
    return 0;
}

