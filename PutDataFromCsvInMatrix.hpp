//
//  PutDataFromCsvInMatrix.hpp
//  NeuralNetworkCPP
//
//  Created by Daniel Solovich on 9/27/17.
//  Copyright © 2017 Daniel Solovich. All rights reserved.
//

#ifndef PutDataFromCsvInMatrix_hpp
#define PutDataFromCsvInMatrix_hpp
#include "../Matrix/Matrix.h"


#include <fstream>
#include <sstream>



Matrix<double> putDataIntoMatrix(std::string pathToFile);

Matrix<double> scaleMatrixForTesting(Matrix<double>* allValues);

Matrix<double> scaleMatrixForNetwork(Matrix<double>* allValues, size_t row);

Matrix<double> createTargets(Matrix<double>* allValues, size_t index);

void showNeuralNetworkResult(Matrix<double>& neuralNetworkResult);

#endif /* PutDataFromCsvInMatrix_hpp */
