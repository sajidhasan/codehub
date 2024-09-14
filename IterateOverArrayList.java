import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Main{
    public static void main(String[] args) {

        List<String> list = new ArrayList<>();
        list.add("London");
        list.add("Manchester");
        list.add("Shefield");
        list.add("York");

        //enhanced for loop
        for(String place: list){
            out(place);
        }

        //with iterator
        for(Iterator<String> it = list.iterator(); it.hasNext();){
            String place = (String) it.next();
            out(place);
        }
      
        Iterator<String> it = list.iterator();
        while(it.hasNext()){
            String place = (String) it.next();
            out(place);
        }

        //java 8 stream + lambda
        list.stream().forEach((item) -> out(item));

        //java 8 forEach and lambda
        list.forEach((item) -> out(item));
    }

    static <T> void out(T obj){
        System.out.println(obj);
    }

}
