# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_msgs:msg/Defaults.idl
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


class Metaclass_Defaults(type):
    """Metaclass of message 'Defaults'."""

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
            module = import_type_support('test_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_msgs.msg.Defaults')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__defaults
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__defaults
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__defaults
            cls._TYPE_SUPPORT = module.type_support_msg__msg__defaults
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__defaults

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BOOL_VALUE__DEFAULT': True,
            'BYTE_VALUE__DEFAULT': b'2',
            'CHAR_VALUE__DEFAULT': 100,
            'FLOAT32_VALUE__DEFAULT': 1.125,
            'FLOAT64_VALUE__DEFAULT': 1.125,
            'INT8_VALUE__DEFAULT': -50,
            'UINT8_VALUE__DEFAULT': 200,
            'INT16_VALUE__DEFAULT': -1000,
            'UINT16_VALUE__DEFAULT': 2000,
            'INT32_VALUE__DEFAULT': -30000,
            'UINT32_VALUE__DEFAULT': 60000,
            'INT64_VALUE__DEFAULT': -40000000,
            'UINT64_VALUE__DEFAULT': 50000000,
        }

    @property
    def BOOL_VALUE__DEFAULT(cls):
        """Return default value for message field 'bool_value'."""
        return True

    @property
    def BYTE_VALUE__DEFAULT(cls):
        """Return default value for message field 'byte_value'."""
        return b'2'

    @property
    def CHAR_VALUE__DEFAULT(cls):
        """Return default value for message field 'char_value'."""
        return 100

    @property
    def FLOAT32_VALUE__DEFAULT(cls):
        """Return default value for message field 'float32_value'."""
        return 1.125

    @property
    def FLOAT64_VALUE__DEFAULT(cls):
        """Return default value for message field 'float64_value'."""
        return 1.125

    @property
    def INT8_VALUE__DEFAULT(cls):
        """Return default value for message field 'int8_value'."""
        return -50

    @property
    def UINT8_VALUE__DEFAULT(cls):
        """Return default value for message field 'uint8_value'."""
        return 200

    @property
    def INT16_VALUE__DEFAULT(cls):
        """Return default value for message field 'int16_value'."""
        return -1000

    @property
    def UINT16_VALUE__DEFAULT(cls):
        """Return default value for message field 'uint16_value'."""
        return 2000

    @property
    def INT32_VALUE__DEFAULT(cls):
        """Return default value for message field 'int32_value'."""
        return -30000

    @property
    def UINT32_VALUE__DEFAULT(cls):
        """Return default value for message field 'uint32_value'."""
        return 60000

    @property
    def INT64_VALUE__DEFAULT(cls):
        """Return default value for message field 'int64_value'."""
        return -40000000

    @property
    def UINT64_VALUE__DEFAULT(cls):
        """Return default value for message field 'uint64_value'."""
        return 50000000


class Defaults(metaclass=Metaclass_Defaults):
    """Message class 'Defaults'."""

    __slots__ = [
        '_bool_value',
        '_byte_value',
        '_char_value',
        '_float32_value',
        '_float64_value',
        '_int8_value',
        '_uint8_value',
        '_int16_value',
        '_uint16_value',
        '_int32_value',
        '_uint32_value',
        '_int64_value',
        '_uint64_value',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'bool_value': 'boolean',
        'byte_value': 'octet',
        'char_value': 'uint8',
        'float32_value': 'float',
        'float64_value': 'double',
        'int8_value': 'int8',
        'uint8_value': 'uint8',
        'int16_value': 'int16',
        'uint16_value': 'uint16',
        'int32_value': 'int32',
        'uint32_value': 'uint32',
        'int64_value': 'int64',
        'uint64_value': 'uint64',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.bool_value = kwargs.get(
            'bool_value', Defaults.BOOL_VALUE__DEFAULT)
        self.byte_value = kwargs.get(
            'byte_value', Defaults.BYTE_VALUE__DEFAULT)
        self.char_value = kwargs.get(
            'char_value', Defaults.CHAR_VALUE__DEFAULT)
        self.float32_value = kwargs.get(
            'float32_value', Defaults.FLOAT32_VALUE__DEFAULT)
        self.float64_value = kwargs.get(
            'float64_value', Defaults.FLOAT64_VALUE__DEFAULT)
        self.int8_value = kwargs.get(
            'int8_value', Defaults.INT8_VALUE__DEFAULT)
        self.uint8_value = kwargs.get(
            'uint8_value', Defaults.UINT8_VALUE__DEFAULT)
        self.int16_value = kwargs.get(
            'int16_value', Defaults.INT16_VALUE__DEFAULT)
        self.uint16_value = kwargs.get(
            'uint16_value', Defaults.UINT16_VALUE__DEFAULT)
        self.int32_value = kwargs.get(
            'int32_value', Defaults.INT32_VALUE__DEFAULT)
        self.uint32_value = kwargs.get(
            'uint32_value', Defaults.UINT32_VALUE__DEFAULT)
        self.int64_value = kwargs.get(
            'int64_value', Defaults.INT64_VALUE__DEFAULT)
        self.uint64_value = kwargs.get(
            'uint64_value', Defaults.UINT64_VALUE__DEFAULT)

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
        if self.bool_value != other.bool_value:
            return False
        if self.byte_value != other.byte_value:
            return False
        if self.char_value != other.char_value:
            return False
        if self.float32_value != other.float32_value:
            return False
        if self.float64_value != other.float64_value:
            return False
        if self.int8_value != other.int8_value:
            return False
        if self.uint8_value != other.uint8_value:
            return False
        if self.int16_value != other.int16_value:
            return False
        if self.uint16_value != other.uint16_value:
            return False
        if self.int32_value != other.int32_value:
            return False
        if self.uint32_value != other.uint32_value:
            return False
        if self.int64_value != other.int64_value:
            return False
        if self.uint64_value != other.uint64_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bool_value(self):
        """Message field 'bool_value'."""
        return self._bool_value

    @bool_value.setter
    def bool_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'bool_value' field must be of type 'bool'"
        self._bool_value = value

    @builtins.property
    def byte_value(self):
        """Message field 'byte_value'."""
        return self._byte_value

    @byte_value.setter
    def byte_value(self, value):
        if self._check_fields:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'byte_value' field must be of type 'bytes' or 'ByteString' with length 1"
        self._byte_value = value

    @builtins.property
    def char_value(self):
        """Message field 'char_value'."""
        return self._char_value

    @char_value.setter
    def char_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'char_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'char_value' field must be an unsigned integer in [0, 255]"
        self._char_value = value

    @builtins.property
    def float32_value(self):
        """Message field 'float32_value'."""
        return self._float32_value

    @float32_value.setter
    def float32_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'float32_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'float32_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._float32_value = value

    @builtins.property
    def float64_value(self):
        """Message field 'float64_value'."""
        return self._float64_value

    @float64_value.setter
    def float64_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'float64_value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'float64_value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._float64_value = value

    @builtins.property
    def int8_value(self):
        """Message field 'int8_value'."""
        return self._int8_value

    @int8_value.setter
    def int8_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int8_value' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'int8_value' field must be an integer in [-128, 127]"
        self._int8_value = value

    @builtins.property
    def uint8_value(self):
        """Message field 'uint8_value'."""
        return self._uint8_value

    @uint8_value.setter
    def uint8_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint8_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'uint8_value' field must be an unsigned integer in [0, 255]"
        self._uint8_value = value

    @builtins.property
    def int16_value(self):
        """Message field 'int16_value'."""
        return self._int16_value

    @int16_value.setter
    def int16_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int16_value' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'int16_value' field must be an integer in [-32768, 32767]"
        self._int16_value = value

    @builtins.property
    def uint16_value(self):
        """Message field 'uint16_value'."""
        return self._uint16_value

    @uint16_value.setter
    def uint16_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint16_value' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'uint16_value' field must be an unsigned integer in [0, 65535]"
        self._uint16_value = value

    @builtins.property
    def int32_value(self):
        """Message field 'int32_value'."""
        return self._int32_value

    @int32_value.setter
    def int32_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int32_value' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'int32_value' field must be an integer in [-2147483648, 2147483647]"
        self._int32_value = value

    @builtins.property
    def uint32_value(self):
        """Message field 'uint32_value'."""
        return self._uint32_value

    @uint32_value.setter
    def uint32_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint32_value' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uint32_value' field must be an unsigned integer in [0, 4294967295]"
        self._uint32_value = value

    @builtins.property
    def int64_value(self):
        """Message field 'int64_value'."""
        return self._int64_value

    @int64_value.setter
    def int64_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'int64_value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'int64_value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._int64_value = value

    @builtins.property
    def uint64_value(self):
        """Message field 'uint64_value'."""
        return self._uint64_value

    @uint64_value.setter
    def uint64_value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'uint64_value' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'uint64_value' field must be an unsigned integer in [0, 18446744073709551615]"
        self._uint64_value = value
