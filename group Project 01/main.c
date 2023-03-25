#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("               *******************************************************\n");
    printf("               *******************************************************\n");
    printf("               **                                                   **\n");
    printf("               **                   Qualitative                     **\n");
    printf("               **                    Analysis                       **\n");
    printf("               **                       of                          **\n");
    printf("               **                      Ions                         **\n");
    printf("               **                                                   **\n");
    printf("               *******************************************************\n");
    printf("               *******************************************************\n");
    main2();

    return 0;
}

void main2(){
    printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n \n \n");
    printf("1 - Learn\n");
    printf("2 - Quize\n");
    int l_or_q;
    printf("Please Enter the Number What You Want : ");
    scanf("%d", &l_or_q);

    while ((l_or_q !=1)||(l_or_q != 2)){

    // choose learn or Quize
        if (l_or_q == 1){
            // if user choose learn
            learn();


            break;
        }
        else if (l_or_q == 2){
            //if user choose quize

            break;
        }

        else{
                //if user enter invalid number
            printf("Please Enter Valid Number : ");
            scanf("%d",&l_or_q);
        }

    }

}


//if user choose to learn
void learn(){
    printf("1 - Learn anions\n");
    printf("2 - Learn cations\n");
    int len;
    printf("Please Enter Number : ");
    scanf("%d",&len);

    while ((len != 1)||(len != 2)){

        if (len == 1){
            anion();
            break;
        }
        else if (len == 2){
            cation();
            break;
        }
        else{
            printf("Please Enter valid Number : ");
            scanf("%d",&len);
        }
    }
}


//if user choose anions
void anion(){
    printf("1 - Helides\n");
    printf("2 - Sulfites\n");
    printf("3 - Sulfates\n");
    printf("4 - Thiosufates\n");
    printf("5 - Sulfides\n");
    printf("6 - Phosphate\n");
    printf("7 - Chromate & Dichromate\n");

    int anion_var;
    printf("Enter the Number : ");
    scanf("%d", &anion_var);


    while((anion_var != 1)||(anion_var != 2)||(anion_var != 3)||(anion_var != 4)||(anion_var != 5)||(anion_var != 6)||(anion_var != 7)){
        if (anion_var == 1){
                helides();
            break;
        }
        else if (anion_var == 2){
                sulfites();


            break;
        }
        else if (anion_var == 3){
                sulfates();

            break;
        }
        else if (anion_var == 4){
                thiosulfates();

            break;
        }
        else if (anion_var == 5){
                sulfides();

            break;
        }
        else if (anion_var == 6){
                phosphate();

            break;
        }
        else if (anion_var == 7){
                cromate();

            break;
        }
        else{
            printf("Please Enter Valid Number : ");
            scanf("%d",&anion_var);

        }

    }
}

void sulfites(){
    printf("               Sulfites\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");
}
void sulfates(){
    printf("               Sulfates\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");
}
void thiosulfates(){
    printf("               thioSulfites\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");

}
void sulfides(){
    printf("               Sulfides\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");

}
void phosphate(){
    printf("              p phosphate\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");

}
void cromate(){
    printf("               chromate\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");


}
void helides(){
    printf("1 - Chloride\n");
    printf("2 - Bromide\n");
    printf("2 - Iodide\n");
    int hel;
    printf("Please Enter Number : ");
    scanf("%d",&hel);

    while ((hel != 1)||(hel != 2)||(hel != 3)){

        if (hel == 1){
            chloride();
            break;
        }
        else if (hel == 2){
            bromide();
            break;
        }
        else if (hel == 3){
            iodide();
            break;
        }
        else{
            printf("Please Enter valid Number : ");
            scanf("%d",&hel);
        }

    }
}

void chloride(){
    printf("               chloride\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n \n \n \n \n");
    main2();


}
void bromide(){
    printf("               bromite\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");
    main2();

}
void iodide(){
    printf("               iodide\n \n");
    printf("An easy way to find out the presence of ammonium ions in a mixture is by a simple but \n");
    printf("effective test: a few drops of a sodium hydroxide solution are added to the substance \n");
    printf("and warmed. Ammonia gas is produced which can be detected by its characteristic \n");
    printf("smell or by the formation of white fumes of NH4Cl when the cap of a conc. HCl bottle \n");
    printf("is held to the path of the vapour. Ammonia can also be detected by litmus paper \n");
    printf("(red to blue) and by Nessler’ s reagent or paper (pale yellow to brown).\n");
    main2();

}




//if user choose cation
void cation(){
    printf("1 - Group\n");
    printf("2 - Group\n");
    printf("3 - Group\n");
    printf("4 - Group\n");
    printf("5 - Group\n");
    printf("6 - Group\n");


    int cation_var;
    printf("Enter the Number : ");
    scanf("%d", &cation_var);


    while((cation_var != 1)||(cation_var != 2)||(cation_var != 3)||(cation_var != 4)||(cation_var != 5)||(cation_var != 6)){

        if (cation_var == 1){

            break;
        }
        else if (cation_var == 2){

            break;
        }
        else if (cation_var == 3){

            break;
        }
        else if (cation_var == 4){

            break;
        }
        else if (cation_var == 5){

            break;
        }
        else if (cation_var == 6){

            break;
        }

        else{
            printf("Please Enter Valid Number : ");
            scanf("%d",&cation_var);

        }

    }
}
