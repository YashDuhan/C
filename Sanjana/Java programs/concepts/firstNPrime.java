package concepts;

import java.util.ArrayList;
import java.util.List;

public class firstNPrime {
public static List<Integer> generateprime(int N) {
    List<Integer> primes = new ArrayList<>();   
    primes.add(2); 
    int num = 3; 
    while (primes.size() < N) { 
        boolean is_prime = true; 
        for (int i = 0; i < primes.size(); i++) {
            if (num % primes.get(i) == 0) { 
                    is_prime = false; 
                    break; 
            }   
        }
        if (is_prime) { // If the current number is still prime after checking all previously found prime numbers
            primes.add(num); // Add it to our list of prime numbers
        }
        num += 2; // Check the next odd number (since even numbers other than 2 are not prime)
    }
    return primes;
}

public static void main(String[] args) {
    
}
}
