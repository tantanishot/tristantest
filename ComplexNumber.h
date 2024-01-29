#include <iostream>

class ComplexNumber {
    private:
        int a_;
        int b_;

    public:

    ComplexNumber();
    ComplexNumber(int a, int b);


        void SetA(int new_a);
         void SetB(int new_b);
          void SetI(int new_i);

        int GetA();
        int GetB();
        int GetI();

        void display();

        ComplexNumber operator*(ComplexNumber& otherComplexNumber) const {
            int new_a = (a_ * otherComplexNumber.a_) - (b_ * otherComplexNumber.b_);
            int new_b = (b_ * otherComplexNumber.a_) + (a_ * otherComplexNumber.b_);
            return ComplexNumber(new_a, new_b);
        }

        ComplexNumber& operator*=(ComplexNumber& otherComplexNumber) {
            int new_a = (a_ * otherComplexNumber.a_) - (b_ * otherComplexNumber.b_);
            int new_b = (b_ * otherComplexNumber.a_) + (a_ * otherComplexNumber.b_);

            this->a_ = new_a;
            this->b_ = new_b;

            return *this;

        }






};