
 
import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class Calculator1 extends Applet implements ActionListener
{
//<applet code="Calculator1"  height=400 width=300></applet>
	TextField t1;
    Button b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15;
    String text="";
    int op=0;
    
    double val1=0.0,val2=0.0,res=0.0;
      	
	public void init() 
	{
		   t1=new TextField(20);
	       add(t1);
	       
           b10=new Button("+");
           add(b10);
           b11=new Button("-");
           add(b11);
           b12=new Button("*");
           add(b12);
           b13=new Button("/");
           add(b13);
           b14=new Button("%");
           add(b14);
           b0=new Button("0");
           add(b0);
           b1=new Button("1");
           add(b1);
           b2=new Button("2");
           add(b2);
           b3=new Button("3");
           add(b3);
           b4=new Button("4");
           add(b4);
           b5=new Button("5");
           add(b5);
           b6=new Button("6");
           add(b6);
           b7=new Button("7");
           add(b7);
           b8=new Button("8");
           add(b8);
           b9=new Button("9");
           add(b9);
           b15=new Button("=");
           add(b15);
           
           b0.addActionListener(this);
           b1.addActionListener(this);
           b2.addActionListener(this);
           b3.addActionListener(this);
           b4.addActionListener(this);
           b5.addActionListener(this);
           b6.addActionListener(this);
           b7.addActionListener(this);
           b8.addActionListener(this);
           b9.addActionListener(this);
           b10.addActionListener(this);
           b11.addActionListener(this);
           b12.addActionListener(this);
           b13.addActionListener(this);
           b14.addActionListener(this);
           b15.addActionListener(this);
}

public void actionPerformed(ActionEvent ae)
 {
   String str=ae.getActionCommand();
		
   if(str.equals("+"))
   {
     op=1;
     val1=Double.valueOf(t1.getText());
     t1.setText("");
     text="";
     return;
}
if(str.equals("-"))
{
     op=2;
     val1=Double.valueOf(t1.getText());
     t1.setText("");
     text="";
     return;
}
if(str.equals("*"))
{
   op=3;
   val1=Double.valueOf(t1.getText());
   t1.setText("");
   text="";
   return;
  }
if(str.equals("/"))
{
   op=4;
   val1=Double.valueOf(t1.getText());
   t1.setText("");
   text="";
   return;
}
if(str.equals("%"))
{
			op=5;
			val1=Double.valueOf(t1.getText());
			t1.setText("");
			text="";
			return;
		}
		if(str.equals("="))
		{
			val2=Double.valueOf(t1.getText());
			t1.setText("");
			Calculator1 clc1=new Calculator1();
			res=clc1.doit(val1,val2,op);
			t1.setText(String.valueOf(res));
			return;
		}
		
		text=text+str;
		t1.setText(text);
	}
	public double doit(double d1,double d2,int op)
	{
			switch (op) 
			{
			    case 1:
			    	return(d1+d2);
			    case 2:
			    	return(d1-d2);
			    case 4:
			    	return(d1/d2);
			    case 3:
			    	return(d1*d2);
				default :
			    	return(d1%d2);
			}
	}
}
