#include <iostream.h>
#include <conio.h>
class salt
{
 int anion,cation,group;
 public:
 void prlexm();
 int testanion();
 int testcation();

 void intro()
 {
  clrscr();
  cout<<"\n SALT ANALYSIS**";
  cout<<"\n\n This Is A Program Created By Mr. HARSH PALLAV Which Is Used To Do The Salt Analysis In A Computerised Way...";
  getch();
 
}

 void result()
 {
  clrscr();
  cout<<"\n****SALT ANALYSIS**";
  cout<<"\n\n $$$$SOLE RESULT::";
  cout<<"\n\n\tThe SALT contains::";
  if(anion==1)
  cout<<"\n\t ANION ::CARBONATE";
  if(anion==2)
  cout<<"\n\t ANION ::SULPHIDE";
  if(anion==3)
  cout<<"\n\t ANION ::ACETATE";
  if(anion==4)
  cout<<"\n\t ANION ::CHLORIDE";
  if(anion==5)
  cout<<"\n\t ANION ::BROMIDE";
  if(anion==6)
  cout<<"\n\t ANION ::IODIDE";
  if(anion==7)
  cout<<"\n\t ANION ::NITRATE";
  if(anion==8)
  cout<<"\n\t ANION ::SULPHATE";
  if(cation==1)
  cout<<"\n\t CATION ::AMMONIUM";
  if(cation==2)
  cout<<"\n\t CATION ::LEAD";
  if(cation==3)
  cout<<"\n\t CATION ::COPPER";
  if(cation==4)
  cout<<"\n\t CATION ::ALUMINIUM";
  if(cation==5)
  cout<<"\n\t CATION ::ZINC";
  if(cation==6)
  cout<<"\n\t CATION ::MANGANESE";
  if(cation==7)
  cout<<"\n\t CATION ::BARIUM";
  if(cation==8)
  cout<<"\n\t CATION ::CALCIUM";
  if(cation==9)
  cout<<"\n\t CATION ::MAGNESIUM";
  }

 int gr_0()
 {
 int a;
 cout<<"\n Group Identified As ZERO GROUP";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 clrscr();
 cout<<"\n****ANALYSIS OF ZERO GROUP****";
 cout<<"\n\n\t $$AMMONIA CONFIRMATION";
 cout<<"\n\n\nA)Test With Sodium Hydroxide Solution??" ;
 cout<<"\n\n\t 1)Colourless Gas With The Smell Of Ammonia Giving Dense White Fumes With A Glass Rod Dipped In con.HCl";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
  {
  cout<<"\nAMMONIA CONFIRMED";
  cation=1;
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n** Click any to continue!!!";
  getch();
  }
 if(a==2)
  {
  cout<<"\nAMMONIA CONFIRMATION FAILED!!!!!!!";
  getch();
  clrscr();
  cout<<"\n ANALYSIS OF ZERO GROUP";
  cout<<"\n\n $$$$$$$RESULT:: FAILED";
  cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS (CATION IDENTIFICATION )";
  cout<<"\n Press '0' To Exit: ";
  cin>>a;
   if(a==1)
   {
    testcation();
    return(a);
   }
   else
   {
    return(a);
   }
}

clrscr();
cout<<"\n ANALYSIS OF ZERO GROUP";
cout<<"\n\n\t $$AMMONIA CONFIRMATION";
cout<<"\n\n\nB)Test With Nessler's Reagent??" ;
cout<<"\n\n\t 1)Brown precipitate ";
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;

if(a==1)
 {
 cout<<"\n AMMONIA AGAIN CONFIRMED";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 }
}


 int gr_1()
 {
 int a;
 cout<<"\n Group Identified As I GROUP";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 clrscr();
 cout<<"\n****ANALYSIS OF I GROUP****";
 cout<<"\n\n\t $$LEAD IDENTIFICATION";
 cout<<"\n\n\nA)Test With Pottassium Chromate Solution??" ;
 cout<<"\n\n\t 1)Yellow Precipitate";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
 {
  cout<<"\nLEAD IDENTIFIED";
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n** Click any to continue!!!";
  getch();
 }
 if(a==2)
 {
  cout<<"\nLEAD CONFIRMATION FAILED!!!!!!!";
  getch();
  clrscr();
  cout<<"\n ANALYSIS OF I GROUP";
  cout<<"\n\n $$$$$$$RESULT:: FAILED";
  cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS (CATION IDENTIFICATION )";
  cout<<"\n Press '0' To Exit: ";
  cin>>a;
   if(a==1)
   {
   testcation();
   return(a);
   }
  else
  {
  return(a);
  }
  }
 clrscr();
 cout<<"\n ANALYSIS OF I GROUP";
 cout<<"\n\n\t $$LEAD CONFIRMATION";
 cout<<"\n\n\nB)Test With Pottassium Iodine Solution??" ;
 cout<<"\n\n\t 1)Yellow Precipitate Dissolves On Boiling With Water And Reappear As Golden Sprangles On Cooling ";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
  if(a==1)
  {
   cout<<"\n LEAD CONFIRMED";
   cation=2 ;
   cout<<"\n\n\n--------------------------------------------------------------------------------";
   cout<<"\n\n**Click any to continue!!!";
   getch();
  }
}


 int gr_2()
 {
 int a;
 cout<<"\n Group Identified As II GROUP";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n** Click any to continue!!!";
 getch();
 clrscr();
 cout<<"\n ANALYSIS OF II GROUP";
 cout<<"\n\n\t $$COPPER IDENTIFICATION";
 cout<<"\n\n\nA)Test With NH4OH Solution??" ;
 cout<<"\n\n\t 1)Pale Blue Precipitate Dissolves In Excess NH4OH";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;

 if(a==1)
 {
  cout<<"\nCOPPER IDENTIFIED";
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n**Click any to continue!!!";
  getch();
 }
 if(a==2)
 {
 cout<<"\nCOPPER IDENTIFICATION FAILED!!!!!!!";
 getch();
 clrscr();
 cout<<"\n****ANALYSIS OF II GROUP****";
 cout<<"\n\n $$$$$$$RESULT:: FAILED";
 cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS (CATION IDENTIFICATION )";
 cout<<"\n Press '0' To Exit: ";
 cin>>a;
  if(a==1)
  {
   testcation();
   return(a);
  }
  else
  {
  return(a);
  }
 }

 clrscr();
 cout<<"\n****ANALYSIS OF II GROUP****";
 cout<<"\n\n\t $$COPPER CONFIRMATION";
 cout<<"\n\n\nB)Test With Pottassium Ferro Cynide??" ;
 cout<<"\n\n\t 1)Chocalate Colour Precipitate ";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
 {
  cout<<"\n COPPER CONFIRMED";
  cation=3 ;
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n** Click any to continue!!!";
  getch();
 }
}

int gr_3()

 {
 int a;
 cout<<"\n Group Identified As III GROUP";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 clrscr();
 cout<<"\n****ANALYSIS OF III GROUP****";
 cout<<"\n\n\t $$ALUMINIUM IDENTIFICATION";
 cout<<"\n\n\nA)Test With NaOH Solution??" ;
 cout<<"\n\n\t 1)White Precipitate Dissolves In Excess Of NaOh";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
 {
  cout<<"\nALUMINIUM IDENTIFIED";
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n** Click any to continue!!!";
  getch();
 }
 if(a==2)
 {
 cout<<"\nALUMINIUM IDENTIFICATION FAILED!!!!!!!";
 getch();
 clrscr();
 cout<<"\n ANALYSIS OF III GROUP";
 cout<<"\n\n $$$$$$$RESULT:: FAILED";
 cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS (CATION IDENTIFICATION )";
 cout<<"\n Press '0' To Exit: ";
 cin>>a;
  if(a==1)
  {
   testcation();
   return(a);
  }
  else
  {
  return(a);
  }
 }

 clrscr();
 cout<<"\n ANALYSIS OF III GROUP";
 cout<<"\n\n\t $$ALUMINIUM CONFIRMATION";
 cout<<"\n\n\nB)Ash Test??" ;
 cout<<"\n\n\t 1)A Blue Finted Ash";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
 {
  cout<<"\n ALUMINIUM CONFIRMED";
  cation=4;
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n**Click any to continue!!!";
  getch();
 }
}


int gr_4()
{
int a;
cout<<"\n Group Identified As IV GROUP";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n** Click any to continue!!!";
getch();
clrscr();
cout<<"\n ANALYSIS OF IV GROUP";
cout<<"\n\n\t $$ZINC AND MANGANESE IDENTIFICATION";
cout<<"\n\n\nA)Test With NaOH Solution??" ;
cout<<"\n\n\t 1)White Precipitate Soluble In Excess Of NaOH";
cout<<"\n\n\t 2)A White Precipitate Turning Brown Is Formed";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1)
{
 cout<<"\nZINC IDENTIFIED";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 clrscr();
 cout<<"\n****ANALYSIS OF IV GROUP****";
 cout<<"\n\n\t $$ZINC CONFIRMATION";
 cout<<"\n\n\nB)Ash Test??" ;
 cout<<"\n\n\t 1)A Green Finted Ash";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
 {
  cout<<"\n ZINC CONFIRMED";
  cation=5;
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n** Click any to continue!!!";
  getch();
 }
 if(a==2)
 {
 cout<<"\nZINC CONFIRMATION FAILED!!!!!!!";
 getch();
 clrscr();
 cout<<"\n ANALYSIS OF IV GROUP";
 cout<<"\n\n $$$$$$$RESULT:: FAILED";
 cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS (CATION IDENTIFICATION )";
 cout<<"\n Press '0' To Exit: ";
 cin>>a;
  if(a==1)
  {
  testcation();
  return(a);
  }
  else
  {
  return(a);
  }
 }
}
 if(a==2)
 {
 cout<<"\nZINC IDENTIFICATION FAILED!!!!!!!";
 cout<<"\nMANGANESE IDENTIFIED!!";
 getch();
 clrscr();
 cout<<"\n ANALYSIS OF IV GROUP";
 cout<<"\n\n\t $$MANGANESE CONFIRMATION";
 cout<<"\n\n\nA)Permanganic Acid Test " ;
 cout<<"\n\n\t 1)The Clear Liquid Gets A Violet Colour";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
  if(a==1)
  {
  cout<<"\nMANGANESE CONFIRMED";
  cation=6;
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n**Click any to continue!!!";
  getch();
  }
  if(a==2)
  {
  cout<<"\nMANGANESE CONFIRMATION FAILED!!!!!!!";
  getch();
  clrscr();
  cout<<"\n****ANALYSIS OF IV GROUP****";
  cout<<"\n\n $$$$$$$RESULT:: FAILED";
  cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS (CATION IDENTIFICATION )";
  cout<<"\n Press '0' To Exit: ";
  cin>>a;
   if(a==1)
   {
   testcation();
   return(a);
   }
   else
   {
   return(a);
   }
  }
 }
}

int gr_5()
{
int a;
cout<<"\n Group Identified As V GROUP";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n** Click any to continue!!!";
getch();
clrscr();
cout<<"\n ANALYSIS OF V GROUP";
cout<<"\n\n\t $$BARIUM IDENTIFICATION";
cout<<"\n\n\nA)Test With Pottassium Chromate Solution??" ;
cout<<"\n\n\t 1)Yellow Precipitate";
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1)
{
 cout<<"\nBARIUM IDENTIFIED";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 clrscr();
 cout<<"\n****ANALYSIS OF III GROUP****";
 cout<<"\n\n\t $BARIUM CONFIRMATION";
 cout<<"\n\n\nB)Flame Test??" ;
 cout<<"\n\n\t 1)Green Colour";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
 {
  cout<<"\n BARIUM CONFIRMED";
  cation=7;
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n** Click any to continue!!!";
  getch();
  }
 }
 if(a==2)
 {
 cout<<"\nBARIUM IDENTIFICATION FAILED!!!!!!!";
 getch();
 clrscr();
 cout<<"\n ANALYSIS OF V GROUP";
 cout<<"\n\n\t $$CALCIUM IDENTIFICATION";
 cout<<"\n\n\nA)Test With Ammonium Oralate??" ;
 cout<<"\n\n\t 1)White Precipitate";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
  if(a==1)
  {
   cout<<"\nCALCIUM IDENTIFIED";
   cout<<"\n\n\n--------------------------------------------------------------------------------";
   cout<<"\n\n**Click any to continue!!!";
   getch();
   clrscr();
   cout<<"\n****ANALYSIS OF V GROUP****";
   cout<<"\n\n\t $$CALCIUM CONFIRMATION";
   cout<<"\n\n\nB)Flame Test??" ;
   cout<<"\n\n\t 1)A Brick Red Colour";
   cout<<"\n\n\t 2)No charecteristic observation";
   cout<<"\n\n\n\n Click The Appropriate No: ";
   cin>>a;
    if(a==1)
    {
     cout<<"\n CALCIUM CONFIRMED";
     cation=8;
     cout<<"\n\n\n--------------------------------------------------------------------------------";
     cout<<"\n\n**Click any to continue!!!";
     getch();
    }
   }
  }
 }


int gr_6()
{
int a;
cout<<"\n Group Identified As VI GROUP";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!";
getch();
clrscr();
cout<<"\n****ANALYSIS OF VI GROUP****";
cout<<"\n\n\t $$MAGNESIUM IDENTIFICATION";
cout<<"\n\n\nA)Test With Magneson Reagent??" ;
cout<<"\n\n\t 1)Blue Precipitate";
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
 if(a==1)
 {
 cout<<"\nMAGNESIUM IDENTIFIED";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 }
 if(a==2)
 {
 cout<<"\nMAGNESIUM IDENTIFICATION FAILED!!!!!!!";
 getch();
 clrscr();
 cout<<"\n****ANALYSIS OF VI GROUP****";
 cout<<"\n\n $$$$$$$RESULT:: FAILED";
 cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS (CATION IDENTIFICATION )";
 cout<<"\n Press '0' To Exit: ";
 cin>>a;
  if(a==1)
  {
  testcation();
  return(a);
  }
  else
  {
  return(a);
  }
 }
 clrscr();
 cout<<"\n****ANALYSIS OF III GROUP****";
 cout<<"\n\n\t $$MAGNESIUM CONFIRMATION";
 cout<<"\n\n\nB)Ash Test??" ;
 cout<<"\n\n\t 1)A Blue Finted Ash";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
 if(a==1)
 {
 cout<<"\n MAGNESIUM CONFIRMED";
 cation=9;
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 }
}

int carbonate()
{
 int a;
 clrscr();
 cout<<"\n ANION IDENTIFIED";
 cout<<"\n\n$$$RESULT$$: CARBONATE IDENTIFIED";
 cout<<"\n\n\n\n\n\t Now we have identified the salt as CARBONATE";
 cout<<"\n and thus now we will move on to the confirmation of";
 cout<<"\n 'CARBONATE' ";
 cout<<"\n\n\n--------------------------------------------------------------------------------";
 cout<<"\n\n**Click any to continue!!!";
 getch();
 clrscr();
 cout<<"\n****ANION CONFIRMATION****";
 cout<<"\n\n\t $$CARBONATE CONFIRMATION";
 cout<<"\n\n\nA)Test with barium chloride solution??" ;
 cout<<"\n\n\t 1)White precipitate soluble in excess of dil.HCl";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
  if(a==1)
  {
   cout<<"\nCARBONATE CONFIRMED";
   cout<<"\n\n\n--------------------------------------------------------------------------------";
   cout<<"\n\n**Click any to continue!!!";
   getch();
  }
  if(a==2)
  {
   cout<<"\nCARBONATE CONFIRMATION FAILED!!!!!!!";
   getch();
   clrscr();
   cout<<"\n****ANION CONFIRMATION****";
   cout<<"\n\n $$$$$$$RESULT:: FAILED";
   cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination";
   cout<<"\n Press '0' To Exit: ";
   cin>>a;
    if(a==1)
    {
     testanion();
     return(a);
     }
    else
    {
     return(a);
    }
   }
 clrscr();
 cout<<"\n****ANION CONFIRMATION****";
 cout<<"\n\n\t $$CARBONATE CONFIRMATION";
 cout<<"\n\n\nB)Test with MgSO4 solution??" ;
 cout<<"\n\n\t 1)White precipitate ";
 cout<<"\n\n\t 2)No charecteristic observation";
 cout<<"\n\n\n\n Click The Appropriate No: ";
 cin>>a;
  if(a==1)
  {
  cout<<"\n CARBONATE AGAIN CONFIRMED";
  cout<<"\n\n\n--------------------------------------------------------------------------------";
  cout<<"\n\n**Click any to continue!!!";
  getch(); //The Position**
  clrscr();
  cout<<" SALT ANALYSIS**";
  cout<<"\n\n\n STEP:: 1";
cout<<" PRELIMINARY EXAMINATION :::: DoNe!!!"; 
cout<<"\n\n\n STEP:: 2"; cout<<" TEST FOR THE IDENTIFICATION AND CONFIRMATION OF ANION:::: DoNe!!!"; 
cout<<"\n\n\n\t\t The Anion Is Identified And Confirmed As 'CARBONATE' "; 
getch();





} 




if(a==2) 
{ 
    cout<<"\nCARBONATE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination";
cout<<"\n Press '0' To Exit: "; 
cin>>a; 
if(a==1) 
{ testanion();
return(a);




} 
else {
return(a);




}




} }




int sulphide()




{
int a;
clrscr(); 
cout<<"\n ANION IDENTIFIED"; 
cout<<"\n\n$$$RESULT$$: SULPHIDE IDENTIFIED"; 
cout<<"\n\n\n\n\n\t Now we have identified the salt as Sulphide"; 
cout<<"\n and thus now we will move on to the confirmation of"; 
cout<<"\n 'SULPHIDE' "; 
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$SULPHIDE CONFIRMATION"; 
cout<<"\n\n\nA)Test with lead acetate solution??" ; 
cout<<"\n\n\t 1)Black precipitate "; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a; if(a==1) { cout<<"\nSULPHIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
    
} 




if(a==2) 
{ 
    cout<<"\nSULPHIDE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    if(a==1) 
    { 
        testanion();
return(a);




} 
else {
return(a);
} } 
clrscr();




cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$SULPHIDE CONFIRMATION"; 
cout<<"\n\n\nB)Test with AgNO3 solution??" ; 
cout<<"\n\n\t 1)Black Precipitate "; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1) 
{ 
    cout<<"\nSULPHIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
    
} 




if(a==2) 
{ 
    cout<<"\nSULPHIDE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    if(a==1) 
    { testanion();
return(a);
} 
else {
return(a);
}




} }




int acetate() 
{ 
    int a;
clrscr(); 
cout<<"\n ANION IDENTIFIED"; 
cout<<"\n\n$$$RESULT$$: ACETATE IDENTIFIED"; 
cout<<"\n\n\n\n\n\t Now we have identified the salt as ACETATE"; 
cout<<"\n and thus now we will move on to the confirmation of"; 
cout<<"\n 'ACETATE' "; 
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$ACETATE CONFIRMATION"; 
cout<<"\n\n\nA)Test with Ferric chloride solution??" ; 
cout<<"\n\n\t 1)Blood Red Colour"; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1) 
{ 
    cout<<"\nACETATE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
    
} 
if(a==2) 
{ 
    cout<<"\nACETATE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    if(a==1) 
    { testanion();
return(a);
} 
else {
return(a);
} } clrscr();




cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$ACETATE CONFIRMATION"; 
cout<<"\n\n\nB)Ethyl Alcohol??" ; 
cout<<"\n\n\t 1)A Fruity Smell "; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1) 
{ 
    cout<<"\nACETATE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
    
} 




if(a==2) 
{ 
    cout<<"\nACETATE CONFIRMATION FAILED!!!!!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
cout<<"\n Press '0' To Exit: "; 
cin>>a; 
if(a==1) 
{ 
    testanion();
return(a);




} 
else 
{
return(a);
}
} }




int chloride() 
{ 
    int a;
clrscr(); 
cout<<"\n ANION IDENTIFIED"; 
cout<<"\n\n$$$RESULT$$: CHLORIDE IDENTIFIED"; 
cout<<"\n\n\n\n\n\t Now we have identified the salt as CHLORIDE"; 
cout<<"\n and thus now we will move on to the confirmation of"; 
cout<<"\n 'CHLORIDE' "; 
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$CHLORIDE CONFIRMATION"; 
cout<<"\n\n\nA)Test with con.H2SO4 and MnO2??" ; 
cout<<"\n\n\t 1)Greenish yellow gas with pungent smell "; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1)
{ 
    cout<<"\nCHLORIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
    
} 
if(a==2) 
{ 
    cout<<"\nCHLORIDE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    if(a==1) 
    { 
        testanion();
return(a);
}
else
{
return(a);
} } clrscr();




cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$CHLORIDE CONFIRMATION"; 
cout<<"\n\n\nB)Test with AgNO3 solution??" ; 
cout<<"\n\n\t 1)White curdy precipitate soluble in excess of NH4OH "; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1) 
{ 
    cout<<"\nCHLORIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
    
} 
if(a==2) 
{ 
    cout<<"\nCHLORIDE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    if(a==1) 
    { testanion();
return(a);




} 
else
{
return(a);
}




} }




int bromide()
{ 
    int a;
    clrscr(); 
    cout<<"\n ANION IDENTIFIED"; 
    cout<<"\n\n$$$RESULT$$: BROMIDE IDENTIFIED"; 
    cout<<"\n\n\n\n\n\t Now we have identified the salt as BROMIDE"; 
    cout<<"\n and thus now we will move on to the confirmation of"; 
    cout<<"\n 'BROMIDE' "; 
    cout<<"\n\n\n--------------------------------------------------------------------------------"; 
    cout<<"\n\n**Click any to continue!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n\t $$BROMIDE CONFIRMATION"; 
    cout<<"\n\n\nA)Test with con.H2SO4 and MnO2??" ; 
    cout<<"\n\n\t 1)Reddish brown gas"; 
    cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1) 
{ 
    cout<<"\nBROMIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
    
} 
if(a==2) 
{ 
    cout<<"\nBROMIDE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: ";
    cin>>a; 
    
    if(a==1) 
    { testanion();
return(a);
        
    } 
    else {
return(a);




} } clrscr();




cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$BROMIDE CONFIRMATION"; 
cout<<"\n\n\nB)Test with AgNO3 solution??" ; 
cout<<"\n\n\t 1)Pale yellow precipitate"; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1) 
{ 
    cout<<"\nBROMIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
    
} 




if(a==2)
{ 
    cout<<"\nBROMIDE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****";
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    
    if(a==1) 
    { testanion();
return(a);




} 
else {
return(a);




}




} }




int iodide()
{
int a;
clrscr(); 
cout<<"\n ANION IDENTIFIED"; 
cout<<"\n\n$$$RESULT$$: IODIDE IDENTIFIED"; 
cout<<"\n\n\n\n\n\t Now we have identified the salt as IODIDE"; 
cout<<"\n and thus now we will move on to the confirmation of"; 
cout<<"\n 'IODIDE' "; 
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$IODIDE CONFIRMATION"; 
cout<<"\n\n\nA)Test with con.H2SO4 and MnO2??" ; 
cout<<"\n\n\t 1)Violet Vapours"; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;




if(a==1) 
{ 
    cout<<"\nIODIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";




cout<<"\n\n**Click any to continue!!!";
getch(); 
    
} 
if(a==2)
{ 
    cout<<"\nIODIDE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr();
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    
    if(a==1)
    { testanion();
return(a);
}
else {
return(a);




} } clrscr();





cout<<"\n****ANION CONFIRMATION****";
cout<<"\n\n\t $$IODIDE CONFIRMATION";
cout<<"\n\n\nB)Test with AgNO3 solution??" ;
cout<<"\n\n\t 1)Yellow precipitate insoluble in NH4OH";
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";




cin>>a;




if(a==1)
{ cout<<"\nIODIDE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!";

}
if(a==2)
{
    cout<<"\nIODIDE CONFIRMATION FAILED!!!!!!!";
    getch();
    clrscr();
    cout<<"\n****ANION CONFIRMATION****";
    cout<<"\n\n $$$$$$$RESULT:: FAILED";
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination";
    cout<<"\n Press '0' To Exit: ";
    cin>>a;
    if(a==1)
    { testanion();
return(a);




}




else {
return(a);




}




} }




int nitrate()




{




int a;
clrscr(); 
cout<<"\n ANION IDENTIFIED"; 
cout<<"\n\n$$$RESULT$$: NITRATE IDENTIFIED"; 
cout<<"\n\n\n\n\n\t Now we have identified the salt as NITRATE"; 
cout<<"\n and thus now we will move on to the confirmation of"; 
cout<<"\n 'NITRATE' "; 
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$NITRATE CONFIRMATION"; 
cout<<"\n\n\nA)Brown Ring Test??" ; 
cout<<"\n\n\t 1)Brown Ring is formed"; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;




if(a==1) 
{ 
    cout<<"\nNITRATE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
    
} 




if(a==2) 




{ 
    cout<<"\nNITRATE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    if(a==1) 
    { testanion();
return(a);
} 
else {
return(a);




} } clrscr();




cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$NITRATE CONFIRMATION";
cout<<"\n\n\nB)Reduction Test??" ; 
cout<<"\n\n\t 1)A Colourless Gas With the smell of ammonia"; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;
if(a==1) 
{ cout<<"\nNITRATE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
    
} 
if(a==2) 
{
cout<<"\nNITRATE CONFIRMATION FAILED!!!!!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
cout<<"\n Press '0' To Exit: "; 
cin>>a; 




if(a==1) 
{ testanion();
return(a);




} 
else {
return(a);




}




} }




int sulphate()




{
int a;
clrscr(); 
cout<<"\n ANION IDENTIFIED"; 
cout<<"\n\n$$$RESULT$$: SULPHATE IDENTIFIED"; 
cout<<"\n\n\n\n\n\t Now we have identified the salt as SULPHATE";
cout<<"\n and thus now we will move on to the confirmation of"; 
cout<<"\n 'SULPHATE' "; 
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<"\n****ANION CONFIRMATION****";
cout<<"\n\n\t $$SULPHATE CONFIRMATION"; 
cout<<"\n\n\nA)Test With Lead Scetate Solution??" ; 
cout<<"\n\n\t 1)White Precipitate"; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;




if(a==1) 
{ 
    cout<<"\nSULPHATE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
    
} 
if(a==2) 
{ 
    cout<<"\nSULPHATE CONFIRMATION FAILED!!!!!!!"; 
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination";
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    
    if(a==1) 
    { testanion();
return(a);
} 
else {
return(a);




} } clrscr();




cout<<"\n****ANION CONFIRMATION****"; 
cout<<"\n\n\t $$SULPHATE CONFIRMATION";
cout<<"\n\n\nB)The precipitate obtained is heated with ammonium acetate solution??" ; 
cout<<"\n\n\t 1)Precipitate Gets Dissolved"; 
cout<<"\n\n\t 2)No charecteristic observation";
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a;




if(a==1) 
{ 
    cout<<"\nNITRATE CONFIRMED";
cout<<"\n\n\n--------------------------------------------------------------------------------";




cout<<"\n\n**Click any to continue!!!"; 
    
} 




if(a==2) 
{ 
    cout<<"\nNITRATE CONFIRMATION FAILED!!!!!!!";
    getch(); 
    clrscr(); 
    cout<<"\n****ANION CONFIRMATION****"; 
    cout<<"\n\n $$$$$$$RESULT:: FAILED"; 
    cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
    cout<<"\n Press '0' To Exit: "; 
    cin>>a; 
    
    if(a==1) 
    { testanion();




return(a);
} 
else
{
return(a);




}
} } };




void salt :: prlexm() 
{ 
    clrscr(); 
    int a,b; 
    cout<<" \n PRELIMINARY EXAMINATION"; 
    cout<<"\n\nA) Colour AND Appearance?"<<"\n\n\t1)Blue, Bluishgreen or Green clour"; 
    cout<<"\n\n\t2)Light pink colour"; 
    cout<<"\n\n\t3)Clourless"; 
    cout<<"\n\n\n\n Click The Appropriate No: "; 
    cin>>a; 
    if(a==1) 
    { 
        cout<<"\n\n Result:: Copper salt may be present"; 
        
    } 
    else if(a==2) 
    { 
        cout<<"\n\n Result:: Manganese salt may be present"; 
        
    } 
    else if(a==3) 
    { cout<<"\n\n Result:: Abscence of Copper And Manganese"; 
        
    } 
    cout<<"\n\n\n\n\n_"; 
    cout<<"\n\n**Click any to continue!!!"; 
    getch(); 
    clrscr(); 
    cout<<" \n****PRELIMINARY EXAMINATION****"; 
    cout<<"\n\nB) Flame Test?"<<"\n\n\t1)Blue or Bluishgreen flame"; 
    cout<<"\n\n\t2)Light Green flame"; 
    cout<<"\n\n\t3)Brick red colour"; 
    cout<<"\n\n\t4)No Observation"; 
    cout<<"\n\n\n\n Click The Appropriate No: "; 
    cin>>b; 
    if(b==1) 
    { 
        cout<<"\n Result:: Copper salt may be present"; 
        
    } 
    
    else if(b==2) 
    { 
        cout<<"\n Result:: Barium salt may be present";
        
        
    } 
    
    else if(b==3) 
    { 
        cout<<"\n Result:: Calcium salt may be present"; 
        
    } 
    
    else if(b==4) 
    { 
        cout<<"\n Result:: No Observation"; 
        
    } 
    cout<<"\n\n\n--------------------------------------------------------------------------------"; 
    cout<<"\n\n** Click any to continue!!!"; 
    getch(); 
    clrscr(); 
    cout<<" \n PRELIMINARY EXAMINATION" ; 
    cout<<"\n\n $$$$$$$SOLE RESULT$$$$$$$$" ; 
    cout<<"\n\nA) Colour AND Appearance TEST?";




if(a==1) 
{ 
    cout<<"\n Result:: Copper salt may be present"; 
    
} 
else if(a==2) 
{ 
    cout<<"\n Result:: Manganese salt may be present"; 
    
} 
else if(a==3) 
{ 
    cout<<"\n Result:: Abscence of Copper And Manganese"; 
    
} 
cout<<"\n\nA) Flame TEST?"; 




if(b==1)




{ 
    cout<<"\n Result:: Copper salt may be present"; 
    
} 
else if(b==2) 
{ 
    cout<<"\n Result:: Barium salt may be present"; 
    
} 
else if(b==3) 
{ 
    cout<<"\n Result:: Calcium salt may be present"; 
    
} 
else if(b==4) 
{ 
    cout<<"\n Result:: No Observation"; }




getch();
} 




int salt :: testanion() 




{
    int a;
clrscr(); 
cout<<" \n ANION EXAMINATION**"; 
cout<<"\n\nA) Test with dil.HCl ";
cout<<"\n\n\t1)Brisk Effervescence";
cout<<"\n\n\t2)Colourless gas with the smell of rotten eggs";
cout<<"\n\n\t3)No charecteristic observation"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 
if(a==1) 
{
anion=1; 
carbonate(); 
return(a);
} 
else if(a==2) 
{ 
    anion=2; sulphide(); return(a); 
    
} 
else if(a==3) 
{
cout<<"\n Result:: Abscence of carbonate and sulphide";




}
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!"; 
getch(); 
clrscr();
cout<<" \n ANION EXAMINATION**"; 
cout<<"\n\nA) Test with dil.H2SO4 ";
cout<<"\n\n\t1)Smell of Acetate";
cout<<"\n\n\t2)No charecteristic smell"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 




if(a==1) 




{
anion=3; 
acetate(); 
return(a);




} 




else if(a==2) 
{




cout<<"\n Result:: Abscence of acetate";




} 




cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!"; 
getch(); clrscr(); cout<<" \n ANION EXAMINATION**"; 
cout<<"\n\nA) Test with con.H2SO4 ";
cout<<"\n\n\t1)A colourless gas giving dense white fumes with a glass rod dipped in NH4OH";
cout<<"\n\n\t2)Reddish brown vapours turning the solution red"; 
cout<<"\n\n\t3)Violet Vapours";
cout<<"\n\n\t4)Brown Fumes";
cout<<"\n\n\t5)No charecteristic observation"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 




if(a==1) 
{
anion=4; 
chloride(); 
return(a);
} 




if(a==2) 
{
anion=5; 
bromide(); 
return(a);
}




if(a==3)
{
anion=6; 
iodide(); 
return(a);
}




if(a==4)
{
cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n** Click any to continue!!!"; 
getch(); 
clrscr();
cout<<" \n ANION EXAMINATION**";
cout<<"\nIt Has Been Identified That The Anion Is Nitrate This Is For Again";
cout<<"\n\nA) Test with con.H2SO4 and paper ball "; 
cout<<"\n\n\t1)Brown Fumes"; 
cout<<"\n\n\t2)No charecteristic observation"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 




if(a==1)




{




anion=7; 
nitrate(); 
return(a);




} } 




if(a==5) 
{
    cout<<"\n\n--------------------------------------------------------------------------------";




cout<<"\n Result:: Abscence of chloride bromide and nitrate";
    
} 
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<" \n****ANION EXAMINATION**"; 
cout<<"\n\nA) Test with Barium Chloride solution "; 
cout<<"\n\n\t1)White precipitate insoluble in dil.HCl";
cout<<"\n\n\t2)No charecteristic precipitate"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 




if(a==1) 
{
anion=8; 
sulphate(); 
return(a);
} 




if(a==2) 
{
clrscr(); 
cout<<" \n ANION EXAMINATION**"; 
cout<<"\n\n $$$$$$$$FAILED$$$$$$$$$$" ; 
cout<<"\n\n There are no further anion tests!!!!!!"; 
cout<<"\n\n\n\n\n Press '1' To Restart Anion Examination"; 
cout<<"\n Press '0' To Exit"; 
cin>>a; 
if(a==1) 
{ 
    testanion();
return(a);
} 
else {
return(a);
}




}




}




int salt :: testcation()




{




int a;
clrscr();
cout<<" \n\n SALT ANALYSIS**"; 
cout<<"\n\n\n STEP:: 1"; 
cout<<" PRELIMINARY EXAMINATION :::: DoNe!!!"; 
cout<<"\n\n\n STEP:: 2"; 
cout<<" TEST FOR THE IDENTIFICATION AND CONFIRMATION OF ANION:::: DoNe!!!"; 
cout<<"\n\n\n STEP:: 3"; 
cout<<" ANALYSIS FOR THE IDENTIFICATION AND CONFIRMATION OF CATION";
cout<<"\n\n\n\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n** Click any to continue!!!"; 
getch(); 
clrscr(); 
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**"; 
cout<<"\n\nA) Test With Sodium Carbonate Solution";
cout<<"\n\n\t1)No Precipitate";
cout<<"\n\n\t2)A Precipitate"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 
if(a==1) 
{
group=0; 
gr_0(); 
return(a);
} 
else if(a==2) 
{
cout<<"\n Result:: Abscence of ZERO Group";
} 
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!"; 
getch(); 
clrscr();
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**"; 
cout<<"\n\nA) Test With dil.HCl";
cout<<"\n\n\t1)White Precipitate";
cout<<"\n\n\t2)No Precipitate"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 




if(a==1) 
{
group=1;
gr_1(); 
return(a);
} 




else if(a==2) 
{
cout<<"\n Result:: Abscence of I Group";
} 




cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!"; 
getch();
clrscr(); 
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**"; 
cout<<"\n\nA) Test With dil.HCl and H2S"; 
cout<<"\n\n\t1)Black Precipitate"; 
cout<<"\n\n\t2)No Precipitate"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 
if(a==1)
{ 
    group=2; 
    gr_2(); 
    return(a);
}




else if(a==2)





{ 
    cout<<"\n Result:: Abscence of II Group"; 
    
}




cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!";
getch();
clrscr(); 
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**";
cout<<"\n\nA) Test With NH4Cl and NH4OH"; 
cout<<"\n\n\t1)White Gelatinous Precipitate"; 
cout<<"\n\n\t2)No Precipitate"; 
cout<<"\n\n\n\n Click The Appropriate No: ";
cin>>a; 




if(a==1)
{ 
    group=3; 
    gr_3(); 
    return(a); 
    
}




else if(a==2)





{ 
    cout<<"\n Result:: Abscence of III Group"; }
cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!"; 
getch();
clrscr(); 
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**"; 
cout<<"\n\nA) Test With NH4Cl, NH4OH and H2S "; 
cout<<"\n\n\t1)A Precipitate"; 
cout<<"\n\n\t2)No Precipitate"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 




if(a==1)
{ 
   group=4; 
   gr_4(); 
   return(a); 
    
}




else if(a==2)




{ 
    cout<<"\n Result:: Abscence of IV Group"; 
    
}




cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!";
getch();
clrscr(); 
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**"; 
cout<<"\n\nA) Test With NH4Cl, NH4OH and (NH4)2CO3 ";
cout<<"\n\n\t1)White Precipitate"; 
cout<<"\n\n\t2)No Precipitate";
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a;




if(a==1)
{ 
group=5; 
gr_5(); 
return(a); 
}




else if(a==2)





{ 




cout<<"\n Result:: Abscence of V Group"; 




}




cout<<"\n\n\n--------------------------------------------------------------------------------"; 
cout<<"\n\n** Click any to continue!!!"; 
getch();
clrscr(); 
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**"; 
cout<<"\n\nA) Test With NH4Cl, NH4OH and Sodium Hydrogen Phosphate "; 
cout<<"\n\n\t1)White Crystalline Precipitate"; 
cout<<"\n\n\t2)No Precipitate"; 
cout<<"\n\n\n\n Click The Appropriate No: "; 
cin>>a; 




if(a==1)





{ 




group=6; 
gr_6(); 
return(a);
}




if(a==2)
{ 
clrscr(); 
cout<<" \n GROUP ANALYSIS( CATION IDENTIFICATION )**"; 
cout<<"\n\n $$$$$$$$FAILED$$$$$$$$$$" ; 
cout<<"\n\n There are no further GROUP ANALYSIS tests!!!!!!"; 
cout<<"\n\n\n\n\n Press '1' To Restart GROUP ANALYSIS( CATION IDENTIFICATION )"; 
cout<<"\n Press '0' To Exit"; 
cin>>a; 
if(a==1) 




{ 




testcation();
return(a);




} 




else 
{
return(a);
}




}




else if(a==2)
{




cout<<"\n Result:: Abscence of VI Group";




 }




cout<<"\n\n\n--------------------------------------------------------------------------------";
cout<<"\n\n**Click any to continue!!!"; 
getch(); 
}
 
void main() 
{ 
clrscr(); 
salt s; 
s.intro(); 
s.prlexm(); 
s.testanion(); 
s.testcation(); 
s.result();
getch();
}


