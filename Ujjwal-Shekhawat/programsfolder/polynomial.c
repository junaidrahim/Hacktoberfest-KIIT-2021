 #include<stdio.h>

 struct poly
 {
	 int coeff;
	 int expo;
 };

 struct poly p1[10],p2[10],p3[10];

 void Display(struct poly p[10],int term)
 {
	int k;

	for(k=0;k<term-1;k++)
	printf("%d(x^%d)+",p[k].coeff,p[k].expo);
	printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}

 int insertPolynomialElement(struct poly p[10])
 {
	int t,i;

	printf("\n\n Enter the total number of terms in the polynomial:");
	scanf("%d",&t);

	printf("\n Enter the COEFFICIENT and EXPONENT in DESCENDING ORDER\n");
	for(i=0;i<t;i++)
	{
		printf("   Enter the Coefficient(%d): ",i+1);
		scanf("%d",&p[i].coeff);
		printf("      Enter the exponent(%d): ",i+1);
		scanf("%d",&p[i].expo);        
	}
	return(t);
 }

void polyAddition(struct poly p1[10],struct poly p2[10],int t,int t1,struct poly p3[10])
 {
	int i,j,k;


	i=0;
	j=0;
	k=0;

	while(i<t && j<t1)
	{
		if(p1[i].expo==p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff + p2[j].coeff;
			p3[k].expo=p1[i].expo;

			i++;
			j++;
			k++;
		}
		else if(p1[i].expo>p2[j].expo)
		{
			p3[k].coeff=p1[i].coeff;
			p3[k].expo=p1[i].expo;
			i++;
			k++;
		}
		else
		{
			p3[k].coeff=p2[j].coeff;
			p3[k].expo=p2[j].expo;
			j++;
			k++;
		}
	}

	while(i<t)
	{
		p3[k].coeff=p1[i].coeff;
		p3[k].expo=p1[i].expo;
		i++;
		k++;
	}
	while(j<t1)
	{
		p3[k].coeff=p2[j].coeff;
		p3[k].expo=p2[j].expo;
		j++;
		k++;
	}
    
		printf(" \n\n Resultant polynomial after addition : ");
	Display(p3,k);
 }

int main()
 {
	int t=0,t1=0,ch=0;
    printf("\n1.press 1 to enter values\n2.press 2 to display values\n3.press 3 to add 2 polynomials\nChoice : ");
	while(ch<=3)
	{
	    printf("\n enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
	    	t=insertPolynomialElement(p1);
            t1=insertPolynomialElement(p2);
            break;
        
        case 2:
            printf("\nEnter first polynomial : ");
	        Display(p1,t);
	        printf("\nEnter second polynomial : ");
	        Display(p2,t1);
	        break;
	    
        case 3:
	        polyAddition(p1,p2,t,t1,p3);
            printf("\n");
	        break;
	    default:
	    printf("\ninvalid\n");
	}
	}
	

	return 0;
 }