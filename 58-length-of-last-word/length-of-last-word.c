int lengthOfLastWord(char* s) {
    int c=0;
    for(int i=strlen(s)-1;i>=0;i--){
        if(s[i]!=' '){
            c++;
        }
        else if(s[i]==' '&&c!=0){
            break;
        }else{
            continue;
        }
    }
    return c;
}