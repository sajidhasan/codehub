import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> unsortedNumbers = new ArrayList<>();
        unsortedNumbers.add(3);
        unsortedNumbers.add(0);
        unsortedNumbers.add(2);
        unsortedNumbers.add(1);
        System.out.println("Before sorting: ");
        printList(unsortedNumbers);

        insertionSort(unsortedNumbers);
        System.out.println("After sorting: ");
        printList(unsortedNumbers);
    }

    // Method to print the ArrayList
    public static void printList(ArrayList<Integer> list) {
        for (int element : list) {
            System.out.print(element + " ");
        }
        System.out.println();
    }

    public static void insertionSort(ArrayList<Integer> nums){
        for(int i = 1; i < nums.size(); i++){
            int key = nums.get(i);
            int j = i-1;
            while(j >= 0 && nums.get(j) > key){
                nums.set(j+1, nums.get(j));
                j = j - 1;
            }
            nums.set(j+1, key);
        }
    }

}
