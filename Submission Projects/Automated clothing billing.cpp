#include<stdio.h>

int main(){
    
    // key idea is that there are 3 types of customers you basically need to take, first total 
    // amount the customer has purchased, then what type of customer he actually is
    //1) regular on purchae if >=1000 discount8%, >=500 5% disc, >=200 2% disc <200 then nothing
    //2)premuium customers if >=2000 15% disc, >=1000 8% disc, >=500 6% disc
    // must make the premium customer feel premium
    //3)VIP on >=3000 20% disc, >=2000 15% disc, >=1000 10% disc
    // for char & is not used      
    char a[20];
    int cri;
    float amt;
    float re1, re2, re3, pe1, pe2, pe3, vp1, vp2, vp3; 
    printf("-----------Welcome to Clothing store----------------\n");
    printf("Please Enter Your total amount ");
    scanf("%f", &amt);
    printf("Please enter your customer critera - \n");
    printf("1 - Regular\n");
    printf("2 - Premium\n");
    printf("3 - VIP\n");
    scanf("%d", &cri);

    switch(cri){
        case 1: // this is for our regular customers
        if(amt>=1000){
            printf("Your earlier cost was: %f \n", amt);
            re1 = amt - 0.08*amt;
            printf("Congratulations!! You availed a discount of 8%!!\n");
            printf("Your total amount now will be %f\n", re1);
        }else if(amt >= 500 && amt < 1000){
            printf("Your earlier cost was: %f \n", amt);
            re2 = amt - 0.05*amt;
            printf("Congratulations!! You availed a discount of 5%!!\n");
            printf("Your total amount now will be %f\n", re2);
        }else if(amt >= 200 && amt < 500){
            printf("Your earlier cost was: %f \n", amt);
            re3 = amt - 0.02*amt;
            printf("Congratulations!! You availed a discount of 2%!!\n");
            printf("Your total amount now will be %f \n", re3);
        }else{
            printf("Your total cost would be %f \n", amt);
            printf("Sorry No discounts Avilable for you :( \n");
            printf("Discounts avilable for purchase amounts Greater than 200 \n");
        }
        break;
        
        case 2: // this is for our Premium customers
        if(amt>=2000){
            printf("Your earlier cost was: %f \n", amt);
            pe1 = amt - 0.15*amt;
            printf("Since you are one of our premium customers \n");
            printf("Congratulations!! You availed a discount of 15%!!\n");
            printf("Your total amount now will be %f \n", pe1);
        }else if(amt >= 1000 && amt < 2000){
            printf("Your earlier cost was: %f \n", amt);
            pe2 = amt - 0.08*amt;
            printf("Since you are one of our premium customers \n");
            printf("Congratulations!! You availed a discount of 8%!!\n");
            printf("Your total amount now will be %f \n", pe2);
        }else if(amt >= 500 && amt < 1000){
            printf("Your earlier cost was: %f \n", amt);
            pe3 = amt - 0.05*amt;
            printf("Since you are one of our premium customers \n");
            printf("Congratulations!! You availed a discount of 5%!!\n");
            printf("Your total amount now will be %f \n", pe3);
        }else{
            printf("Your total cost would be %f \n", amt);
            printf("Sorry No discounts Avilable for you :( \n");
            printf("Discounts avilable for purchase amounts Greater than 500 \n");
        }
        break;

        case 3: // this is for our VIP customers
        if(amt>=3000){
            printf("Your earlier cost was: %f \n", amt);
            vp1 = amt - 0.20*amt;
            printf("Since you are one of our VIP Customers \n");
            printf("Congratulations!! You availed a discount of 20%!!\n");
            printf("Your total amount now will be %f \n", vp1);
        }else if(amt >= 2000 && amt < 3000){
            printf("Your earlier cost was: %f \n", amt);
            vp2 = amt - 0.15*amt;
            printf("Since you are one of our VIP customers \n");
            printf("Congratulations!! You availed a discount of 15%!!\n");
            printf("Your total amount now will be %f \n", vp2);
        }else if(amt >= 1000 && amt < 2000){
            printf("Your earlier cost was: %f \n", amt);
            vp3 = amt - 0.10*amt;
            printf("Since you are one of our premium customers \n");
            printf("Congratulations!! You availed a discount of 10%!!\n");
            printf("Your total amount now will be %f \n", vp3);
        }else{
            printf("Your total cost would be %f \n", amt);
            printf("Sorry No discounts Avilable for you :( \n");
            printf("Discounts avilable for purchase amounts Greater than 500 \n");
        }
        break;
        
        default:
        printf("Please enter number between 1-3 \n");

    }

    printf("Thank You for shopping with us\n");
    printf("Have a nice day!! :) \n    ");
    printf("Keep visiting\n           ");
    return 0;
}