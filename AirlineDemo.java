// Interface to show flight details
interface Display {
    void show(); 
}

interface Aircraft extends Display {
    String aircraftType(); 
    int calculateCapacity(); 
}

// Passenger Jet Class
class PassengerJet implements Aircraft {
    int rows;
    int seatsPerRow;

    PassengerJet(int rows, int seatsPerRow) {
        this.rows = rows;
        this.seatsPerRow = seatsPerRow;
    }

    public String aircraftType() {
        return "Passenger Jet";
    }

    public int calculateCapacity() {
        return rows * seatsPerRow;
    }

    public void show() {
        System.out.println("Aircraft: " + aircraftType());
        System.out.println("Capacity: " + calculateCapacity() + " passengers");
    }
}

// Cargo Plane Class
class CargoPlane implements Aircraft {
    int length;
    int width;

    CargoPlane(int length, int width) {
        this.length = length;
        this.width = width;
    }

    public String aircraftType() {
        return "Cargo Plane";
    }

    public int calculateCapacity() {
        return (length * width) / 10;
    }

    public void show() {
        System.out.println("Aircraft: " + aircraftType());
        System.out.println("Cargo area: " + (length * width) + " sq.m");
        System.out.println("Estimated passenger equivalent capacity: " + calculateCapacity());
    }
}

// Private Jet Class
class PrivateJet implements Aircraft {
    int seats;

    PrivateJet(int seats) {
        this.seats = seats;
    }

    public String aircraftType() {
        return "Private Jet";
    }

    public int calculateCapacity() {
        return seats;
    }

    public void show() {
        System.out.println("Aircraft: " + aircraftType());
        System.out.println("Luxury seats: " + calculateCapacity());
    }
}

public class AirlineDemo {
    public static void main(String[] args) {
       
        PassengerJet pj = new PassengerJet(30, 6);  // 180 passengers
        CargoPlane cp = new CargoPlane(50, 20);     // 1000 sq.m → 100 passengers equivalent
        PrivateJet prj = new PrivateJet(8);         // 8 luxury seats

        // Display their details
        pj.show();
        System.out.println("----------------------------");
        cp.show();
        System.out.println("----------------------------");
        prj.show();
    }
}
