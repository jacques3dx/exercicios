#include <iostream>


using namespace std;

void analisar(string word){
        
        char alfabeto[8][4]= { {'a','b','c',' '},{'d','e','f',' '},{'g','h','i',' '},
                            {'j','k','l',' '},{'m','n','o',' '},{'p','q','r','s'},
                            {'t','u','v',' '},{'w','x','y','z'}};
        
        for (int j = 0; j < word.length(); j++){

            for(int k =0; k < sizeof(alfabeto); k++){
                
                for(int l =0; l < 4; l++){
                    if(word[j] == alfabeto[k][l]){
                        cout<<'#'<<(k+2)<<'='<<(l+1)<<endl;
                        break;
                    }  
                }
                            
            }
        }
}

int main(){

    string resposta = "s";
    string palavra;
    do{
        cout<<"Digite uma palavra:"<<endl;
        
        cin>>palavra;
        if(palavra.length() < 10){
            analisar(palavra);
            
        }else{
            cout<<"Didite palavras menores que 50 caracteres!"<<endl;
        }
        
        cout<<"gostaria de digitar mais alguma palavra? s/n"<<endl;
        cin>>resposta;
    }while(resposta =="s") ;
}