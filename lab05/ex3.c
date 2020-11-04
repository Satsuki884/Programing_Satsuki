int main (){
    #define VALUES 111234
    int N = VALUES;
    int res1 = 0;
    int res2 = 0;
    char ans;
    while(N/1000 > 0 ){
        res1 += N%10;
        N /= 10;
    }
    int B=N;
    while(B > 0 ){
        res2 += B%10;
        B /= 10;
    }
    if(res1==res2) ans = 'Y';
    else ans = 'N';
    return 0;
}