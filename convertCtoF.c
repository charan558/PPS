/* convert centigrade to fahrenheit 
 formula C=(F-32)/1.8
          F=1.8*C+32
 CONVERTING CENTIGRADE TO FAHRENHEIT */
 
 #include<stdio.h>
 void main()
 {
	float c,f;
	printf("temp in centigrade : ");
	scanf("%f",&c);
        f=1.8*c+32;
	printf("temp in fahrenheit :%f",f);
}
	

