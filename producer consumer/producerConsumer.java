int buf; int p = 0; int c = 0;

public void produce() {
    while (p < 3)
    {
        static int a[3] = {2,3,1};

        buf = a[p];
        p - p + 1;
    }

}

public void consumer()
{

    static int b[3] = {0,0,0};

    while (c < 2)
    {

        b[c] = buf;

        c = c + 1;
    }
}

public static void main()
{

    Thread t1 = new Thread(produce());
    Thread t2 = new Thread(consumer());

    t1.start();
    t2.start();
}
