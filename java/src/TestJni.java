package lgh;

public class TestJni
{
      public native void print(String content);
      public native String printAndGet(String content);
      static
      {
           System.loadLibrary("TestJni");
      }
}
