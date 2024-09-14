import java.util.concurrent.CopyOnWriteArrayList;

public class Main{
    public static void main(String[] args) {
        CopyOnWriteArrayList<String> list = new CopyOnWriteArrayList<>();

        //add some elements
        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");

        Thread writeThread = new Thread(() -> {
            list.add("Date");
            list.remove("Banana");
        });

        //thread to read from a list
        Thread readerThread = new Thread(() -> {
            for (String fruit: list){
                out(fruit);
            }
        });

        writeThread.start();
        readerThread.start();

       try{
           writeThread.join();
           readerThread.join();
       }catch (InterruptedException e){
           e.printStackTrace();
       }

       out(list);
    }

    static <T> void out(T obj){
        System.out.println(obj);
    }

}
