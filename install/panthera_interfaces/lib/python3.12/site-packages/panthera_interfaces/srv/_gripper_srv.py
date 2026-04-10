# generated from rosidl_generator_py/resource/_idl.py.em
# with input from panthera_interfaces:srv/GripperSrv.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GripperSrv_Request(type):
    """Metaclass of message 'GripperSrv_Request'."""

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
                'panthera_interfaces.srv.GripperSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_srv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperSrv_Request(metaclass=Metaclass_GripperSrv_Request):
    """Message class 'GripperSrv_Request'."""

    __slots__ = [
        '_gripper_angle',
        '_gripper_effort',
        '_gripper_code',
        '_set_zero',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'gripper_angle': 'double',
        'gripper_effort': 'double',
        'gripper_code': 'uint8',
        'set_zero': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.gripper_angle = kwargs.get('gripper_angle', float())
        self.gripper_effort = kwargs.get('gripper_effort', float())
        self.gripper_code = kwargs.get('gripper_code', int())
        self.set_zero = kwargs.get('set_zero', bool())

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
        if self.gripper_angle != other.gripper_angle:
            return False
        if self.gripper_effort != other.gripper_effort:
            return False
        if self.gripper_code != other.gripper_code:
            return False
        if self.set_zero != other.set_zero:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gripper_angle(self):
        """Message field 'gripper_angle'."""
        return self._gripper_angle

    @gripper_angle.setter
    def gripper_angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gripper_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper_angle = value

    @builtins.property
    def gripper_effort(self):
        """Message field 'gripper_effort'."""
        return self._gripper_effort

    @gripper_effort.setter
    def gripper_effort(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gripper_effort' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gripper_effort' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gripper_effort = value

    @builtins.property
    def gripper_code(self):
        """Message field 'gripper_code'."""
        return self._gripper_code

    @gripper_code.setter
    def gripper_code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gripper_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gripper_code' field must be an unsigned integer in [0, 255]"
        self._gripper_code = value

    @builtins.property
    def set_zero(self):
        """Message field 'set_zero'."""
        return self._set_zero

    @set_zero.setter
    def set_zero(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'set_zero' field must be of type 'bool'"
        self._set_zero = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GripperSrv_Response(type):
    """Metaclass of message 'GripperSrv_Response'."""

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
                'panthera_interfaces.srv.GripperSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperSrv_Response(metaclass=Metaclass_GripperSrv_Response):
    """Message class 'GripperSrv_Response'."""

    __slots__ = [
        '_code',
        '_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'code': 'int64',
        'status': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.code = kwargs.get('code', int())
        self.status = kwargs.get('status', bool())

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
        if self.code != other.code:
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def code(self):
        """Message field 'code'."""
        return self._code

    @code.setter
    def code(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'code' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'code' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._code = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GripperSrv_Event(type):
    """Metaclass of message 'GripperSrv_Event'."""

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
                'panthera_interfaces.srv.GripperSrv_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_srv__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_srv__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_srv__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_srv__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_srv__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperSrv_Event(metaclass=Metaclass_GripperSrv_Event):
    """Message class 'GripperSrv_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<panthera_interfaces/GripperSrv_Request, 1>',
        'response': 'sequence<panthera_interfaces/GripperSrv_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['panthera_interfaces', 'srv'], 'GripperSrv_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['panthera_interfaces', 'srv'], 'GripperSrv_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from panthera_interfaces.srv import GripperSrv_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, GripperSrv_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GripperSrv_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from panthera_interfaces.srv import GripperSrv_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, GripperSrv_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GripperSrv_Response'"
        self._response = value


class Metaclass_GripperSrv(type):
    """Metaclass of service 'GripperSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('panthera_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'panthera_interfaces.srv.GripperSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gripper_srv

            from panthera_interfaces.srv import _gripper_srv
            if _gripper_srv.Metaclass_GripperSrv_Request._TYPE_SUPPORT is None:
                _gripper_srv.Metaclass_GripperSrv_Request.__import_type_support__()
            if _gripper_srv.Metaclass_GripperSrv_Response._TYPE_SUPPORT is None:
                _gripper_srv.Metaclass_GripperSrv_Response.__import_type_support__()
            if _gripper_srv.Metaclass_GripperSrv_Event._TYPE_SUPPORT is None:
                _gripper_srv.Metaclass_GripperSrv_Event.__import_type_support__()


class GripperSrv(metaclass=Metaclass_GripperSrv):
    from panthera_interfaces.srv._gripper_srv import GripperSrv_Request as Request
    from panthera_interfaces.srv._gripper_srv import GripperSrv_Response as Response
    from panthera_interfaces.srv._gripper_srv import GripperSrv_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
