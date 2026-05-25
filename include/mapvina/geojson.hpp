#pragma once

#include <mapvina/feature.hpp>
#include <mapvina/geometry.hpp>

#include <variant>

namespace mapvina {
namespace geojson {

using empty               = mapvina::geometry::empty;
using point               = mapvina::geometry::point<double>;
using multi_point         = mapvina::geometry::multi_point<double>;
using line_string         = mapvina::geometry::line_string<double>;
using linear_ring         = mapvina::geometry::linear_ring<double>;
using multi_line_string   = mapvina::geometry::multi_line_string<double>;
using polygon             = mapvina::geometry::polygon<double>;
using multi_polygon       = mapvina::geometry::multi_polygon<double>;
using geometry            = mapvina::geometry::geometry<double>;
using geometry_collection = mapvina::geometry::geometry_collection<double>;

using value              = mapvina::feature::value;
using null_value_t       = mapvina::feature::null_value_t;
using identifier         = mapvina::feature::identifier;
using feature            = mapvina::feature::feature<double>;
using feature_collection = mapvina::feature::feature_collection<double>;

using geojson = std::variant<geometry, feature, feature_collection>;

// Parse inputs of known types. Instantiations are provided for geojson, geometry, feature, and
// feature_collection.
template <class T>
T parse(const std::string &);

// Parse any GeoJSON type.
geojson parse(const std::string &);

// Stringify inputs of known types. Instantiations are provided for geojson, geometry, feature, and
// feature_collection.
template <class T>
std::string stringify(const T &);

// Stringify any GeoJSON type.
std::string stringify(const geojson &);

} // namespace geojson
} // namespace mapvina
