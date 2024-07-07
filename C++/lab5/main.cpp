#include "library.h"


int main() {
    Course cs101("Introduction to Programming", "CS101");
    Course btl200("Mathematics for Developers", "BTL200");
    Course btp100("Intro to C", "BTP100");
    Course btp200("Intro to OOP with C++", "BTP200");
    
    Student donald("Donald", "Duck", 3152);
    Student mickey("Mickey", "Mouse", 98232);
    Student minnie("Minnie", "Mouse", 19271);

    donald.add_course(cs101);
    donald.add_course(btp100);
    
    mickey.add_course(btl200);
    mickey.add_course(btp200);
    
    minnie.add_course(btl200);
    minnie.add_course(cs101);
    minnie.add_course(btp100);
    
    minnie.display_courses();
    mickey.display_courses();
    btl200.display_students();

    return 0;
}