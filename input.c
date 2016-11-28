#include <stdio.h>
#include <stdlib.h>
#include "machine_type.h"
#include "input.h"
#include "output.h"

#if 0	 //openbsd/linux
tKeyTab KeyTab[]={
	// key return value (retval),allowed_in_inputfield,seqlen,seq[8],config[16]
        {KEYF1,         0,5,{0x1b,0x5b,0x31,0x31,0x7e,0x00,0x00,0x00},"KEYF1:"},
        {KEYF2,         0,5,{0x1b,0x5b,0x31,0x32,0x7e,0x00,0x00,0x00},"KEYF2:"},
        {KEYF3,         0,5,{0x1b,0x5b,0x31,0x33,0x7e,0x00,0x00,0x00},"KEYF3:"},
        {KEYF4,         0,5,{0x1b,0x5b,0x31,0x34,0x7e,0x00,0x00,0x00},"KEYF4:"},
        {KEYF5,         0,5,{0x1b,0x5b,0x31,0x35,0x7e,0x00,0x00,0x00},"KEYF5:"},
        {KEYF6,         0,5,{0x1b,0x5b,0x31,0x36,0x7e,0x00,0x00,0x00},"KEYF6:"},
        {KEYF7,         0,5,{0x1b,0x5b,0x31,0x37,0x7e,0x00,0x00,0x00},"KEYF7:"},
        {KEYF8,         0,5,{0x1b,0x5b,0x31,0x38,0x7e,0x00,0x00,0x00},"KEYF8:"},
        {KEYF9,         0,5,{0x1b,0x5b,0x32,0x30,0x7e,0x00,0x00,0x00},"KEYF9:"},
        {KEYF10,        0,5,{0x1b,0x5b,0x32,0x31,0x7e,0x00,0x00,0x00},"KEYF10:"},
        {KEYESC,        1,1,{0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYESC:"},
        {KEYBACKSPACE,  1,1,{0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYBACKSPACE:"},
        {KEYDEL,        1,1,{0x7f,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYDEL:"},
        {KEYENTER,      1,1,{0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYENTER:"},
        {KEYTAB,        1,1,{0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYTAB:"},
        {KEYUP,         0,3,{0x1b,0x5b,0x41,0x00,0x00,0x00,0x00,0x00},"KEYUP:"},
        {KEYDOWN,       0,3,{0x1b,0x5b,0x42,0x00,0x00,0x00,0x00,0x00},"KEYDOWN:"},
        {KEYRIGHT,      0,3,{0x1b,0x5b,0x43,0x00,0x00,0x00,0x00,0x00},"KEYRIGHT:"},
        {KEYLEFT,       0,3,{0x1b,0x5b,0x44,0x00,0x00,0x00,0x00,0x00},"KEYLEFT:"},
        {KEYPGUP,       0,4,{0x1b,0x5b,0x35,0x7e,0x00,0x00,0x00,0x00},"KEYPGUP:"},
        {KEYPGDOWN,     0,4,{0x1b,0x5b,0x36,0x7e,0x00,0x00,0x00,0x00},"KEYPGDOWN:"},
        {KEYHOME,       0,4,{0x1b,0x5b,0x37,0x7e,0x00,0x00,0x00,0x00},"KEYHOME:"},
        {KEYEND,        0,4,{0x1b,0x5b,0x38,0x7e,0x00,0x00,0x00,0x00},"KEYEND:"}
};
#endif

#if 1	// mac os x
tKeyTab KeyTab[]={
	// key return value (retval),allowed_in_inputfield,seqlen,seq[8],config[16]
        {KEYF1,         0,2,{0xc2,0xa1,0x00,0x00,0x00,0x00,0x00,0x00},"KEYF1:"},
        {KEYF2,         0,3,{0xe2,0x84,0xa2,0x00,0x00,0x00,0x00,0x00},"KEYF2:"},
        {KEYF3,         0,2,{0xc2,0xa3,0x00,0x00,0x00,0x00,0x00,0x00},"KEYF3:"},
        {KEYF4,         0,2,{0xc2,0xa2,0x00,0x00,0x00,0x00,0x00,0x00},"KEYF4:"},
        {KEYF5,         0,3,{0xe2,0x88,0x9e,0x00,0x00,0x00,0x00,0x00},"KEYF5:"},
        {KEYF6,         0,2,{0xc2,0xa7,0x00,0x00,0x00,0x00,0x00,0x00},"KEYF6:"},
        {KEYF7,         0,2,{0xc2,0xb6,0x00,0x00,0x00,0x00,0x00,0x00},"KEYF7:"},
        {KEYF8,         0,3,{0xe2,0x80,0xa2,0x00,0x00,0x00,0x00,0x00},"KEYF8:"},
        {KEYF9,         0,2,{0xc2,0xaa,0x00,0x00,0x00,0x00,0x00,0x00},"KEYF9:"},
        {KEYF10,        0,2,{0xc2,0xba,0x00,0x00,0x00,0x00,0x00,0x00},"KEYF10:"},
        {KEYESC,        1,1,{0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYESC:"},
        {KEYBACKSPACE,  1,1,{0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYBACKSPACE:"},
        {KEYDEL,        1,0,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYDEL:"},
        {KEYENTER,      1,1,{0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYENTER:"},
        {KEYTAB,        1,1,{0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYTAB:"},
        {KEYUP,         0,3,{0x1b,0x5b,0x41,0x00,0x00,0x00,0x00,0x00},"KEYUP:"},
        {KEYDOWN,       0,3,{0x1b,0x5b,0x42,0x00,0x00,0x00,0x00,0x00},"KEYDOWN:"},
        {KEYRIGHT,      0,3,{0x1b,0x5b,0x43,0x00,0x00,0x00,0x00,0x00},"KEYRIGHT:"},
        {KEYLEFT,       0,3,{0x1b,0x5b,0x44,0x00,0x00,0x00,0x00,0x00},"KEYLEFT:"},
        {KEYPGUP,       0,0,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYPGUP:"},
        {KEYPGDOWN,     0,0,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYPGDOWN:"},
        {KEYHOME,       0,0,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYHOME:"},
        {KEYEND,        0,0,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},"KEYEND:"}
};
#endif

tInt16 getkey(tBool inputfield)		// =1 this is an inputfield. which means that certain allowed_in_inputfields may not be used
{
	tInt16 ch;
	unsigned char seq[8];
	tUInt8 seqlen=0;
	tBool done;
	tInt16 lastch=ERR;
	int i,j;

	done=0;
	while (!done)
	{
		ch=getch();

		if (lastch!=ERR && ch==ERR || seqlen==8) done=1;
		if (ch!=ERR)
		{
			if (seqlen<8) seq[seqlen++]=ch;
			lastch=ch;
		}
	}
	for (i=0;i<NUM_SPECIALKEYS;i++)	// check if it was a special key
	{
		if (KeyTab[i].seqlen==seqlen)
		{
			j=memcmp(KeyTab[i].seq,seq,seqlen);
			if (j==0) lastch=KeyTab[i].retval;	// in an inputfield, certain special keys have to be disabled
			
		}	
	}
	return lastch;
}


tInt16 hexinput(WINDOW* win,tInt16 y,tInt16 x,tUInt64* val,tInt16 len)
{
	tInt8	e=0;
	tInt16 i;
	tInt16 ch;
	tInt16 done=0;
	tUInt64	newval;
	tUInt64	t;

	newval=*val;
	setcolor(win,COLOR_BRACKETS);
	mvwprintw(win,y,x,"[");
	mvwprintw(win,y,x+len+1,"]");
	while (!done)
	{
		setcolor(win,COLOR_BRACKETS);
		for (i=0;i<len;i++) mvwprintw(win,y,x+i+1," ");
		setcolor(win,COLOR_INPUT);
		t=newval;
		for (i=len-2;i>=0 && t;i--)
		{
			tUInt8	c=t&0xf;
			t>>=4;
			mvwprintw(win,y,x+i+2,"%1x",c);
		}
		if (e==0) mvwprintw(win,y,x+i+2,"=");
		if (e==1) mvwprintw(win,y,x+i+2,"-");
		if (e==2) mvwprintw(win,y,x+i+2,"+");
		refresh();
		ch=getkey(1);
		if (ch=='=') e=0;
		if (ch=='-') e=1;
		if (ch=='+') e=2;

		if (ch>='a' && ch<='f') ch-=32;	// make it uppercase
		if (ch==KEYENTER) done=1;
		if (ch==KEYTAB) done=1;
		if (ch==KEYESC) done=1;
		if (ch>='0' && ch<='9') 
		{
			newval=newval*16;
			newval=newval+(ch-'0');
		}
		else if (ch>='A' && ch<='F')
		{
			newval=newval*16;
			newval=newval+(ch-'A'+10);
		}
		if (ch==KEYBACKSPACE || ch==KEYDEL)
		{
			newval=newval/16;
		}		
	}
	if (ch!=KEYESC) 
	{
		if (e==0) *val=newval;
		if (e==1) *val-=newval;
		if (e==2) *val+=newval;
	}
	return ch;
}
tInt16 hexinput2(WINDOW* win,tInt16 y,tInt16 x,char* s,tInt16* usedlen,tInt16 len)
{
	char* buf;
	tInt16	ch;
	tBool	done=0;
	tInt16	newusedlen;
	tBool	nibble=0;
	tUInt8	newchar;
	int i;
	
	buf=malloc(len);
	memcpy(buf,s,len);
	newusedlen=*usedlen;

	setcolor(win,COLOR_BRACKETS);
	mvwprintw(win,y,x,"[");
	mvwprintw(win,y,x+len*3,"]");
	while (!done)
	{
		setcolor(win,COLOR_INPUT);
		for (i=0;i<len;i++)
		{
			if (i<newusedlen) mvwprintw(win,y,x+1+i*3,"%02x",((tUInt16)buf[i]&0xff));
			else if (i==newusedlen && nibble) mvwprintw(win,y,x+1+i*3,"%1x ",newchar&0xf);
			else mvwprintw(win,y,x+1+i*3,"  ");
			if (i!=(len-1)) mvwprintw(win,y,x+3+i*3," ");
		}
		wmove(win,y,x+1+newusedlen*3+nibble);
		ch=getkey(1);
		if (ch>='a' && ch<='z') ch-=32;
		if (newusedlen<len && ((ch>='0' && ch<='9') || (ch>='A' && ch<='F')))
		{
			newchar<<=4;
			newchar|=(ch>='A')?(ch-'A'+10):(ch-'0');
			if (nibble) buf[newusedlen++]=newchar;
			nibble=!nibble;
		}
		if ((newusedlen>0 || nibble) && ch==KEYBACKSPACE) 
		{
			if (!nibble && newusedlen) newchar=buf[--newusedlen];
			newchar>>=4;
			nibble=!nibble;
		}
		if (ch==KEYENTER || ch==KEYTAB || ch==KEYUP || ch==KEYDOWN) done=1;
		if (ch==KEYESC) done=1;
	}
	if (ch!=KEYESC) 
	{
		memcpy(s,buf,len);
		*usedlen=newusedlen;
	}
	free(buf);
	setcolor(win,COLOR_TEXT);
	newusedlen=*usedlen;
	for (i=0;i<len;i++)
	{
		if (i<newusedlen) mvwprintw(win,y,x+1+i*3,"%02x",((tUInt16)buf[i]&0xff));
		else if (i==newusedlen && nibble) mvwprintw(win,y,x+1+i*3,"%1x ",newchar&0xf);
		else mvwprintw(win,y,x+1+i*3,"  ");
		if (i!=(len-1)) mvwprintw(win,y,x+3+i*3," ");
	}
	return ch;
}
tInt16 stringinput(WINDOW* win,tInt16 y,tInt16 x,char* s,tInt16 len)
{
	tInt16 i;
	tInt16 cursorpos;
	tInt16 ch;
	tInt16 done=0;
	char* buf;

	buf=malloc(len);
	memcpy(buf,s,len);
	
	

	cursorpos=strlen(s);
	setcolor(win,COLOR_BRACKETS);
	mvwprintw(win,y,x,"[");
	mvwprintw(win,y,x+len+1,"]");
	while (!done)
	{
		setcolor(win,COLOR_INPUT);
		for (i=0;i<len;i++)
		{
			mvwprintw(win,y,x+i+1,"%c",(i<strlen(buf))?buf[i]:'_');
		}

		if (cursorpos<len)
		{
			setcolor(win,COLOR_CURSOR);
			mvwprintw(win,y,x+cursorpos+1,"%c",(cursorpos<strlen(buf))?buf[cursorpos]:'_');
		}
		move(y,x+cursorpos+1);
		refresh();
		ch=getkey(1);
		if (ch==KEYENTER) done=1;
		if (ch==KEYTAB) done=1;
		if (ch==KEYESC) done=1;
		if (ch==KEYLEFT && cursorpos) cursorpos--;
		if (ch==KEYRIGHT && cursorpos<strlen(buf)) cursorpos++;
		if (ch>=' ' && ch<127 && cursorpos<len)
		{
			memmove(&buf[cursorpos+1],&buf[cursorpos],len-cursorpos);
			buf[cursorpos++]=ch;
		} else if (ch==KEYBACKSPACE && cursorpos>0) {
			memmove(&buf[cursorpos-1],&buf[cursorpos],len-cursorpos);
			cursorpos--;
		} else if (ch==KEYDEL && cursorpos<(strlen(buf))) {
			memmove(&buf[cursorpos],&buf[cursorpos+1],len-cursorpos);
		}
	}
	if (ch!=KEYESC) memcpy(s,buf,len);
	free(buf);
	setcolor(win,COLOR_TEXT);
	for (i=0;i<len;i++)
	{
		mvwprintw(win,y,x+i+1,"%c",(i<strlen(s))?s[i]:' ');
	}
	return ch;
}
int	configkeytab(char* line)
{
	int i;
	int j;
	int k;
	unsigned int x;
	int retval=1;
	
	for (i=0;i<NUM_SPECIALKEYS;i++)
	{
		if (strncmp(KeyTab[i].config,line,strlen(KeyTab[i].config))==0)
		{
			retval=0;
			x=1;
			KeyTab[i].seqlen=0;
			for (j=strlen(KeyTab[i].config);j<strlen(line);j++)
			{
				x<<=4;
				if (line[j]>='0' && line[j]<='9') x|=(line[j]-'0');
				if (line[j]>='A' && line[j]<='F') x|=(line[j]-'A'+10);
				if (x&0x100)
				{
					KeyTab[i].seq[KeyTab[i].seqlen++]=(x&0xff);
					x=1;
				}
			}
			
		}	
	}
	return retval;
}
int writeconfigfile(char* configfilename)
{
	tFptr f;
	char tmpbuf[65536];
	char lineorig[512];
	char lineupcase[512];
	char c;
	int lineorigidx;
	int lineupcaseidx;
	int i,j,size;
	tBool found;
	
	f=fopen(configfilename,"rb");
	if (!f) return RETNOK;
	size=fread(tmpbuf,sizeof(char),65536,f);
	fclose(f);
	if (size>=65536) return RETNOK;
	tmpbuf[size++]=0;

	lineorigidx=0;
	lineupcaseidx=0;
	f=fopen(configfilename,"w");
	for (i=0;i<size;i++)
	{
		c=tmpbuf[i];
		
		lineorig[lineorigidx++]=c;
		lineorig[lineorigidx]=0;
		if (c>='a' && c<='z') c-=32;
		if (c==9) c=32;
		if (c!=32)
		{
			lineupcase[lineupcaseidx++]=c;
			lineupcase[lineupcaseidx]=0;
		}
		
		if (c<32)
		{
			found=0;
			for (j=0;j<NUM_SPECIALKEYS;j++)
			{
				if (strncmp(KeyTab[j].config,lineupcase,strlen(KeyTab[j].config))==0) 
				{
					found=1;
				}
			}
			if (!found)
			fprintf(f,"%s",lineorig);
			lineorigidx=0;
			lineupcaseidx=0;
		}
	}
	for (i=0;i<NUM_SPECIALKEYS;i++)
	{
		fprintf(f,"%s",KeyTab[i].config);
		for (j=0;j<KeyTab[i].seqlen;j++)
		{
			fprintf(f,"%02x ",KeyTab[i].seq[j]);
		}
		fprintf(f,"\n");
	}
	fclose(f);
}
void keyboardsetup(WINDOW* win,char* configfilename)
{
	int i,j;
	int ch=0;
	int lastkey=0;
	int keyesc=0;
	unsigned char seq[8];
	unsigned int seqlen;
	tBool done;
	mvwprintw(win,0,0,"Please press the following keys");
	mvwprintw(win,1,0,"(Press ESC if your keyboard does not have them)");
	mvwprintw(win,3,0,"Config file:%s",configfilename);
	for (i=0;i<NUM_SPECIALKEYS;i++)
	{
		lastkey=-1;
		done=0;
		seqlen=0;
		memset(seq,0,sizeof(seq));
		if (i<12) mvwprintw(win,5+i,0,"%s",KeyTab[i].config);
		else mvwprintw(win,i-7,40,"%s",KeyTab[i].config);
		while (!done)
		{	
			ch=getch();
			if (ch==-1 && lastkey!=-1) done=1;
			if (ch!=-1 && seqlen<8) seq[seqlen++]=ch;
			lastkey=ch;
		}
		KeyTab[i].seqlen=seqlen;
		memcpy(KeyTab[i].seq,seq,seqlen);
		if (KeyTab[i].retval==KEYESC) keyesc=i;
		for (j=0;j<seqlen;j++)
		{
			if (i<12) mvwprintw(win,5+i,15+j*3,"%02x",seq[j]);
			else mvwprintw(win,i-7,55+j*3,"%02x",seq[j]);
		}
		if (seqlen==1 && seq[0]>=32 && seq[0]<127)
		{
			mvwprintw(win,(i<12)?(5+i):(i-7),(i<12)?0:40,"%s(*)",KeyTab[i].config);
			mvwprintw(win,20,0,"WARNING: Keystrokes with (*) cannot be used in an input field\n");
		}
	}
	for (i=0;i<NUM_SPECIALKEYS;i++)
	{
		if (memcmp(KeyTab[i].seq,KeyTab[keyesc].seq,8)==0 && i!=keyesc) KeyTab[i].seqlen=0;
	}
	mvwprintw(win,21,0,"Would you like me to write this into the config file? (Y/N)");
	done=0;
	while (!done)
	{
		ch=getkey(1);
		if (ch=='n' || ch=='N') done=1;
		if (ch=='y' || ch=='Y')
		{
			writeconfigfile(configfilename);
			done=1;
		}
	}
}