#include <iostream>

using namespace std;


//mekata adaala exercise eka me file eka thibba folder eka athule text file eakaka dala athi







int main()
{
    //unit count ekata thamai tc dila thiyenne. tc eka integer ganna one.mokada unit gaana puurna sankayaawak nisa(ehema nathi unath awlak na)
   int tc;

   float total,uprice,disc;
   //salli sambandha katyuth waladi dashama sankyaa ena nisa money values walta float dala thiyenne.
   //total- anthimata ganna answer eka.
   //upirce - unit ekaka price eka
   // disc - dena discount eka



// unit pirce eka ona widiyatakta change krannga lesi wenawa eka mulinma veriable ekakata dammahama
   uprice = 1200.0;
   //------------------------------------





   cout << "Enter unit count : \n";
   //tc kiyanne unit count ekata gaththu veriable eka. user gen ganna value eka ekata thamai store kranne..
   cin >> tc;

   //tc eka 0 wata adui nam eka rina gaanak.
   //rina gaanak me program ekata awashaya nathi nisa eka filter kara ganna thamai me if eka dala thiyenne
   if (tc<=0){//1st  if eka
    cout << "please enter positive number and non-zero number!\n";
   }//1st if eke end curly bracket eka


    else{//1st if eke else part eka
        if (tc<5){
                cout << "[buy more than 5 T-shirts and get awesome discounts :D]\n\n";//[optional] me kallanam damme athal ekata .wadak nam na eken.
            disc=0; // unit gaana 5ta adu nam discount eka binduwai..
        }
        else if (tc<10){
            disc=.1;//unit gaana 5-10 th athara nam discount eka 10% i. meke .1 dala thiyenne 10/100 n beduwahama enne e gana nisa
        }
        else if (tc<20){
            disc=.15;// unit gaana 15-20 th athara nam discount eka 15%
        }
        else if (tc<30){
            disc=.2;//unit gaana 20-30 athara nam discount eka 20%
        }
        else{
            disc=.25;// 30 ho ita wadi seratama 25% discount ekak denna kiyala thiyanawane.
        }

    total=(uprice*tc);//total ekata unit pirce eka unit gaanen wadi karala store karanawa mulinma

    total=total -(total*disc);//ita passe total ekatama , total eka discout eken wadi karala
    //ena uththare total eken adu karala store karanawa

    //its passe thiyenne screen eke pennana eka.

            cout << "* total price without discount:\t" << uprice*tc << "/-\n";//[optional]
            cout << "* discount:\t\t" << (disc*100)  << "%  [" << (uprice*disc)*tc<< "/-]\n";//[optional]
            cout << "* total price is :\t" << total  << "/-\n\n-------------------------------------\n";

    }// < 1st if eke else part ekee end curly bracket eka

}
