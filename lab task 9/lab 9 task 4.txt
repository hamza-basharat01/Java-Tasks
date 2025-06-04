// Abstract class
abstract class Seat {
    // Abstract method
    abstract int Calculate_Seat_Price(int nofseats);
}

// Business Class
class BusinessClass extends Seat {
    int seatPrice = 5000; // price per seat

    int Calculate_Seat_Price(int nofseats) {
        return seatPrice * nofseats;
    }
}

// First Class
class FirstClass extends Seat {
    int seatPrice = 3000;

    int Calculate_Seat_Price(int nofseats) {
        return seatPrice * nofseats;
    }
}

// Economy Class
class EconomyClass extends Seat {
    int seatPrice = 1500;

    int Calculate_Seat_Price(int nofseats) {
        return seatPrice * nofseats;
    }
}

// Main class to run the program
public class SeatTest {
    public static void main(String[] args) {
        BusinessClass bc = new BusinessClass();
        FirstClass fc = new FirstClass();
        EconomyClass ec = new EconomyClass();

        int businessFare = bc.Calculate_Seat_Price(2); // 2 seats
        int firstFare = fc.Calculate_Seat_Price(3);    // 3 seats
        int economyFare = ec.Calculate_Seat_Price(4);  // 4 seats

        System.out.println("Business Class Fare (2 seats): " + businessFare);
        System.out.println("First Class Fare (3 seats): " + firstFare);
        System.out.println("Economy Class Fare (4 seats): " + economyFare);
    }
}
