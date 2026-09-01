#ifndef PANTHERA_HARDWARE__PANTHERA_HARDWARE_INTERFACE_HPP_
#define PANTHERA_HARDWARE__PANTHERA_HARDWARE_INTERFACE_HPP_

#include <memory>
#include <string>
#include <vector>

#include "hardware_interface/handle.hpp"
#include "hardware_interface/types/hardware_component_interface_params.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "rclcpp/macros.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"

// Forward declaration
namespace panthera {
class Panthera;
}

namespace panthera_hardware
{
class GravityModel;

class PantheraHardwareInterface : public hardware_interface::SystemInterface
{
public:
  RCLCPP_SHARED_PTR_DEFINITIONS(PantheraHardwareInterface)

  hardware_interface::CallbackReturn on_init(
    const hardware_interface::HardwareComponentInterfaceParams & params) override;

  hardware_interface::CallbackReturn on_configure(
    const rclcpp_lifecycle::State & previous_state) override;

  hardware_interface::CallbackReturn on_activate(
    const rclcpp_lifecycle::State & previous_state) override;

  hardware_interface::CallbackReturn on_deactivate(
    const rclcpp_lifecycle::State & previous_state) override;

  hardware_interface::return_type read(
    const rclcpp::Time & time, const rclcpp::Duration & period) override;

  hardware_interface::return_type write(
    const rclcpp::Time & time, const rclcpp::Duration & period) override;

private:
  // Panthera robot instance
  std::unique_ptr<panthera::Panthera> robot_;
  std::shared_ptr<GravityModel> gravity_model_;

  // Configuration
  std::string config_file_;

  // Joint states
  std::vector<double> hw_positions_;
  std::vector<double> hw_velocities_;
  std::vector<double> hw_efforts_;

  // Joint commands
  std::vector<double> hw_commands_positions_;
  std::vector<double> hw_commands_velocities_;
  std::vector<double> hw_commands_efforts_;

  // Lyrical ros2_control owns interface storage. These cached handles avoid
  // name lookups in the real-time read/write loop.
  std::vector<hardware_interface::StateInterface::SharedPtr> position_state_interfaces_;
  std::vector<hardware_interface::StateInterface::SharedPtr> velocity_state_interfaces_;
  std::vector<hardware_interface::StateInterface::SharedPtr> effort_state_interfaces_;
  std::vector<hardware_interface::CommandInterface::SharedPtr> position_command_interfaces_;
  std::vector<hardware_interface::CommandInterface::SharedPtr> velocity_command_interfaces_;
  std::vector<hardware_interface::CommandInterface::SharedPtr> effort_command_interfaces_;

  // Control parameters
  std::vector<double> max_torques_;
  std::vector<double> max_velocities_;
  std::vector<double> kp_gains_;
  std::vector<double> kd_gains_;

  // Control mode
  std::string control_mode_;  // "position_velocity", "pd_control", "full_control", or "mit_gravity_compensation"

  // Gripper conversion: radians to meters
  double gripper_rad_to_m_;  // Conversion factor for gripper position (rad to m)

  // Use velocity and effort commands
  bool use_velocity_commands_;
  bool use_effort_commands_;
};

}  // namespace panthera_hardware

#endif  // PANTHERA_HARDWARE__PANTHERA_HARDWARE_INTERFACE_HPP_
