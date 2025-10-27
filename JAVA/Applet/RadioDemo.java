import java.awt.*;
import java.awt.event.*;
import java.applet.*;

//<applet code=RadioDemo height=400 width=400></applet>

public class RadioDemo extends Applet implements ItemListener
 {
    String msg= "";
    Checkbox win98,winnt,solaries,mac;
    CheckboxGroup cbg;
    Font ob,obj;
    public void init()
     {
	cbg = new CheckboxGroup();
	win98 = new Checkbox("windows 98",cbg,false);
	winnt = new Checkbox("windows NT/2000",cbg,false);
   	solaries = new Checkbox("Solaries",cbg,false);
	mac = new Checkbox("MacOs",cbg,false);

    	add(win98);
	add(winnt);
	add(solaries);
	add(mac);

     	win98.addItemListener(this);
	winnt.addItemListener(this);
	solaries.addItemListener(this);
	mac.addItemListener(this);
     }
  public void itemStateChanged(ItemEvent ie)
     {
	repaint();
     }
   public void paint(Graphics g)
     {
	msg = "current selection";
        obj =new Font("Algerian",Font.BOLD,20);
        g.setFont(obj);
        g.drawString(msg,6,80);
   	msg = cbg.getSelectedCheckbox().getLabel();
        if(msg.equals("windows 98"))
           g.drawString("It is a Slow OS",6,120);
	g.drawString(msg,6,140);
     }
   }







