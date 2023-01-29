    
int main(){ 
    
    int a, b, c;

    scanf ("%d %d %d", &a, &b, &c);


	if ((a== b)  && (b ==c) && (c== a))  {
		printf("1");
	}
	else if ((a != b)  && (b !=c ) && (c != a))  {
		printf("2");
	}
    else if ((a== b) || (b ==c) || (c== a)) {
        printf("3");
    }
	
    return 0;
}