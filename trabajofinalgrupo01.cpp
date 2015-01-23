# include<conio.h>
main()
{
	int s,r=1;
	while (r==1)
	{
		clrscr();
		textcolor(RED);
		gotoxy(15,8),  cprintf("PROYECTO FINAL");
      gotoxy(15,8),  cprintf("ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO");
      gotoxy(15,8),  cprintf("LENGUJAE DE PROGRAMACION");
      gotoxy(15,8),  cprintf("INTEGRANTES");

		gotoxy(10,10), cprintf("1. GENERAR TABLAS DE VERDAD");
		gotoxy(10,12), cprintf("2. VER TABLAS CON DOS ENTRADAS");
		gotoxy(10,14), cprintf("3. GENERAR Y VER TABLAS CON DOS ENTRADAS");
		gotoxy(10,16), cprintf("4. Mostrar");
		gotoxy(10,18), cprintf("4. Salir ");
		textcolor(GREEN);
		gotoxy(10,20), cprintf("¨OPERACION A REALIZAR");
		gotoxy(28,20);
      seleccion=getche();
		textcolor(YELLOW);
	gotoxy(28,20);
		switch(seleccion)
		{
			case '1': cprintf("");getch();break;
			case '2': cprintf("");getch();break;
			case '3': cprintf("");getch();break;
         case '4': repetir=0;break;
			default:
			{
				cprintf("Opcion Invalida");
				getch();
			}
		}
	}
}
