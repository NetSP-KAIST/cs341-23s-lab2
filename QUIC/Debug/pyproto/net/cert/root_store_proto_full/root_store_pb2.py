# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: root_store.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x10root_store.proto\x12\x11\x63hrome_root_store\"Y\n\x0bTrustAnchor\x12\r\n\x03\x64\x65r\x18\x01 \x01(\x0cH\x00\x12\x14\n\nsha256_hex\x18\x02 \x01(\tH\x00\x12\x16\n\x0e\x65v_policy_oids\x18\x03 \x03(\tB\r\n\x0b\x63\x65rtificate\"Y\n\tRootStore\x12\x35\n\rtrust_anchors\x18\x01 \x03(\x0b\x32\x1e.chrome_root_store.TrustAnchor\x12\x15\n\rversion_major\x18\x02 \x01(\x03\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'root_store_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _TRUSTANCHOR._serialized_start=39
  _TRUSTANCHOR._serialized_end=128
  _ROOTSTORE._serialized_start=130
  _ROOTSTORE._serialized_end=219
# @@protoc_insertion_point(module_scope)