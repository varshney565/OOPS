package video10.abstract_class;

public abstract class LuxuryCar extends Car {
    LuxuryCar(int mileage) {
        super(mileage);
    }

    public abstract void changeGear();

    @Override
    public void pressBreak() {
        
    }
}
