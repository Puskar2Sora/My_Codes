//This program shows the time in applet
import java.awt.*;
import java.applet.*;
import java.util.*;
 //<applet code=mytime width=300 height=300 ></applet>
   public class mytime extends Applet implements Runnable
    {
      Thread t;
      public void start()
       {
	 if(t==null)
	  {
	    t= new Thread(this);
	    t.start();
          }
        }
      public void run()
       {
   	 while(true)
 	  {
	    repaint();
	    try
	     {	
  		t.sleep(1000);
	     }
	    catch(InterruptedException e){}
           }
        }
      public void paint(Graphics g)
        {         
          Date d= new Date();
          g.drawString(d.getHours()+":"+d.getMinutes()+":"+d.getSeconds(),100,100);
        }
      public void stop()
       {
	 t.stop();
         t=null;
       }
     }









