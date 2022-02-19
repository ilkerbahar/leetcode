
bool isPalindrome(int x){
    long int backward=0;
    int remainder;
    int number=x;
    if(x<0){
        return false; 
    }
    while(x!=0){
        remainder = x % 10;
        backward = (backward*10) + (remainder);
        x /= 10;
    }
    
    if(backward==number){
        return true;
    }
    return 0;
    
}