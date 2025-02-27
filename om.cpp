#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;

void gotoxy (int x, int y){
    COORD POS;
    POS.X =x;
    POS.Y =y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),POS) ;      
}
int main (){
    int i,j,k;

 
gotoxy(5,2);
cout << "*";
gotoxy(6,3);
cout << "*";
gotoxy(8,2);
cout << "*";
gotoxy(7,4);
cout << "*";
gotoxy(8,4);
cout << " *";
gotoxy(9,4);
cout << "*";
gotoxy(10,3);
cout << "*";
gotoxy(11,2);
cout << "*";
gotoxy(6,6);
cout << "*";
gotoxy(7,6);
cout << "*";
gotoxy(8,6);
cout << "*";
gotoxy(9,6);
cout << "*";
gotoxy(10,7);
cout << "*";
gotoxy(10,8);
cout << "*";
gotoxy(10,9);
cout << "*";
gotoxy(10,10);
cout << "*";
gotoxy(8,10);
cout << "*";
gotoxy(9,10);
cout << "*";
gotoxy(10,11);
cout << "*";
gotoxy(11,11);
cout << "*";
gotoxy(5,12);
cout << "*";
gotoxy(10,12);
cout << "*";
gotoxy(12,12);
cout << "*";
gotoxy(5,13);
cout << "*";
gotoxy(10,13);
cout << "*";
gotoxy(12,13);
cout << "*";
gotoxy(5,14);
cout << "*";
gotoxy(10,14);
cout << "*";
gotoxy(12,14);
cout << "*";
gotoxy(5,15);
cout << "*";
gotoxy(6,15);
cout << "*";
gotoxy(7,15);
cout << "*";
gotoxy(8,15);
cout << "*";
gotoxy(9,15);
cout << "*";
gotoxy(12,15);
cout << "*";
gotoxy(13,15);
cout << "*";
gotoxy(14,15);
cout << "*";

        
    
    return 0;
}






//1st
//     for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++)
//             {
//             if (i==1&&j==2|| j==4||j==6)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}
        
// //2nd
//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//         if (i==2&&j==3|| j==4||j==5)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}
        
// //3rd
//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
           
//         if (i==3)
//             continue;
//             else 
//             cout << endl;}
//         cout << endl ;}
        
// //4th

//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//         if (i==4&&j==2|| j==4||j==5 || j==3)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}

// //5th

//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//         if (i==5&&j==6)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}

// //6th

//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//          if (i==6&&j==6)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}
        
// //7th

//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//         if (i==7&&j==6)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}

// //8th 

//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
           
//         if (i==8&&j==1|| j==4||j==5||j==6||j==7)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}
        
// //9th

//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//         if (i==9&&j==1|| j==6||j==8)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}
        
// //10th
// for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//         if (i==10&&j==1|| j==6||j==8)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}
        


//         //11th


//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
            
//         if (i==11&&j==1|| j==5||j==8)
//             cout << "*";
//             else 
//             cout <<" ";}
//         cout << endl ;}
        


//         //12th

//         for (i=1;i<=12;i++){
//         k=1;
//         for (j=1;j<=10;j++){
           
//         if (i==12&&j==2|| j==3||j==4 ||j==9||j==10)
//             cout << "*";
//             else 
//             cout <<" ";
//         }
//         cout << endl ;}
