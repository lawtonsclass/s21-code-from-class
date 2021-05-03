public class Counter {
  // there is no such thing as a function/method declaration
  // there is also no public: or private:
  //   (so you have to say public/private at the front)

  // we'll need one field called count
  // count is private
  private int count;

  // Constructor
  public Counter() {
    // let's start our Counter's count at 0
    count = 0;
  }

  // we can't mark a method as const very easily in Java
  public int getCount() {
    return count;
  }

  public void inc() {
    count++;
  }

  public void reset() {
    // reset count to 0
    count = 0;
  }

  public void reset(int newCount) {
    // reset count to newCount
    count = newCount;
  }

  // c1.add(c2)
  public Counter add(Counter other) {
    int sumCount = count + other.count;
    Counter ret = new Counter();
    ret.reset(sumCount);
    return ret;
  }

  // because main is "static", it's not really a method that's part of
  // any individual Counter object
  public static void main(String[] args) {
    Counter c = new Counter();
    System.out.println(c.getCount()); // 0
    c.inc();
    c.inc();
    c.inc();
    System.out.println(c.getCount()); // 3
    c.reset();
    c.inc();
    c.inc();
    System.out.println(c.getCount()); // 2
    c.reset(42);
    c.inc();
    c.inc();
    c.inc();
    System.out.println(c.getCount()); // 45

    Counter c2 = new Counter();
    c2.inc();
    c2.inc();
    c2.inc();

    Counter c3 = c.add(c2);
    System.out.println(c3.getCount()); // 48
  }
}
