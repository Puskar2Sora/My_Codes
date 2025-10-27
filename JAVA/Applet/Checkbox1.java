import java.applet.*;
import java.awt.*;
import java.awt.event.*;
//<applet code=Checkbox1 height=400 width=500></applet>
public class Checkbox1 extends Applet implements ItemListener
{
   Checkbox ob1,ob2,ob3,ob4;
   Font ob;
   String msg;
   public void init()
   {
     msg="";
     ob =new Font("bookman old style",Font.BOLD,30);
     ob1=new Checkbox("Saptak",true);
     add(ob1);
     ob1.addItemListener(this);

     ob2=new Checkbox("Satyam");
     ob3=new Checkbox("Abhinandan");
     ob4=new Checkbox("Arpan");

     add(ob2);
     add(ob3);
     add(ob4);

     ob2.addItemListener(this);
     ob3.addItemListener(this);
     ob4.addItemListener(this);
   }
   public void itemStateChanged(ItemEvent ie)
   {
     repaint();
   }
   public void paint(Graphics g)
   {
       g.setFont(ob);
      g.drawString("Current State : ",10,100);
      msg="Saptak state = "+ob1.getState();
      g.drawString(msg,10,150);
      msg="Satyam state = "+ob2.getState();
      g.drawString(msg,10,200);
      msg="Abhinandan state = "+ob3.getState();
      g.drawString(msg,10,250);
      msg="Arpan state = "+ob4.getState();
      g.drawString(msg,10,300);
   }  
}
















