/*********************************************************************************
*     File Name           :     sgd.h
*     Created By          :     yuewu
*     Creation Date       :     [2016-02-18 21:33]
*     Last Modified       :     [2016-03-09 19:22]
*     Description         :     Online Gradient Descent
**********************************************************************************/

#ifndef LSOL_MODEL_OLM_OGD_H__
#define LSOL_MODEL_OLM_OGD_H__

#include <lsol/model/online_linear_model.h>

namespace lsol {
namespace model {

class OGD : public OnlineLinearModel {
 public:
  OGD(int class_num) : OnlineLinearModel(class_num) {}

 protected:
  virtual void Update(const pario::DataPoint& x, const float* predict,
                      float loss);
};  // class OGD

}  // namespace model
}  // namespace lsol
#endif
