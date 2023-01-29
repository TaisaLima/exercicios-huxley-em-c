int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	
	if ((a==b) && (b==c) && (a==c)){
		printf("equilatero\n");
    }
	else if ((a != b) && (a != c) && (b!=c)) {
		printf("escaleno\n");
    }
    else {
	printf("isosceles\n");
    }
    
    return 0;
}