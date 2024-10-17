class Shape {  
    void draw() {
        System.out.println("drawing...");
    }  
}  

class Rectangle extends Shape {  
    void draw() {
        System.out.println("drawing rectangle...");
    }  
} 

class Circle extends Shape {  
    void draw() {
        System.out.println("drawing circle...");
    }  
}  

class Triangle extends Shape {  
    void draw() {
        System.out.println("drawing triangle...");
    }  
}  

class TestPolymorphism {  
    public static void main(String[] args) {  
        Shape shape = new Shape(); 
        shape.draw();
        
        shape = new Rectangle(); 
        shape.draw();  
        
        shape = new Circle();  
        shape.draw();  
        
        shape = new Triangle();  
        shape.draw();  
    }  
}
