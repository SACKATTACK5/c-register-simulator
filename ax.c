#include<stdio.h>
typedef unsigned char BYTE;
typedef unsigned short WORD;
/****program description****/
/****registers simulator****/
//I used union to put the registers in the same unit
//and the struct for spliting this unit and matching them
union{
	struct{
		WORD ax,bx,cx,dx;
	}word;
	struct{
		BYTE al,ah,bl,bh,cl,ch,dl,dh;
	}byte;
}regs;
int main(){
	regs.byte.ah=0x12;
	regs.byte.al=0x34;
	regs.byte.bh=0x56;
	regs.byte.bl=0x78;
	regs.byte.ch=0x91;
	regs.byte.cl=0x01;
	regs.byte.dh=0x11;
	regs.byte.dl=0x23;
	printf("AX: %hx\n",regs.word.ax);
	printf("BX: %hx\n",regs.word.bx);
	printf("CX: %hx\n",regs.word.cx);
	printf("DX: %hx\n",regs.word.dx);
}
