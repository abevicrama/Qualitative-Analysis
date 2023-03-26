#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    //printf("\n\n ..................\n \n \n");
    printf("\n   1 - Learn\n");
    printf("   2 - Quize\n");
    int l_or_q;
    printf("   Please Enter the Number What You Want : ");
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
            printf("   Please Enter Valid Number : ");
            scanf("%d",&l_or_q);
        }

    }

}


//(1)
void learn(){
    printf("   1 - Learn anions\n");
    printf("   2 - Learn cations\n");
    int len;
    printf("   Please Enter Number : ");
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
            printf(   "   Please Enter valid Number : ");
            scanf("%d",&len);
        }
    }
}


//(1-1)
void anion(){
    printf("   1 - Helides\n");
    printf("   2 - Sulfites\n");
    printf("   3 - Sulfates\n");
    printf("   4 - Thiosufates\n");
    printf("   5 - Sulfides\n");
    printf("   6 - Phosphate\n");
    printf("   7 - Chromate & Dichromate\n");

    int anion_var;
    printf("   Enter the Number : ");
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
            printf("   Please Enter Valid Number : ");
            scanf("%d",&anion_var);

        }

    }
}

//@@@@@@@@@@@@@  start edit the deatils
//(1-1-2)
void sulfites(){
    printf("               Sulfites\n \n");
   char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();
}
//(1-1-3)
void sulfates(){
    printf("               Sulfates\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();
}
//(1-1-4)
void thiosulfates(){
    printf("               thioSulfites\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(1-1-5)
void sulfides(){
    printf("               Sulfides\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(1-1-6)
void phosphate(){
    printf("              p phosphate\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(1-1-7)
void cromate(){
    printf("               chromate\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(1-1-1)
void helides(){
    printf("   1 - Chloride\n");
    printf("   2 - Bromide\n");
    printf("   2 - Iodide\n");
    int hel;
    printf("   Please Enter Number : ");
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
            printf("   Please Enter valid Number : ");
            scanf("%d",&hel);
        }

    }
}
//(1-1-1-1)
void chloride(){
    printf("               chloride\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();


}
//(1-1-1-2)
void bromide(){
    printf("               bromite\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(1-1-1-3)
void iodide(){
    printf("               iodide\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}

//@@@@@@@@@@@@@  end edit the deatils


//(2)
void cation(){
    printf("   1 - Group 01\n");
    printf("   2 - Group 02\n");
    printf("   3 - Group 03\n");
    printf("   4 - Group 04\n");
    printf("   5 - Group 05\n");
    printf("   6 - Group 06\n");


    int cation_var;
    printf("   Enter the Number : ");
    scanf("%d", &cation_var);


    while((cation_var != 1)||(cation_var != 2)||(cation_var != 3)||(cation_var != 4)||(cation_var != 5)||(cation_var != 6)){

        if (cation_var == 1){
                group_1();

            break;
        }
        else if (cation_var == 2){
                group_2();

            break;
        }
        else if (cation_var == 3){
                group_3();

            break;
        }
        else if (cation_var == 4){
                group_4();

            break;
        }
        else if (cation_var == 5){
                group_5();

            break;
        }
        else if (cation_var == 6){
                group_6();

            break;
        }

        else{
            printf("   Please Enter Valid Number : ");
            scanf("%d",&cation_var);

        }

    }
}


//@@@@@@@@@@@@@  start edit the deatils
//(2-1)
void group_1(){
    printf("               group 01\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the\n delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be\n in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(2-2)
void group_2(){
    printf("               group 02\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the\n delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be\n in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(2-3)
void group_3(){
    printf("               group 03\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the\n delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be\n in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(2-4)
void group_4(){
    printf("               group 04\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the\n delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be\n in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(2-5)
void group_5(){
    printf("               group 05\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the\n delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be\n in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//(2-6)
void group_6(){
    printf("               group 06\n \n");
    char str1[] = "he end of the experiment, the test tube containing the sodium hydroxide is removed away from the\n delivery tube, and there after the first tube is removed away from the flame. The arrangement has to be\n in circular motion throughout the heating stage as desired earlier, to avoid overheating the liquid and also to allow the heat to spread evenly to prevent any splashing. Build up of gas pressure inside the first tube is encountered at times due to blockage in the gas delivery tube. Before starting the experiment, therefore, ensure that the path through the tube is clear of any blocks by blowing air through it. Chromyl chloride vapour is toxic and has an unpleasant odour: therefore, contaminating the laboratory with vapour should be avoided. The test is commonly called the chromyl chloride test and it is good test for both chromates/dichromates as well as chlorides (see below) Caution: Always use safety goggles in carrying out this test.";
    int length = sizeof(str1)/sizeof(str1[0]);
    strloop(str1,length);
    main2();

}
//@@@@@@@@@@@@@  end edit the deatils






//string animation
void strloop(char str[],int len_str){

    int i =0;
    for (i;i<len_str;i++ ){
    delay(1);
    char x = str[i];
        printf("%c",x);
    }

}
//time delay for animation
void delay(int number_of_seconds)
{
    //
    int milli_seconds = 4* number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
