import java.applet.*;
import java.awt.*;
import java.awt.event.*;
//<applet code=Color1 width=800 height=400></applet>
public class Color1 extends Applet implements ActionListener
{
  TextField ob1,ob2,ob3;
  Button b1;
  public void init()
  {
    ob1=new TextField(10);
    add(ob1);
    ob2=new TextField(10);
    add(ob2);
    ob3=new TextField(10);
    add(ob3);
    b1=new Button("Generate Color");
    add(b1);
    b1.addActionListener(this);
    ob1.setText("40");
    ob2.setText("40");
    ob3.setText("40");
  }
  public void actionPerformed(ActionEvent ae)
  {
    repaint();
  }
  public void paint(Graphics g)
  {
    int x=Integer.parseInt(ob1.getText());   
    int y=Integer.parseInt(ob2.getText());  
    int z=Integer.parseInt(ob3.getText());   
    if(x>255 || y>255 || z>255 || x<0 || y<0  || z<0)
     {
       g.drawString("Invalid Colour Code ",10,200); 
        System.out.println("Invalid Colour Code"); 
     }  
    else
     {
    Color clr=new Color(x,y,z);
    setBackground(clr);
     }
  }
}






