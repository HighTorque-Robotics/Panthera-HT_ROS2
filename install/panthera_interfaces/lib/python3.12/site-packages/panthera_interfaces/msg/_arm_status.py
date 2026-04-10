# generated from rosidl_generator_py/resource/_idl.py.em
# with input from panthera_interfaces:msg/ArmStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'motor_modes'
# Member 'motor_faults'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmStatus(type):
    """Metaclass of message 'ArmStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('panthera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'panthera_interfaces.msg.ArmStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmStatus(metaclass=Metaclass_ArmStatus):
    """Message class 'ArmStatus'."""

    __slots__ = [
        '_header',
        '_arm_enabled',
        '_motion_status',
        '_error_message',
        '_motor_modes',
        '_motor_faults',
        '_joint_at_limit',
        '_gripper_position',
        '_gripper_fault',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'arm_enabled': 'boolean',
        'motion_status': 'uint8',
        'error_message': 'string',
        'motor_modes': 'uint8[6]',
        'motor_faults': 'uint8[6]',
        'joint_at_limit': 'boolean[6]',
        'gripper_position': 'double',
        'gripper_fault': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.arm_enabled = kwargs.get('arm_enabled', bool())
        self.motion_status = kwargs.get('motion_status', int())
        self.error_message = kwargs.get('error_message', str())
        if 'motor_modes' not in kwargs:
            self.motor_modes = numpy.zeros(6, dtype=numpy.uint8)
        else:
            self.motor_modes = kwargs.get('motor_modes')
        if 'motor_faults' not in kwargs:
            self.motor_faults = numpy.zeros(6, dtype=numpy.uint8)
        else:
            self.motor_faults = kwargs.get('motor_faults')
        self.joint_at_limit = kwargs.get(
            'joint_at_limit',
            [bool() for x in range(6)]
        )
        self.gripper_position = kwargs.get('gripper_position', float())
        self.gripper_fault = kwargs.get('gripper_fault', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.arm_enabled != other.arm_enabled:
            return False
        if self.motion_status != other.motion_status:
            return False
        if self.error_message != other.error_message:
            return False
        if any(self.motor_modes != other.motor_modes):
            return False
        if any(self.motor_faults != other.motor_faults):
            return False
        if self.joint_at_limit != other.joint_at_limit:
            return False
        if self.gripper_position != other.gripper_position:
            return False
        if self.gripper_fault != other.gripper_fault:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def arm_enabled(self):
        """Message field 'arm_enabled'."""
        return self._arm_enabled

    @arm_enabled.setter
    def arm_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'arm_enabled' field must be of type 'bool'"
        self._arm_enabled = value

    @builtins.property
    def motion_status(self):
        """Message field 'motion_status'."""
        return self._motion_status

    @motion_status.setter
    def motion_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motion_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_status' field must be an unsigned integer in [0, 255]"
        self._motion_status = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value

    @builtins.property
    def motor_modes(self):
        """Message field 'motor_modes'."""
        return self._motor_modes

    @motor_modes.setter
    def motor_modes(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'motor_modes' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 6, \
                    "The 'motor_modes' numpy.ndarray() must have a size of 6"
                self._motor_modes = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'motor_modes' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._motor_modes = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def motor_faults(self):
        """Message field 'motor_faults'."""
        return self._motor_faults

    @motor_faults.setter
    def motor_faults(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'motor_faults' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 6, \
                    "The 'motor_faults' numpy.ndarray() must have a size of 6"
                self._motor_faults = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'motor_faults' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._motor_faults = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def joint_at_limit(self):
        """Message field 'joint_at_limit'."""
        return self._joint_at_limit

    @joint_at_limit.setter
    def joint_at_limit(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'joint_at_limit' field must be a set or sequence with length 6 and each value of type 'bool'"
        self._joint_at_limit = value

    @builtins.property
    def gripper_position(self):
        """Message field 'gripper_position'."""
        return self._gripper_position

    @gripper_position.setter
    def gripper_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gripper_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper_position = value

    @builtins.property
    def gripper_fault(self):
        """Message field 'gripper_fault'."""
        return self._gripper_fault

    @gripper_fault.setter
    def gripper_fault(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gripper_fault' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_fault' field must be an unsigned integer in [0, 255]"
        self._gripper_fault = value
