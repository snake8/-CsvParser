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


#endif /* PutDataFromCsvInMatrix_hpp */
