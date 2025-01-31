int length(int num) {
    if (num == 0) return 1; // 0 has 1 digit

    int length = 0;
    while (num > 0) {
        num /= 10;
        ++length;
    }
    return length;
}


int length1(int num){
    int length = 0;
    for(int i=num;num>0;num = num/10){ // since here i is not used we can also not use the intialisation.
        ++length;
    }
    return length;
}

int length2(int num){
    int length = 0;
    for(;num>0;num= num/10){
        ++length;
    }
    return length;
}