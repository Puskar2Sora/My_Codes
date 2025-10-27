import java.applet.*;
import java.awt.*;
import java.awt.event.*;
//<applet code="Button1" width=500 height=500></applet>
public class Button1 extends Applet implements ActionListener
{
     Button ob1,ob2,ob3;
     Font fnt;
     String x,msg;
     public void init()
       {
          x="";
          msg="";
          fnt=new Font("Bookman old style",Font.BOLD,30);
          ob1=new Button("Yes");
          add(ob1);
          ob1.addActionListener(this);
          ob2=new Button("No");
          add(ob2);
          ob2.addActionListener(this);
          ob3=new Button("Maybe");
          add(ob3);
          ob3.addActionListener(this);
       }
     public void actionPerformed(ActionEvent ae)
       {
             x=ae.getActionCommand();
             if(x.equals("Yes"))
                 msg="You Pressed Yes Button";
             else if(x.equals("No"))
                 msg="You Pressed No Button";
             else if(x.equals("Maybe"))
                 msg="You Pressed Maybe Button";
             repaint();
       }
     public void paint(Graphics g)
       {
               g.setFont(fnt);
               g.drawString(msg,100,100);
       }
}