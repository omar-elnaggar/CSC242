// Create a class Rectangle with attributes length and width, each of which defaults to 1. 
class Rectangle
{
private:
    double width, height;
public:
    
    Rectangle(){
        width = 1.0;
        height = 1.0;
    }

    // It has set and get methods for both length and width. 
    // The set methods should verify that length and width are each floating-point numbers larger than 0.0 and less than 20.0. 
    int setWidth(double width){
        if (this->width == width){
            return 0; // nothing to do
        } else if (width > 0.0 && width < 20.0){
            this->width = width;
            return 1; // success
        }
        else {
            return -1; // failure
        }
        
    }

    int setHeight(double height){
        if (this->height == height){
            return 0; // nothing to do
        } else if (height > 0.0 && height < 20.0){
            this->height = height;
            return 1; // success
        }
        else {
            return -1; // failure
        }
    }

    double getWidth() { return width; }
    double getHeight() { return height; }

    // Provide methods that calculate the rectangle’s perimeter and area.
    double calcArea() { 
        return height * width;
    }
    double calcPerimeter() {
        return 2 * height + 2 * width; 
    }
};
