# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: quiche/quic/core/proto/cached_network_parameters.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n6quiche/quic/core/proto/cached_network_parameters.proto\x12\x04quic\"\xc7\x02\n\x17\x43\x61\x63hedNetworkParameters\x12\x16\n\x0eserving_region\x18\x01 \x01(\t\x12+\n#bandwidth_estimate_bytes_per_second\x18\x02 \x01(\x05\x12/\n\'max_bandwidth_estimate_bytes_per_second\x18\x05 \x01(\x05\x12\'\n\x1fmax_bandwidth_timestamp_seconds\x18\x06 \x01(\x03\x12\x12\n\nmin_rtt_ms\x18\x03 \x01(\x05\x12!\n\x19previous_connection_state\x18\x04 \x01(\x05\x12\x11\n\ttimestamp\x18\x07 \x01(\x03\"C\n\x17PreviousConnectionState\x12\x0e\n\nSLOW_START\x10\x00\x12\x18\n\x14\x43ONGESTION_AVOIDANCE\x10\x01\x42\x02H\x03')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'quiche.quic.core.proto.cached_network_parameters_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'H\003'
  _CACHEDNETWORKPARAMETERS._serialized_start=65
  _CACHEDNETWORKPARAMETERS._serialized_end=392
  _CACHEDNETWORKPARAMETERS_PREVIOUSCONNECTIONSTATE._serialized_start=325
  _CACHEDNETWORKPARAMETERS_PREVIOUSCONNECTIONSTATE._serialized_end=392
# @@protoc_insertion_point(module_scope)
