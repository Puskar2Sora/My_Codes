import java.applet.*;
import java.awt.*;

/* <applet code=TextInput height=400 width =400></applet>
*/

   public class TextInput extends Applet
    {
	Label l1,l2,l3;
	TextField t1,t2,t3;
       public void init()
        {
	  l1= new Label("Enter First Number");
	  l2= new Label("Enter Second Number");
	  l3= new Label ("The Result is");

          t1=new TextField(10);
          t2=new TextField(10);
          t3= new TextField(10);

	  add(l1);
	  add(t1);
   	  add(l2);
	  add(t2);
          add(l3);
          add(t3);

	  t1.setText("0");
          t2.setText("0");
         }
   
     public void paint( Graphics g)
      {
	 Double res;
         Double x= Double.valueOf(t1.getText());
 	 Double y= Double.valueOf(t2.getText());
         res= x+y;
	 t3.setText(String.valueOf(res));       
       }
      public boolean action(Event e,Object o)
	{
	  repaint();
	  return true;
         }
     }