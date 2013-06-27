"""autogenerated by genpy from AutoNav/circle_control.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class circle_control(genpy.Message):
  _md5sum = "53b73df79b80e8a9ac1f572270c19462"
  _type = "AutoNav/circle_control"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 yaw

float32 goalX
float32 goalY

float32 errorX
float32 errorY

float32 PerrorX
float32 PerrorY

float32 PvelX
float32 PvelY

float32 VerrX
float32 VerrY
float32 VerrA

float32 CTgainP
float32 CTgainD

float32 ATgainP
float32 ATgainI

float32 ANGgainP
float32 ANGgainD
"""
  __slots__ = ['yaw','goalX','goalY','errorX','errorY','PerrorX','PerrorY','PvelX','PvelY','VerrX','VerrY','VerrA','CTgainP','CTgainD','ATgainP','ATgainI','ANGgainP','ANGgainD']
  _slot_types = ['float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       yaw,goalX,goalY,errorX,errorY,PerrorX,PerrorY,PvelX,PvelY,VerrX,VerrY,VerrA,CTgainP,CTgainD,ATgainP,ATgainI,ANGgainP,ANGgainD

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(circle_control, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.yaw is None:
        self.yaw = 0.
      if self.goalX is None:
        self.goalX = 0.
      if self.goalY is None:
        self.goalY = 0.
      if self.errorX is None:
        self.errorX = 0.
      if self.errorY is None:
        self.errorY = 0.
      if self.PerrorX is None:
        self.PerrorX = 0.
      if self.PerrorY is None:
        self.PerrorY = 0.
      if self.PvelX is None:
        self.PvelX = 0.
      if self.PvelY is None:
        self.PvelY = 0.
      if self.VerrX is None:
        self.VerrX = 0.
      if self.VerrY is None:
        self.VerrY = 0.
      if self.VerrA is None:
        self.VerrA = 0.
      if self.CTgainP is None:
        self.CTgainP = 0.
      if self.CTgainD is None:
        self.CTgainD = 0.
      if self.ATgainP is None:
        self.ATgainP = 0.
      if self.ATgainI is None:
        self.ATgainI = 0.
      if self.ANGgainP is None:
        self.ANGgainP = 0.
      if self.ANGgainD is None:
        self.ANGgainD = 0.
    else:
      self.yaw = 0.
      self.goalX = 0.
      self.goalY = 0.
      self.errorX = 0.
      self.errorY = 0.
      self.PerrorX = 0.
      self.PerrorY = 0.
      self.PvelX = 0.
      self.PvelY = 0.
      self.VerrX = 0.
      self.VerrY = 0.
      self.VerrA = 0.
      self.CTgainP = 0.
      self.CTgainD = 0.
      self.ATgainP = 0.
      self.ATgainI = 0.
      self.ANGgainP = 0.
      self.ANGgainD = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_18f.pack(_x.yaw, _x.goalX, _x.goalY, _x.errorX, _x.errorY, _x.PerrorX, _x.PerrorY, _x.PvelX, _x.PvelY, _x.VerrX, _x.VerrY, _x.VerrA, _x.CTgainP, _x.CTgainD, _x.ATgainP, _x.ATgainI, _x.ANGgainP, _x.ANGgainD))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 72
      (_x.yaw, _x.goalX, _x.goalY, _x.errorX, _x.errorY, _x.PerrorX, _x.PerrorY, _x.PvelX, _x.PvelY, _x.VerrX, _x.VerrY, _x.VerrA, _x.CTgainP, _x.CTgainD, _x.ATgainP, _x.ATgainI, _x.ANGgainP, _x.ANGgainD,) = _struct_18f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_18f.pack(_x.yaw, _x.goalX, _x.goalY, _x.errorX, _x.errorY, _x.PerrorX, _x.PerrorY, _x.PvelX, _x.PvelY, _x.VerrX, _x.VerrY, _x.VerrA, _x.CTgainP, _x.CTgainD, _x.ATgainP, _x.ATgainI, _x.ANGgainP, _x.ANGgainD))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 72
      (_x.yaw, _x.goalX, _x.goalY, _x.errorX, _x.errorY, _x.PerrorX, _x.PerrorY, _x.PvelX, _x.PvelY, _x.VerrX, _x.VerrY, _x.VerrA, _x.CTgainP, _x.CTgainD, _x.ATgainP, _x.ATgainI, _x.ANGgainP, _x.ANGgainD,) = _struct_18f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_18f = struct.Struct("<18f")