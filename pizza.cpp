// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on November 25 2020
// This program calculates the total cost for a given diameter pizza

#include <iostream>
#include <iomanip>

int main() {
    // This program calculates the total cost for a given diameter pizza
    const float LABOUR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "Enter the diameter of the pizza you would like (inch):";
    std::cin >> diameter;

    // process
    sub_total = LABOUR + RENT + (COST_PER_INCH * diameter);
    total = sub_total + (sub_total * HST);


    // output
    std::cout << "" << std::endl;
    std::cout << "The cost for a " << diameter << " inch pizza is: $"
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << total << "." << std::endl;
}
