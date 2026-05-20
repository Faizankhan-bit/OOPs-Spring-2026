#include<iostream>
#include<vector>

using namespace std;

class DynamicStack{
    vector<char>st;

    public:
        void push(char ch){
            st.push_back(ch);
        }

        void pop(){
            if(!st.empty())
                st.pop_back();
        }

        char peek(){
            if(!st.empty()){
                return st.back();
            }

            return '\0';
        }

        bool isempty(){
            return st.empty();
        }

        void reverse(string sentence){
            
            string result = "";

            for(int i = 0; i < sentence.length(); i++){
                if(sentence[i] != ' '){
                    push(sentence[i]);
                }
                else{
                    while (!isempty()){
                        result += peek();
                        pop();
                    }

                    result += ' ';
                }
            }

            while(!isempty()){
                result += peek();
                pop();
            }

            cout<<"Reversed Sentence : "<<result<<endl;

        }
};

int main(){
    DynamicStack s;

    string sentence;

    cout<<"Enter Sentence : "<<endl;
    getline(cin,sentence);

    s.reverse(sentence);
}