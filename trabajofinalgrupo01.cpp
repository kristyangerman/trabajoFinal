# include <conio.h>
#include <iostream.h>
#include <fstream>
main()
{
	int s,r=1;
   char seleccion,repetir;
	while (r==1)
	{
		clrscr();
		textcolor(YELLOW);
		gotoxy(15,1),  cprintf("             PROYECTO FINAL");
      gotoxy(15,3),  cprintf("ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO");
      gotoxy(15,5),  cprintf("        LENGUJAE DE PROGRAMACION");
      gotoxy(15,7),  cprintf("              INTEGRANTES:");
      textcolor(WHITE);
      gotoxy(1,8), cprintf(" CRISTIAN CHAFLA   (691)");
      gotoxy(1,9), cprintf(" SEBASTIAN ARCOS   (685)");
      gotoxy(1,10), cprintf(" PATRICIO GALLEGOS (676)");
      gotoxy(1,12), cprintf("1. GENERAR TABLAS DE VERDAD CON DOS ENTRADAS");
		gotoxy(1,13), cprintf("2. VER TABLAS CON DOS ENTRADAS");
		gotoxy(1,14), cprintf("3. GENERAR Y VER TABLAS CON N ENTRADAS");
		gotoxy(1,15), cprintf("4. Salir ");
		textcolor(GREEN);
		gotoxy(15,18), cprintf("OPERACION A REALIZAR");
		gotoxy(15,20);
      seleccion=getche();
		textcolor(YELLOW);
	   gotoxy(10,23);
		switch(seleccion)
		{
    case '1':
    {
ofstream almacenamiento("C:/Users/Kristyan/LITERAL 1/TABLAS DE VERDAD.txt",ios::app) ;
   almacenamiento<<"OR"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      0 "<< "\n";
     almacenamiento<<"     0      1      1"<< "\n";
     almacenamiento<<"     1      0      1"<< "\n";
     almacenamiento<<"     1      1      1"<< "\n";
     almacenamiento<<"AND"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      0 "<< "\n";
     almacenamiento<<"     0      1      0"<< "\n";
     almacenamiento<<"     1      0      0"<< "\n";
     almacenamiento<<"     1      1      1"<< "\n";
     almacenamiento<<"XOR"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      0 "<< "\n";
     almacenamiento<<"     0      1      1"<< "\n";
     almacenamiento<<"     1      0      1"<< "\n";
     almacenamiento<<"     1      1      0"<< "\n";
     almacenamiento<<"NAND"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      1 "<< "\n";
     almacenamiento<<"     0      1      1"<< "\n";
     almacenamiento<<"     1      0      1"<< "\n";
     almacenamiento<<"     1      1      0"<< "\n";
     almacenamiento<<"NOR"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      1 "<< "\n";
     almacenamiento<<"     0      1      0"<< "\n";
     almacenamiento<<"     1      0      0"<< "\n";
     almacenamiento<<"     1      1      0"<< "\n";
     almacenamiento<<"NOT"<< "\n";
     almacenamiento<<"     A            S"<< "\n"<< "\n";
     almacenamiento<<"     0            1 "<< "\n";
     almacenamiento<<"     0            1"<< "\n";
     almacenamiento<<"     1            0"<< "\n";
     almacenamiento<<"     1            0"<< "\n";
     almacenamiento<<"BUFFER"<< "\n";
     almacenamiento<<"     A            S"<< "\n"<< "\n";
     almacenamiento<<"     0            0 "<< "\n";
     almacenamiento<<"     1            1"<< "\n";
almacenamiento.close();
getch();
}break;
case '2':
 {
int n;
cout<<"INGRESAR EL NUMERO DE LA TABLA REQUERIDA "<< "\n";
cout<<" 1 --------OR "<< "\n";
cout<<" 2 --------AND "<< "\n";
cout<<" 3 --------XOR "<< "\n";
cout<<" 4 --------NAND "<< "\n";
cout<<" 5 --------NOR "<< "\n";
cout<<" 6 --------NOT "<< "\n";
cout<<" 7 --------BUFFER "<< "\n";

cin>>n;
if(n == 1)
   {
     cout<<"OR"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      0 "<< "\n";
     cout<<"     0      1      1"<< "\n";
     cout<<"     1      0      1"<< "\n";
     cout<<"     1      1      1"<< "\n";
   }
else if(n == 2)
   {
     cout<<"AND"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      0 "<< "\n";
     cout<<"     0      1      0"<< "\n";
     cout<<"     1      0      0"<< "\n";
     cout<<"     1      1      1"<< "\n";
      }
      else if(n == 3)
   {
     cout<<"XOR"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      0 "<< "\n";
     cout<<"     0      1      1"<< "\n";
     cout<<"     1      0      1"<< "\n";
     cout<<"     1      1      0"<< "\n";
      }
      else if(n == 4)
   {
     cout<<"NAND"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      1 "<< "\n";
     cout<<"     0      1      1"<< "\n";
     cout<<"     1      0      1"<< "\n";
     cout<<"     1      1      0"<< "\n";
      }
      else if(n == 5)
   {
     cout<<"NOR"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      1 "<< "\n";
     cout<<"     0      1      0"<< "\n";
     cout<<"     1      0      0"<< "\n";
     cout<<"     1      1      0"<< "\n";
      }
           else if(n == 6)
   {
     cout<<"NOT"<< "\n";
     cout<<"     A            S"<< "\n"<< "\n";
     cout<<"     0            1 "<< "\n";
     cout<<"     0            1"<< "\n";
     cout<<"     1            0"<< "\n";
     cout<<"     1            0"<< "\n";
      }
                 else if(n == 7)
   {
     cout<<"BUFFER"<< "\n";
     cout<<"     A            S"<< "\n"<< "\n";
     cout<<"     0            0 "<< "\n";
     cout<<"     1            1"<< "\n";

      }

    getch();
}


         break;
			case '3':
         {
char s;
int n,e;

cout<<" 1 --------OR "<< "\n";
cout<<" 2 --------AND  "<< "\n";
cout<<" 3 --------XOR "<< "\n";
cout<<" 4 --------NAND "<< "\n";
cout<<" 5 --------NOR "<< "\n";
cout<<" 6 --------NOT "<< "\n";
cout<<" 7 --------BUFFER "<< "\n";
cout<<" Seleccionar la tabla de verdad "<< "\n";
cin>>n;
cout<<" INGRESAR EL NUMERO DE VARIABLES "<< "\n";
cin>>e;
if (n==1) {
if(e==2){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/OR2.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==3){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/OR3.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==4){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/OR4.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==5){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/OR5.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 }
 // PARA LA OTRA TABLA
 if (n==2) {
if(e==2){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/AND2.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==3){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/AND3.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==4){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/AND4.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==5){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/AND5.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 }
 //TABLAS DE LA XOR
  if (n==3) {
if(e==2){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/XOR2.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==3){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/XOR3.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==4){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/XOR4.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==5){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/XOR5.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 }
 // TABLA NAND
  if (n==4) {
if(e==2){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NAND2.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==3){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NAND3.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==4){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NAND4.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==5){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NAND5.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 }
 //TABLA NOR
  if (n==5) {
if(e==2){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NOR2.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==3){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NOR3.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==4){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NOR4.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 if(e==5){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NOR5.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 }
 //TABLA NOT
 if(e==6){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/NOT.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
 //TABLA BUFFER
 if(e==7){
ifstream ver ("C:/Users/Kristyan/LITERAL 1/BUFER.txt");
while (!ver.eof())
{
 ver.get(s);
 cout<<s;
 }
 }
getch();
}
break;
         case '4': r=0;break;
			default:
			{
				cprintf("Opcion Invalida");
				getch();
			}
		}
	}
}
