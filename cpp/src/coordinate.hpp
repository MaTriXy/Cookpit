#pragma once

namespace cookpit
{
struct coordinate final {
  double lat_;
  double lng_;

  coordinate(double lat, double lng) : lat_(lat), lng_(lng) {}
};
}
