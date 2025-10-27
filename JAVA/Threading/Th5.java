class Print2 {
    void display(String nm, int x) {
        System.out.print("Ms.");
        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
        }
        System.out.print(" " + nm);
        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
        }
        System.out.println(" " + x);
    }
}

class syn implements Runnable {
    Print2 ob;
    Thread t;
    String s;
    int priority;

    public syn(Print2 ob1, String s1, int p) {
        ob = ob1;
        s = s1;
        priority = p;
        t = new Thread(this, "abc");
        t.setPriority(p);
        t.start();
    }

    public void run() {
        synchronized (ob) {
            ob.display(s, priority);
        }
    }
}

class Th5 {
    public static void main(String as[]) {
        Print2 ob = new Print2();
        new syn(ob, "Prity", 1); // Changed priority to 1
        new syn(ob, "Meghna", 5);
        new syn(ob, "Debalina", 6);
        new syn(ob, "Tuhina", 10);
    }
}








