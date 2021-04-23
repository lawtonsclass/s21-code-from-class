// everything you do in java needs to be inside of a class
// every Blah.java file needs to implement a public class called Blah
// public just means visible to the entire world, just like C++'s
// "public:"
public class HelloWorld {
  // the main function must be part of the public class of the same
  // name as the file
  // It doesn't return 0--it's a void function
  // "static" means that the main method belongs to the HelloWorld
  // class itself, and not to any HelloWorld object
  // --> HelloWorld.main() <-- vs. HelloWorld hw; hw.main();
  // The one argument to main must always be the command line
  // arguments (an array of Strings)
  public static void main(String[] args) {
    // System.out.println(blah); translates to:
    // cout << blah << endl;
    System.out.println("Hello, world!");
    // ^ really, this is java.lang.System.out.println
  }
}
