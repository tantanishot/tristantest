#ifndef GARDEN_H
#define GARDEN_H


#include <iostream>

class Garden {
    private: 
        int number_of_plants;

    public: 
        void AddPlant();
        void DisplayPlants();       
        void DigUpPlant();

        int GetPlant();
        void SetPlant(int new_plants);  


        bool operator>(Garden& otherGarden)const;
        bool operator>=(Garden& otherGarden)const;
        bool operator<(Garden& otherGarden)const;
        bool operator<=(Garden& otherGarden)const;W

        //done




};
#endif GARDEN_H