import java.awt.*;
public class Multimedia1 extends Frame
{
  String x="You have selected Menu";
  public static void main(String as[])
  {
    Multimedia1 mm=new Multimedia1();
  }
  public Multimedia1()
  {
    super("Multimedia");
    pack();
    resize(500,500);
    Menus();
    show();
  }
  void Menus()
  {
    MenuBar mb=new MenuBar();
    Menu m=new Menu("Chandan");
    m.add("Vishal");
    m.add("Rupam Banerjee");
    m.add("Meghna Mondal");
    m.add("Tuhina Banerjee");
    m.add("Prity Mitra");
    mb.add(m);
    Menu q=new Menu("Antarip");
    q.add("Abhinandan");
    q.add("Arpan");
    q.add("Dip");
    q.add("Asif");
    mb.add(q); 
    Menu r =new Menu("Quit");
    mb.add(r);
    setMenuBar(mb);   
  }
  public void paint(Graphics g)
  {
   g.drawString(x,100,100);
  }
  public boolean handleEvent(Event ea)
    {
       if(ea.id==Event.WINDOW_DESTROY)
        {
            System.out.println("window destroy");
            System.exit(0);
            return true;
        }
        else if(ea.id==Event.ACTION_EVENT && ea.target instanceof MenuItem)
        {
            if("Quit".equals(ea.arg.toString()))
            {
                System.out.println("exit clicked");
                System.exit(0);
                return true;
            }
            else 
            {
                x= "you selected "+ea.arg.toString()+".";
                System.out.println(ea);
                System.out.println(ea.arg);
	 	repaint();              
                return true;
            }
            
         }
        else
            return false;
    } 
}






