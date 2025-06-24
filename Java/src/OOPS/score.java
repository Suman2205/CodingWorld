package OOPS;

public class score implements test,activity{
    @Override
    public void activityScore() {
        System.out.println("Your test score: ");
    }

    @Override
    public void testScore() {
        System.out.println("your activity score: ");
    }
}
