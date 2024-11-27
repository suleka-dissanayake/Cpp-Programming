// ask the user input for length, width of a rectangle, then display the area and perimeter.
# include <iostream>
using namespace std ;
int main ()
{
    double length, width ;
    double area, perimeter ;
    cout << "Enter length :- " ;
    cin >> length ;
    cout << "Enter width :- " ;
    cin >> width ;
    area = length * width ;
    perimeter = (length*2)+(width*2) ;
    cout << "Area is " << area << " and Perimeter is " << perimeter;
    return 0 ;
}
