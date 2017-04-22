#ifndef TOOLS_H_
#define TOOLS_H_
#include <vector>
#include <stdexcept>
#include "Eigen/Dense"

class Tools {
public:
  /**
  * Constructor.
  */
  Tools();

  /**
  * Destructor.
  */
  virtual ~Tools();

  /**
  * A helper method to calculate RMSE.
  */
  static Eigen::VectorXd CalculateRMSE(const std::vector<Eigen::VectorXd> &estimations, const std::vector<Eigen::VectorXd> &ground_truth);

  static double normalize_angle(double angle);
};

#define PI 3.1415926535897932384626433832795

#endif
