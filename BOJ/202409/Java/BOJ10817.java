import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] numbers = br.readLine().split(" ");
        List<Integer> numList = new ArrayList<>();
        for (String number : numbers) {
            numList.add(Integer.parseInt(number));
        }
        Collections.sort(numList);
        System.out.println(numList.get(1));
    }
}