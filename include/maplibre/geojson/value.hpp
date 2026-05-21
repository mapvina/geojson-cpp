#pragma once

#include <mapvina/geojson.hpp>

namespace mapvina {
namespace geojson {

// Convert Value to known types. Instantiations are provided for geojson, geometry, feature, and
// feature_collection.
template <class T>
T convert(const mapvina::geojson::value &);

// Converts Value to GeoJSON type.
geojson convert(const mapvina::geojson::value &);

// Convert inputs of known types to Value. Instantiations are provided for geojson, geometry, feature, and
// feature_collection.
template <class T>
mapvina::geojson::value convert(const T &);

// Converts GeoJSON type to Value.
mapvina::geojson::value convert(const geojson &);

} // namespace geojson
} // namespace mapvina
