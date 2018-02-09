#ifndef LIB_INCLUDE_TICK_PROX_PROX_GROUP_L1_H_
#define LIB_INCLUDE_TICK_PROX_PROX_GROUP_L1_H_

// License: BSD 3 clause

#include "prox_with_groups.h"

template <class T>
class TProxGroupL1 : public TProxWithGroups<T> {
 protected:
  std::unique_ptr<TProx<T> > build_prox(T strength, ulong start, ulong end,
                                        bool positive);

 public:
  TProxGroupL1(T strength, SArrayULongPtr blocks_start,
               SArrayULongPtr blocks_length, bool positive);

  TProxGroupL1(T strength, SArrayULongPtr blocks_start,
               SArrayULongPtr blocks_length, ulong start, ulong end,
               bool positive);

  std::string get_class_name() const;
};

using ProxGroupL1 = TProxGroupL1<double>;

using ProxGroupL1Double = TProxGroupL1<double>;
using ProxGroupL1Float = TProxGroupL1<float>;

#endif  // LIB_INCLUDE_TICK_PROX_PROX_GROUP_L1_H_
