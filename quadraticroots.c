#include<stdio.h>
#include<math.h>
    int main(){
        float root1,root2,realpart,imagpart,D,a,b,c;
        
        printf("Enter three coefficients:");
        scanf("%f %f %f",&a,&b,&c);

        //For discriment calculation
        D = (b*b) - (4*a*c);
        
        if(D>0){
            //Two distinct & real roots
            root1 = (-b + sqrt(D)) / (2*a);
            root2 = (-b + sqrt(D)) / (2*a);
            printf("Roots are real and distinct.\n");
            printf("Root1 = %.2f\n",root1);
            printf("Root2 = %.2f\n",root2);
        } else if(D == 0){
            //One equal root(both roots are equal)
            root1 = root2 = -b / (2*a);
            printf("Roots are real & equal\n");
            printf("Root1 = Root2 = %.2f\n",root1);
        } else{
            //Imaginary roots
            realpart = -b / (2*a);
            imagpart = sqrt(-D) / (2*a);
            printf("Roots are imaginary/complex.\n");
            printf("Root1 = %.2f + %.2fi\n", realpart, imagpart);
            printf("Root2 = %.2f + %.2fi\n",realpart,imagpart);
        }
        return 0;
    }