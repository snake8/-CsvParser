//  PutDataFromCsvInMatrix.cpp
//  NeuralNetworkCPP
//
//  Created by Daniel Solovich on 9/27/17.
//  Copyright © 2017 Daniel Solovich. All rights reserved.
//

#include "PutDataFromCsvInMatrix.hpp"

Matrix<double> putDataIntoMatrix(std::string pathToFile) {
    Matrix<double> matrixWithData;
    std::vector<std::vector<double>> vec;
    std::ifstream file;
    file.open(pathToFile);
    if (file) {
        std::string line;
        while (getline(file, line)) {
            std::istringstream split(line);
            double value;
            char sep;
            std::vector<double> nexRow;
            while (split >> value) {
                nexRow.push_back(value);
                split >> sep;
            }
            vec.push_back(nexRow);
        }
    }
    matrixWithData.resizeMatrix(vec.size(), vec[0].size());
    for (size_t i = 0; i < matrixWithData.size1(); i++) {
        for (size_t j = 0; j < matrixWithData.size2(); j++)
            matrixWithData(i, j) = vec[i][j];
    }
    return matrixWithData;
}


Matrix<double> scaleMatrixForNetwork(Matrix<double>* allValues, size_t row) {
    Matrix<double> scaledMatrix(1, allValues->size2());
    for (size_t i = 0; i < allValues->size2(); i++)
        scaledMatrix(0, i) = (allValues->operator()(row, i) / 255.0 * .99) + .01;
    scaledMatrix.removeRow(0);
    return scaledMatrix;
}

void showNeuralNetworkResult(Matrix<double>& neuralNetworkResult) {
    for (size_t i = 0; i < neuralNetworkResult.size1(); i++) {
        for (size_t j = 0; j < neuralNetworkResult.size2(); j++)
            std::cout << "Label: " << i << " ----> " << neuralNetworkResult(i, j) << std::endl;
    }
}
