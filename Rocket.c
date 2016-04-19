#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#if defined(__APPLE__)
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
   
GLdouble width, height;	
int w=1000,h=1000,p=0,q1=0;
float q=0,x=0,y=0;
int a=0;

void mouse(int button,int state,int x,int y)
 {
	   if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
      	   {
		a++;
    
 	   }
}

void display()
{
        if(a>0&&a<850)
	{		
		groundstate();
		
         }
	else if(a>=850 && a<1700)
	{
		bluesky();
		
	}
	else
	{
		marsky();
	}
	
}
void sun()
{
  int s;
	if(q1%5==0)
        {
		glColor3f(0.7,0.560784,0.560784); 
        	q1++;
        }
        else
        {
         	glColor3f(1,0.5,0);
		q1++;
         } 

	glBegin(GL_POLYGON);

	for(s=0;s<360;s++)
           {
		glVertex2f(800+(40*cos((3.141*s)/180)),823-(40*sin((3.141*s)/180)));

	   }
          glEnd();
}




void drawline1()
 {      
	glColor3f(1,0,0);
	glBegin(GL_LINES);
        glLineWidth(8.0);
    	glVertex2f(300,150);
    	glVertex2f(300,250);
	glEnd();
	glColor3f(1,0,0);
        glLineWidth(8.0);
	glBegin(GL_LINES);
    	glVertex2f(300,250);
    	glVertex2f(410,250);
	glEnd();
}
void drawline2()
{      
	glColor3f(1,0,0);
	glBegin(GL_LINES);
        glLineWidth(8.0);
    	glVertex2f(450,140);
    	glVertex2f(450,225);
	glEnd();
	glColor3f(1,0,0);
        glLineWidth(8.0);
	glBegin(GL_LINES);
    	glVertex2f(450,225);
    	glVertex2f(340,225);
	glEnd();
}

void tower()
{
	int i;
	glColor3f(1,1,1);
		glBegin(GL_POLYGON);

	for(i=135;i<315;i++)
         {
		glVertex2f(137+(40*cos((3.141*i)/180)),615+(40*sin((3.141*i)/180)));

	 }
        glEnd();
	glColor3f(1,1,1);
	glLineWidth(3.0);
	glBegin(GL_LINES);
    	glVertex2f(108.7,643.28);
    	glVertex2f(178,656);
	glEnd();

	glColor3f(1,1,1);
	glBegin(GL_LINES);
    	glVertex2f(178,656);
    	glVertex2f(165.28,586.7);
	glEnd();
}

void staticrocket()
{   

int j; 
        if(a>=1)
	display();
	glClearColor(0.22, 0.69, 0.87, 0.0);//background colour sky blue
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glColor3f(0.137255f,0.556863f,0.137255f);//green ground
	glBegin(GL_POLYGON);
	glVertex2f(0,0);
		glVertex2f(0,500);
		glVertex2f(1000,500);
		glVertex2f(1000,0);
		glEnd();
	
	glColor3f(0.576471f,0.858824f,0.439216f);//house lower block
		glBegin(GL_POLYGON);
		glVertex2f(600,500);
		glVertex2f(600,598);
		glVertex2f(700,598);
		glVertex2f(700,500);
		glEnd();

	glColor3f(0.576471f,0.858824f,0.439216f);//house upper block
		glBegin(GL_POLYGON);
		glVertex2f(600,602);
		glVertex2f(600,700);
		glVertex2f(700,700);
		glVertex2f(700,602);
		glEnd();

	glColor3f(0.309804f,0.184314f,0.184314f);//house strip
		glBegin(GL_POLYGON);
		glVertex2f(598,598);
		glVertex2f(598,602);
		glVertex2f(702,602);
		glVertex2f(702,598);
		glEnd();

	glColor3f(0.623529f,0.623529f,0.372549f);//door
		glBegin(GL_POLYGON);
		glVertex2f(625,500);
		glVertex2f(625,560);
		glVertex2f(670,560);	
		glVertex2f(670,500);	
		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//windows1
		glBegin(GL_POLYGON);
		glVertex2f(621,610);
		glVertex2f(621,630);
		glVertex2f(642,630);
		glVertex2f(642,610);
 		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//window2
		glBegin(GL_POLYGON);
		glVertex2f(621,660);	
		glVertex2f(621,680);
		glVertex2f(642,680);
		glVertex2f(642,660);
		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//window3
		glBegin(GL_POLYGON);
		glVertex2f(660,610);
		glVertex2f(660,630);
		glVertex2f(680,630);
		glVertex2f(680,610);
		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//window4
		glBegin(GL_POLYGON);
		glVertex2f(660,660);
		glVertex2f(660,680);
		glVertex2f(680,680);
		glVertex2f(680,660);
		glEnd();
	
	glColor3f(0.848824,0.576471,0.439216);//triangle of the tower
		glBegin(GL_POLYGON);
		glVertex2f(100,500);
		glVertex2f(125,575);
		glVertex2f(150,500);
		
		glEnd();
		tower();


        
	glColor3f(0.848824,0.576471,0.439216);//rocket body rectangle
		glBegin(GL_POLYGON);
		glVertex2f(350,150);
		glVertex2f(350,350);
		glVertex2f(400,350);
                glVertex2f(400,150);
                glEnd();

	glColor3f(1,1,1);//upper triangle of rocket
		glBegin(GL_POLYGON);
		glVertex2f(350,350);
		glVertex2f(375,420);
		glVertex2f(400,350);
		
		glEnd();
	glColor3f(0.5,0.0,1.0);//upleft traingle
		glBegin(GL_POLYGON);
		glVertex2f(320,300);
		glVertex2f(350,350);
		glVertex2f(350,300);
		glEnd();
	glColor3f(0.5,0.0,1.0);//upright traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,350);
		glVertex2f(400,300);
		glVertex2f(430,300);
		glEnd();
	glColor3f(0.5,0.0,1.0);//bottom left traingle
		glBegin(GL_POLYGON);
		glVertex2f(350,245);
		glVertex2f(320,150);
		glVertex2f(350,150);
		glEnd();
	glColor3f(0.5,0.0,1.0);//bottom right traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,245);
		glVertex2f(400,150);
		glVertex2f(430,150);
		glEnd();
	glColor3f(0.0,1.0,0.0);//flag green colour
		glBegin(GL_POLYGON);
		glVertex2f(360,250);
		glVertex2f(360,256);
		glVertex2f(390,256);
		glVertex2f(390,250);
		glEnd();
	 glColor3f(1.0,1.0,1.0);//flag white colour
		glBegin(GL_POLYGON);
		glVertex2f(360,256);
		glVertex2f(360,262);
		glVertex2f(390,262);
		glVertex2f(390,256);
		glEnd();
	 glColor3f(1.0,0.5,0.0);//flag orange colour
		glBegin(GL_POLYGON);
		glVertex2f(360,262);
		glVertex2f(360,268);
		glVertex2f(390,268);
		glVertex2f(390,262);
		glEnd();
	glColor3f(0.0,0.0,0.0);
		glPointSize(4.0);
		glBegin(GL_POINTS);
                glVertex2f(375,259);
		glEnd();
                sun();
		drawline1();
		drawline2();
                for(j=0;j<=1000000;j++)
			;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
}




void groundstate()
{   

	int j,i;
     	glClearColor(0.22, 0.69, 0.87, 0.0);//background colour sky blue
    	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
   
	for(i=0;i<850;i++)
{
        a++;
	glColor3f(0.22f, 0.69f, 0.87f);
     	glBegin(GL_POLYGON);
    	glVertex2f(0,0);
		glVertex2f(0,0);
		glVertex2f(0,1000);
		glVertex2f(1000,1000);
                glVertex2f(1000,0);
		glEnd();

   	glBegin(GL_POLYGON);
 	glColor3f(0.137255f,0.556863f,0.137255f);//green ground
    	        glVertex2f(0,0);
		glVertex2f(0,500);
		glVertex2f(1000,500);
		glVertex2f(1000,0);
		glEnd();
	
	glColor3f(0.576471f,0.858824f,0.439216f);//house lower block
		glBegin(GL_POLYGON);
		glVertex2f(600,500);
		glVertex2f(600,598);
		glVertex2f(700,598);
		glVertex2f(700,500);
		glEnd();

	glColor3f(0.576471f,0.858824f,0.439216f);//house upper block
		glBegin(GL_POLYGON);
		glVertex2f(600,602);
		glVertex2f(600,700);
		glVertex2f(700,700);
		glVertex2f(700,602);
		glEnd();

	glColor3f(0.309804f,0.184314f,0.184314f);//house strip
		glBegin(GL_POLYGON);
		glVertex2f(598,598);
		glVertex2f(598,602);
		glVertex2f(702,602);
		glVertex2f(702,598);
		glEnd();

	glColor3f(0.623529f,0.623529f,0.372549f);//door
		glBegin(GL_POLYGON);
		glVertex2f(625,500);
		glVertex2f(625,560);
		glVertex2f(670,560);	
		glVertex2f(670,500);	
		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//windows1
		glBegin(GL_POLYGON);
		glVertex2f(621,610);
		glVertex2f(621,630);
		glVertex2f(642,630);
		glVertex2f(642,610);
 		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//window2
		glBegin(GL_POLYGON);
		glVertex2f(621,660);	
		glVertex2f(621,680);
		glVertex2f(642,680);
		glVertex2f(642,660);
		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//window3
		glBegin(GL_POLYGON);
		glVertex2f(660,610);
		glVertex2f(660,630);
		glVertex2f(680,630);
		glVertex2f(680,610);
		glEnd();

	glColor3f(0.196078f,0.196078f,0.8f);//window4
		glBegin(GL_POLYGON);
		glVertex2f(660,660);
		glVertex2f(660,680);
		glVertex2f(680,680);
		glVertex2f(680,660);
		glEnd();
	
	glColor3f(0.848824,0.576471,0.439216);//triangle of the tower
		glBegin(GL_POLYGON);
		glVertex2f(100,500);
		glVertex2f(125,575);
		glVertex2f(150,500);
		glEnd();
		tower();
	glColor3f(0.848824,0.576471,0.439216);//rocket body rectangle
		glBegin(GL_POLYGON);
		glVertex2f(350,150+i);
		glVertex2f(350,350+i);
		glVertex2f(400,350+i);
                glVertex2f(400,150+i);
                glEnd();
	glColor3f(1,1,1);//upper triangle of rocket
		glBegin(GL_POLYGON);
		glVertex2f(350,350+i);
		glVertex2f(375,420+i);
		glVertex2f(400,350+i);
		glEnd();
	glColor3f(0.5,0.0,1.0);//upleft traingle
		glBegin(GL_POLYGON);
		glVertex2f(320,300+i);
		glVertex2f(350,350+i);
		glVertex2f(350,300+i);
		glEnd();
     	glColor3f(0.5,0.0,1.0);//upright traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,350+i);
		glVertex2f(400,300+i);
		glVertex2f(430,300+i);
		glEnd();
	 glColor3f(0.5,0.0,1.0);//bottom left traingle
		glBegin(GL_POLYGON);
		glVertex2f(350,245+i);
		glVertex2f(320,150+i);
		glVertex2f(350,150+i);
		glEnd();
	glColor3f(0.5,0.0,1.0);//bottom right traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,245+i);
		glVertex2f(400,150+i);
		glVertex2f(430,150+i);
		glEnd();
	glColor3f(0.0,1.0,0.0);//flag green colour
		glBegin(GL_POLYGON);
		glVertex2f(360,250+i);
		glVertex2f(360,256+i);
		glVertex2f(390,256+i);
		glVertex2f(390,250+i);
		glEnd();
	 glColor3f(1.0,1.0,1.0);//flag white colour
		glBegin(GL_POLYGON);
		glVertex2f(360,256+i);
		glVertex2f(360,262+i);
		glVertex2f(390,262+i);
		glVertex2f(390,256+i);
		glEnd();
	 glColor3f(1.0,0.5,0.0);//flag orange colour
		glBegin(GL_POLYGON);
		glVertex2f(360,262+i);
		glVertex2f(360,268+i);
		glVertex2f(390,268+i);
		glVertex2f(390,262+i);
		glEnd();

	 glBegin(GL_POLYGON);// flames
        if(i%3==0)
                glColor3f(1,0.874588,0);
        else
                glColor3f(1,0.647058,0);
                
                glVertex2f(350,150+i);
                glVertex2f(325,125+i);
		glVertex2f(335,110+i);
 		glVertex2f(335,115+i);
		glVertex2f(345,100+i);
                glVertex2f(345,105+i);
		glVertex2f(355,90+i);
		glVertex2f(355,95+i);
		glVertex2f(365,80+i);
		glVertex2f(365,85+i);
		glVertex2f(375,75+i);
		glVertex2f(385,85+i);
		glVertex2f(385,80+i);
		glVertex2f(395,95+i);
		glVertex2f(395,90+i);
		glVertex2f(405,105+i);
		glVertex2f(405,100+i);
		glVertex2f(415,115+i);
		glVertex2f(415,110+i);
		glVertex2f(425,125+i);
		glVertex2f(400,150+i);
		glEnd();

	glColor3f(0.0,0.0,0.0);
		glPointSize(4.0);
		glBegin(GL_POINTS);
                glVertex2f(375,259+i);
		glEnd();
		sun();
	    
	p=p+1;
	if(p<200)
	{
		glPushMatrix();	
		q=q+0.2;
		glTranslatef(300,150,0.0); 
		glRotatef(q,0.0,0.0,1.0); 	
		glTranslatef(-300,-150,0.0); 
		drawline1();
		glPopMatrix();
    
		glPushMatrix();
		q=q+0.2;
		glTranslatef(450,150,0.0); 
		glRotatef(-q,0.0,0.0,1.0); 
		glTranslatef(-450,-150,0.0); 
		drawline2();
		glPopMatrix();
	}
       

	else
        {
		glPushMatrix();	
		
		glTranslatef(300,150,0.0); 
		glRotatef(80,0.0,0.0,1.0); 	
		glTranslatef(-300,-150,0.0); 
		drawline1();
		glPopMatrix();
    
		glPushMatrix();
		
		glTranslatef(450,150,0.0); 
		glRotatef(-78,0.0,0.0,1.0); 
		glTranslatef(-450,-150,0.0); 
		drawline2();
		glPopMatrix();

       }
       

	for(j=0;j<=1000000;j++)
		;
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();
	
}
}


void bluesky()
{
   
	int i,j;

	for(i=0;i<1000;i++)
	{
	a++;
	glClearColor(0.22, 0.69, 0.87, 0.0);//background colour sky blue
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	glColor3f(0.848824,0.576471,0.439216);//rocket body rectangle
		glBegin(GL_POLYGON);
		glVertex2f(350,150+i-150);
		glVertex2f(350,350+i-150);
		glVertex2f(400,350+i-150);
                glVertex2f(400,150+i-150);
                glEnd();

	glColor3f(1,1,1);//upper triangle of rocket
		glBegin(GL_POLYGON);
		glVertex2f(350,350+i-150);
		glVertex2f(375,420+i-150);
		glVertex2f(400,350+i-150);
		
		glEnd();
	glColor3f(0.5,0.0,1.0);//upleft traingle
		glBegin(GL_POLYGON);
		glVertex2f(320,300+i-150);
		glVertex2f(350,350+i-150);
		glVertex2f(350,300+i-150);
		glEnd();
	glColor3f(0.5,0.0,1.0);//upright traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,350+i-150);
		glVertex2f(400,300+i-150);
		glVertex2f(430,300+i-150);
		
		glEnd();
	 glColor3f(0.5,0.0,1.0);//bottom left traingle
		glBegin(GL_POLYGON);
		glVertex2f(350,245+i-150);
		glVertex2f(320,150+i-150);
		glVertex2f(350,150+i-150);
		
		glEnd();

	 glColor3f(0.5,0.0,1.0);//bottom right traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,245+i-150);
		glVertex2f(400,150+i-150);
		glVertex2f(430,150+i-150);
		
		glEnd();


	 glColor3f(0.0,1.0,0.0);//flag green colour
		glBegin(GL_POLYGON);
		glVertex2f(360,250+i-150);
		glVertex2f(360,256+i-150);
		glVertex2f(390,256+i-150);
		glVertex2f(390,250+i-150);
		glEnd();
	 glColor3f(1.0,1.0,1.0);//flag white colour
		glBegin(GL_POLYGON);
		glVertex2f(360,256+i-150);
		glVertex2f(360,262+i-150);
		glVertex2f(390,262+i-150);
		glVertex2f(390,256+i-150);
		glEnd();
	 glColor3f(1.0,0.5,0.0);//flag orange colour
		glBegin(GL_POLYGON);
		glVertex2f(360,262+i-150);
		glVertex2f(360,268+i-150);
		glVertex2f(390,268+i-150);
		glVertex2f(390,262+i-150);
		glEnd();
	   
         glBegin(GL_POLYGON);// flames
        if(i%3==0)
                glColor3f(1,0.874588,0);
        else
                glColor3f(1,0.647058,0);
                
                glVertex2f(350,150+i-150);
                glVertex2f(325,125+i-150);
		glVertex2f(335,110+i-150);
 		glVertex2f(335,115+i-150);
		glVertex2f(345,100+i-150);
                glVertex2f(345,105+i-150);
		glVertex2f(355,90+i-150);
		glVertex2f(355,95+i-150);
		glVertex2f(365,80+i-150);
		glVertex2f(365,85+i-150);
		glVertex2f(375,75+i-150);
		glVertex2f(385,85+i-150);
		glVertex2f(385,80+i-150);
		glVertex2f(395,95+i-150);
		glVertex2f(395,90+i-150);
		glVertex2f(405,105+i-150);
		glVertex2f(405,100+i-150);
		glVertex2f(415,115+i-150);
		glVertex2f(415,110+i-150);
		glVertex2f(425,125+i-150);
		glVertex2f(400,150+i-150);
		glEnd();
	glColor3f(0.0,0.0,0.0);//dot in flag
		glPointSize(4.0);
		glBegin(GL_POINTS);
                glVertex2f(375,259+i-150);
		glEnd();

	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();	
	}

}
void planet()
 {
   	int j;
	glColor3f(1,1,1);
		
	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
           {
		glVertex2f(600+x+(40*cos((3.141*j)/180)),1000-y+(40*sin((3.141*j)/180)));

	   }
        glEnd();
      	x=x+0.5;
      	y=y+0.5;
 }
void marsky()
{
   
	int i,j;
	for(i=0;i<1000;i++)
	{//printf("%d",a);
     	glClearColor(0.0, 0.0, 0.0,0.0);//background colour sky blue
    	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		
	if(i%3==0)
        {
		glColor3f(1.0,1.0,1.0);
		glPointSize(2.0);
		glBegin(GL_POINTS);
                
                glVertex2f(490,370);
		glVertex2f(230,220);
		glVertex2f(210,110);
		glVertex2f(110,50);
		glVertex2f(490,480);
		glVertex2f(115,160);
		glVertex2f(130,460);
		glVertex2f(25,215);
		glVertex2f(300,460);
		glVertex2f(275,120);
		glVertex2f(36,380);
		glVertex2f(230,390);
		glVertex2f(115,415);
		glVertex2f(560,680);
		glVertex2f(690,970);
		glVertex2f(760,520);
		glVertex2f(790,600);
		glVertex2f(893,750);
		glVertex2f(932,687);
		glVertex2f(682,972);
		glVertex2f(603,532);
		glVertex2f(920,568);
		glVertex2f(803,908);	
		glVertex2f(763,532);
		glVertex2f(530,932);
		glVertex2f(968,720);
		glVertex2f(490,680);
		glVertex2f(230,520);
		glVertex2f(210,980);
		glVertex2f(472,600);
		glVertex2f(386,720);
		glVertex2f(202,568);
		glVertex2f(130,762);
		glVertex2f(356,532);
		glVertex2f(363,976);
		glVertex2f(286,763);
		glVertex2f(32,763);
		glVertex2f(96,523);
		glVertex2f(182,673);
		glVertex2f(567,789);
		glVertex2f(592,746);
		glVertex2f(623,888);
		glVertex2f(656,751);
		glVertex2f(707,923);
		glVertex2f(746,843);
		glVertex2f(786,786);
		glVertex2f(180,726);
		glVertex2f(146,803);
		glVertex2f(143,888);
		glVertex2f(19,903);
		glVertex2f(263,956);
		glVertex2f(172,986);
		glVertex2f(510,10);
		glVertex2f(526,86);
		glVertex2f(534,168);
		glVertex2f(566,466);
		glVertex2f(598,324);
		glVertex2f(606,588);
		glVertex2f(644,288);
		glVertex2f(656,256);
		glVertex2f(638,265);
		glVertex2f(688,136);
		glVertex2f(712,413);
		glVertex2f(719,368);
		glVertex2f(732,259);
		glVertex2f(748,251);
		glVertex2f(777,222);
		glVertex2f(793,397);
		glVertex2f(808,304);
		glVertex2f(823,444);
		glVertex2f(876,192);
		glVertex2f(922,154);
		glVertex2f(936,326);
		glVertex2f(944,20);
		glVertex2f(970,90);
		glVertex2f(956,62);
		glVertex2f(632,23);
		glVertex2f(666,44);
		glVertex2f(678,86);
		glVertex2f(764,32);
		glVertex2f(717,53);
		glVertex2f(739,29);
		glEnd();
        }
	else
        {
                glColor3f(1.0,1.0,1.0);
		glPointSize(1.0);
		glBegin(GL_POINTS);
       		glEnd();
        }
		

	glColor3f(0.848824,0.576471,0.439216);//rocket body rectangle
		glBegin(GL_POLYGON);
		glVertex2f(350,150+i-150);
		glVertex2f(350,350+i-150);
		glVertex2f(400,350+i-150);
                glVertex2f(400,150+i-150);
                glEnd();

	glColor3f(1,1,1);//upper triangle of rocket
		glBegin(GL_POLYGON);
		glVertex2f(350,350+i-150);
		glVertex2f(375,420+i-150);
		glVertex2f(400,350+i-150);
		
		glEnd();
	glColor3f(0.5,0.0,1.0);//upleft traingle
		glBegin(GL_POLYGON);
		glVertex2f(320,300+i-150);
		glVertex2f(350,350+i-150);
		glVertex2f(350,300+i-150);
		glEnd();
     	glColor3f(0.5,0.0,1.0);//upright traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,350+i-150);
		glVertex2f(400,300+i-150);
		glVertex2f(430,300+i-150);
		
		glEnd();
	glColor3f(0.5,0.0,1.0);//bottom left traingle
		glBegin(GL_POLYGON);
		glVertex2f(350,245+i-150);
		glVertex2f(320,150+i-150);
		glVertex2f(350,150+i-150);
		
		glEnd();

	glColor3f(0.5,0.0,1.0);//bottom right traingle
		glBegin(GL_POLYGON);
		glVertex2f(400,245+i-150);
		glVertex2f(400,150+i-150);
		glVertex2f(430,150+i-150);
		
		glEnd();


	glColor3f(0.0,1.0,0.0);//flag green colour
		glBegin(GL_POLYGON);
		glVertex2f(360,250+i-150);
		glVertex2f(360,256+i-150);
		glVertex2f(390,256+i-150);
		glVertex2f(390,250+i-150);
		glEnd();
	glColor3f(1.0,1.0,1.0);//flag white colour
		glBegin(GL_POLYGON);
		glVertex2f(360,256+i-150);
		glVertex2f(360,262+i-150);
		glVertex2f(390,262+i-150);
		glVertex2f(390,256+i-150);
		glEnd();
	glColor3f(1.0,0.5,0.0);//flag orange colour
		glBegin(GL_POLYGON);
		glVertex2f(360,262+i-150);
		glVertex2f(360,268+i-150);
		glVertex2f(390,268+i-150);
		glVertex2f(390,262+i-150);
		glEnd();
	   
         glBegin(GL_POLYGON);// flames
        if(i%3==0)
                glColor3f(1,0.874588,0);
        else
                glColor3f(1,0.647058,0);
                
                glVertex2f(350,150+i-150);
                glVertex2f(325,125+i-150);
		glVertex2f(335,110+i-150);
 		glVertex2f(335,115+i-150);
		glVertex2f(345,100+i-150);
                glVertex2f(345,105+i-150);
		glVertex2f(355,90+i-150);
		glVertex2f(355,95+i-150);
		glVertex2f(365,80+i-150);
		glVertex2f(365,85+i-150);
		glVertex2f(375,75+i-150);
		glVertex2f(385,85+i-150);
		glVertex2f(385,80+i-150);
		glVertex2f(395,95+i-150);
		glVertex2f(395,90+i-150);
		glVertex2f(405,105+i-150);
		glVertex2f(405,100+i-150);
		glVertex2f(415,115+i-150);
		glVertex2f(415,110+i-150);
		glVertex2f(425,125+i-150);
		glVertex2f(400,150+i-150);
		glEnd();
	glColor3f(0.0,0.0,0.0);
		glPointSize(4.0);
		glBegin(GL_POINTS);
                glVertex2f(375,259+i-150);
		glEnd();
	planet();
	glutSwapBuffers();
	glutPostRedisplay();
	glFlush();	

	}


}



void reshape(int w, int h)
{
  
  	width = (GLdouble) w;
  	height = (GLdouble) h;
  	glViewport(0, 0, (GLsizei) width, (GLsizei) height);
  	glMatrixMode(GL_PROJECTION);
  	glLoadIdentity();
  	gluOrtho2D(0.0, width, 0.0, height);
}


main(int argc, char *argv[])
{
    	glutInit(&argc, argv);
  	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
  	glutInitWindowSize(w,h);
  	glutCreateWindow("Journey Of Space Shuttle " );
  	glutReshapeFunc(reshape);
  	
	glutMouseFunc(mouse);
	glutDisplayFunc(staticrocket);
	glutMainLoop();
}

