
int main(){
    
    int a, b, c;

    scanf ("%d %d %d", &a, &b, &c);

    if((a-b == 0) ||  (a-c == 0) ||  (b-c == 0)){
        printf ("S");
    }
    else if ((((a + b) - c) == 0) ||  (((b - a) + c) == 0) ||  ((c - (a + b)) == 0)){
        printf("S");
    }
    else if(((a-b-c) == 0) ||  ((b-a-c) == 0) ||  ((c-a-b) == 0)){
        printf("S");
    }
    else if((a + b + c == 0)){
        printf("S");
    }
    else{
        printf("N");
    }
    
    return 0;
}