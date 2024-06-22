class Solution {
public:
    bool isPalindrome(string s) {

    int l = s.size();
    char pali[l+1];

    int j = 0;
    for(int i = 0;i<l;i++){
        int currentChar = s[i];
        if ( (currentChar >= 65 && currentChar <= 90) ||
             (currentChar >= 97 && currentChar <= 112) ){

                if( (currentChar >= 65 && currentChar <= 90) ){
                    pali[j] = s[i] + 32;
                    j++;  
                }
                else {
                pali[j] = s[i];
                j++;
                }
        } 
    }
    pali[j] = '\0';  
    cout << pali << endl;
    
 
   
    bool logic = true;
    if(j > 1){
        for (int i = 0; i < j / 2; i++) {
            if (pali[i] != pali[j - i - 1]) {
                logic = false;
                break;
            }
        }
    }
    else logic = true;


    if(logic == true) return true;
    else return false;
    }
};