#include <pybind11/eigen.h>
#include <pybind11/numpy.h>
#include <pybind11/pybind11.h>

#include "Eigen/Dense"

#include "polyscope/volume_grid.h"
#include "polyscope/polyscope.h"

#include "utils.h"

namespace py = pybind11;
namespace ps = polyscope;

// For overloaded functions, with C++11 compiler only
template <typename... Args>
using overload_cast_ = pybind11::detail::overload_cast_impl<Args...>;


// clang-format off
void bind_volume_grid(py::module& m) {

  /*
  // == Helper quantity classes

  // Scalar quantities
  bindScalarQuantity<ps::PointCloudScalarQuantity>(m, "PointCloudScalarQuantity");

  // Color quantities
  bindColorQuantity<ps::PointCloudColorQuantity>(m, "PointCloudColorQuantity");

  // Vector quantities
  bindVectorQuantity<ps::PointCloudVectorQuantity>(m, "PointCloudVectorQuantity");


  // == Main class
  bindStructure<ps::PointCloud>(m, "PointCloud")

    // basics
    .def("update_point_positions", &ps::PointCloud::updatePointPositions<Eigen::MatrixXd>, "Update point positions")
    .def("update_point_positions2D", &ps::PointCloud::updatePointPositions2D<Eigen::MatrixXd>, "Update point positions")
    .def("n_points", &ps::PointCloud::nPoints, "# points")

    // options
    .def("set_radius", &ps::PointCloud::setPointRadius, "Set radius")
    .def("get_radius", &ps::PointCloud::getPointRadius, "Get radius")
    .def("set_color", &ps::PointCloud::setPointColor, "Set color")
    .def("get_color", &ps::PointCloud::getPointColor, "Get color")
    .def("set_material", &ps::PointCloud::setMaterial, "Set material")
    .def("get_material", &ps::PointCloud::getMaterial, "Get material")
    .def("set_point_render_mode", &ps::PointCloud::setPointRenderMode, "Set point render mode")
    .def("get_point_render_mode", &ps::PointCloud::getPointRenderMode, "Get point render mode")

    // slice planes
    .def("set_ignore_slice_plane", &ps::PointCloud::setIgnoreSlicePlane, "Set ignore slice plane")
    .def("get_ignore_slice_plane", &ps::PointCloud::getIgnoreSlicePlane, "Get ignore slice plane")
    .def("set_cull_whole_elements", &ps::PointCloud::setCullWholeElements, "Set cull whole elements")
    .def("get_cull_whole_elements", &ps::PointCloud::getCullWholeElements, "Get cull whole elements")
     

    // variable radius
    .def("set_point_radius_quantity", 
        overload_cast_<ps::PointCloudScalarQuantity*, bool>()(&ps::PointCloud::setPointRadiusQuantity), 
        "Use a scalar to set radius", py::arg("quantity"), py::arg("autoscale")=true)
    .def("set_point_radius_quantity", 
        overload_cast_<std::string, bool>()(&ps::PointCloud::setPointRadiusQuantity), 
        "Use a scalar to set radius by name", py::arg("quantity_name"), py::arg("autoscale")=true)
    .def("clear_point_radius_quantity", &ps::PointCloud::clearPointRadiusQuantity, "Clear any quantity setting the radius")
        
    // quantities
    .def("add_color_quantity", &ps::PointCloud::addColorQuantity<Eigen::MatrixXd>, "Add a color function at points",

    */
}
