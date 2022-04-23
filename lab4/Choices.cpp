#include <iostream>
#include "Choices.h"
using namespace std;

void Choices::AddFigures() {
    int command;
    while (true){
        cout << "Enter your figure:\n" << "[1] - Trapezoid\n" << "[2] - Rectangle\n";
        cin >> command;
        if (command == 1){
            Trapezoid newTrapezoid;
            newTrapezoid.initFromDialog();
            Vtra.push_back(newTrapezoid);
            return;
        }
        if (command == 2){
            Rectangle newRectangle;
            newRectangle.initFromDialog();
            Vrec.push_back(newRectangle);
            return;
        }
        break;
    }

}

void Choices::ShowFigures() {
    if (!Vtra.empty()) {
        cout << "Here are your Trapezoids\n";
    }
    for (Trapezoid t : Vtra){
        t.draw();
        cout << endl;
    }
    if (!Vrec.empty()) {
        cout << "Here are your Rectangles\n";
    }
    for (Rectangle r : Vrec){
        r.draw();
        cout << endl;
    }
}

void Choices::SummarySquare() {
    float square = 0;
    for (Trapezoid t : Vtra){
        square += t.square();
    }
    for (Rectangle r : Vrec){
        square += r.square();
    }
    cout << "Here are squares of all figures: " << square << endl;
}

void Choices::SummaryPerimeter() {
    float perimeter = 0;
    for (Trapezoid t : Vtra){
        perimeter += t.perimeter();
    }
    for (Rectangle r : Vrec){
        perimeter += r.perimeter();
    }
    cout << "Here are perimetres of all figures: " << perimeter << endl;
}

void Choices::SummaryCenterMass() {
    float sumMass = 0;
    float sumMassX = 0;
    float sumMassY = 0;

    for (Trapezoid t : Vtra){
        sumMass += t.mass();
        sumMassX += t.mass() * t.position().x;
        sumMassY += t.mass() * t.position().y;
    }

    for (Rectangle r : Vrec){
        sumMass += r.mass();
        sumMassX += r.mass() * r.position().x;
        sumMassY += r.mass() * r.position().y;
    }

    centerMass -> x = sumMassX / sumMass;
    centerMass -> y = sumMassY / sumMass;

    cout << "Here are your coordinates of Mass Centre of system: \n";
    cout << "x: " << centerMass -> x << endl;
    cout << "y: " << centerMass -> y << endl;
}

void Choices::AllMemory() {
    int size = 0;
    for (Trapezoid t : Vtra){
        size += t.size();
    }
    for (Rectangle r : Vrec){
        size += r.size();
    }
    cout << "Here is sum sizes of all figures: " << size << endl;
}

void Choices::MassSort() {
    int j = 0;
    for (int i = 0; i < Vtra.size(); i++){
        j = i;
        for (int k = i; k < Vtra.size(); k++){
            if (Vtra[j].mass() > Vtra[k].mass()){
                j = k;
            }
        }
        swap(Vtra[i] , Vtra[j]);
    }
    if (!Vtra.empty()) {
        cout << "Trapezoid have been sorted!" << endl;
    }

    j = 0;
    for (int i = 0; i < Vrec.size(); i++){
        j = i;
        for (int k = i; k < Vrec.size(); k++){
            if (Vrec[j].mass() > Vrec[k].mass()){
                j = k;
            }
        }
        swap(Vrec[i] , Vrec[j]);
    }
    if (!Vrec.empty()) {
        cout << "Rectangle have been sorted!" << endl;
    }
}





