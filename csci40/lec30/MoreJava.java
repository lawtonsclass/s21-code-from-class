public class MoreJava {
  public static void main(String[] args) {
    int x = 42;
    x++;
    System.out.println(x);

    double y = 3.1415926535;
    y = y * -1;
    System.out.println(y);

    boolean b = true;
    b = !b;
    System.out.println(b);

    String s = "hi mom";
    s = s + '!';
    System.out.println(s);

    int[] arr = new int[]{1, 2, 3, 4};
    // let's iterate through this array
    // arrays know their size!!! It's in ___.length
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();

    // Java is "garbage collected". Java *notices* when you're done
    // with something on the heap, and it deletes it for you!

    int[] arr2 = new int[42];
    arr2[2] = 3;
    arr2[3] = 4;
    arr2[4] = 5;
    // java 0s out every other index for us!!!
    for (int i = 0; i < arr2.length; i++) {
      System.out.print(arr2[i] + " ");
    }
    System.out.println();
  }
}
