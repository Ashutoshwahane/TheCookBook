// Draw Ellipses

import java.awt.*;
import java.applet.*;

/*<Applet code = "Ellipses.class" width=400 height=300>
</Applet>*/

public class Ellipses extends Applet
{
   public void paint(Graphics g)
   {
     g.drawOval(10,10,50,50);
     g.fillOval(100,10,75,50);
     g.drawOval(190,10,90,30);
     g.fillOval(70,90,140,100);
   }
}