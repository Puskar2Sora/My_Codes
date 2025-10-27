import java.awt.*;
import java.awt.event.*;
import java.applet.*;

//<applet code= Scrolldemo height=400 width=400 > </applet>
 public class Scrolldemo extends Applet implements AdjustmentListener,MouseMotionListener
  {
    String msg= "";
    String msg1= "";
    Scrollbar vertsb,hortsb;
    public void init()
     {
       vertsb= new Scrollbar(Scrollbar.VERTICAL,0,2,0,300);//x1,y1,x2,y2
       hortsb=new Scrollbar(Scrollbar.HORIZONTAL,0,1,0,300);//y1,x1,y2,x2
       
       add(vertsb);
       add(hortsb);
  
       //register to receive adjustment events 
 
       vertsb.addAdjustmentListener(this);
       hortsb.addAdjustmentListener(this);
       addMouseMotionListener(this);
     } 
    public void adjustmentValueChanged(AdjustmentEvent ae)
     {
       repaint();
     }
 //update scroll bars to reflect mouse dragging
  
    public void mouseDragged(MouseEvent me)
     {
      int x = me.getX();
      int y = me.getY();

      vertsb.setValue(y);
      hortsb.setValue(x);
      repaint();
     }
 //necessary for Mouse motion Listener

    public void mouseMoved(MouseEvent me)
     {}
 //display current value of scroll bars
   
    public void paint(Graphics g)
     {
      msg ="Vertical: " +vertsb.getValue();
      msg1 = "Horizontal:"+hortsb.getValue();
      g.drawString(msg,6,100);
      g.drawString(msg1,6,160);
 //show current mousedrag position
      Font ob =new Font("elephant",Font.ITALIC,50);
      g.setFont(ob);
      g.drawString("Dip",hortsb.getValue(),vertsb.getValue());
     }
   }
 
 










