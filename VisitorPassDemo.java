// Abstract class
abstract class VisitorPass {
    abstract int calculateTicketPrice(int numberOfVisitors);
}

// VIPPass class with higher price
class VIPPass extends VisitorPass {
    public int calculateTicketPrice(int numberOfVisitors) {
        return numberOfVisitors * 1000; 
    }
}

// FamilyPass class with discount for group
class FamilyPass extends VisitorPass {
    public int calculateTicketPrice(int numberOfVisitors) {
        return numberOfVisitors * 500; // 500 per person in family group
    }
}

// GeneralPass class for standard visitors
class GeneralPass extends VisitorPass {
    public int calculateTicketPrice(int numberOfVisitors) {
        return numberOfVisitors * 300; 
    }
}

// Main class
public class VisitorPassDemo {
    public static void main(String[] args) {
        
        VIPPass vip = new VIPPass();
        FamilyPass family = new FamilyPass();
        GeneralPass general = new GeneralPass();
       
        int vipCount = 2;
        int familyCount = 5;
        int generalCount = 3;

        System.out.println("VIP Pass Price: Rs. " + vip.calculateTicketPrice(vipCount));
        System.out.println("Family Pass Price: Rs. " + family.calculateTicketPrice(familyCount));
        System.out.println("General Pass Price: Rs. " + general.calculateTicketPrice(generalCount));
    }
}
