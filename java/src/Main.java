package lgh;

import lgh.TestJni;

public class Main
{
    public static void main(String[] args)
    {
        TestJni testJni = new TestJni();
        testJni.print("hello JNI!");
        System.out.println(testJni.printAndGet("hello JNI2!"));
    }
}
