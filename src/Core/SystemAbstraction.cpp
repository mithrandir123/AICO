/*
 * SystemAbstraction.cpp
 *
 *  Created on: 14 Aug 2013
 *      Author: s0972326
 */

#include "SystemAbstraction.h"

namespace SOC {

	using namespace Eigen;

SystemAbstraction::SystemAbstraction() {
	// TODO Auto-generated constructor stub

}

SystemAbstraction::~SystemAbstraction() {
	// TODO Auto-generated destructor stub
}

MatrixXd SystemAbstraction::GetX0()
{
	MatrixXd ret;
	GetX0(ret);
	return ret;
}

} /* namespace SOC */
